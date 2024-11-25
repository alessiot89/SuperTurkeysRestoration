#pragma warning(push, 3)
#include <API/ARK/Ark.h>
#include "json.hpp"
#pragma warning(pop)
#pragma comment(lib, "ArkApi.lib")

#include <cstdlib>
#include <fstream>
#include <mutex>
#include <string>

nlohmann::json config;

bool logEnabled = true;
std::ofstream debugLogFile;

constexpr float defaultDodoReplacementWeight = 0.2F;
constexpr float defaultAberrantDodoReplacementWeight = 0.4F;
constexpr float defaultJerboaReplacementWeight = 0.4F;

float dodoReplacementWeight;
float aberrantDodoReplacementWeight;
float jerboaReplacementWeight;

constexpr auto const dodoBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Dodo_Character_BP.Dodo_Character_BP'" };
constexpr auto const dodoAberrantBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant'" };
constexpr auto const jerboaBP{ "Blueprint'/Game/ScorchedEarth/Dinos/Jerboa/Jerboa_Character_BP.Jerboa_Character_BP'" };
constexpr auto const superTurkeyBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Turkey_Character_BP.Turkey_Character_BP'" };

enum class LogLevel
{
    none,
    info,
    warning,
    error
};

void debugLog( const std::string& info,
               LogLevel level = LogLevel::none )
{
    if( logEnabled )
    {
        std::string str;
        switch( level )
        {
        case LogLevel::none:
            break;
        case LogLevel::info:
            str += "INFO: ";
            break;
        case LogLevel::warning:
            str += "WARNING: ";
            break;
        case LogLevel::error:
            str += "ERROR: ";
            break;
        }
        str += info;
        debugLogFile << str << std::endl;
    }
}

///*
//void __fastcall APrimalWorldSettings::PreGameplaySetup(
//	APrimalWorldSettings *this)
//*/
//void PreGameplaySetup() { return NativeCall<void>( this, "APrimalWorldSettings.PreGameplaySetup"); }

DECLARE_HOOK( APrimalWorldSettings_PreGameplaySetup, void, APrimalWorldSettings* );

void hook_APrimalWorldSettings_PreGameplaySetup( APrimalWorldSettings* settings )
{

    FString superTurkeyBPPath{ superTurkeyBP };
    UClass* superTurkeyClass = UVictoryCore::BPLoadClass( &superTurkeyBPPath );
    auto activeEvent = ArkApi::GetApiUtils().GetGameState()->ActiveEventField();

    FString dodoBPPath{ dodoBP };
    UClass* dodoClass = UVictoryCore::BPLoadClass( &dodoBPPath );
    FClassRemappingWeight dodoWeights;
    dodoWeights.FromClass = dodoClass;
    dodoWeights.ToClasses.Add( superTurkeyClass );
    dodoWeights.Weights.Add( 0.2F );
    dodoWeights.ToClasses.Add( dodoClass );
    dodoWeights.Weights.Add( 1.0F );
    dodoWeights.ActiveEvent = activeEvent;
    dodoWeights.bExactMatch = true;

    FString dodoAberrantBPPath{ dodoAberrantBP };
    UClass* dodoAberrantClass = UVictoryCore::BPLoadClass( &dodoAberrantBPPath );
    FClassRemappingWeight dodoAberrantWeights;
    dodoAberrantWeights.FromClass = dodoAberrantClass;
    dodoAberrantWeights.ToClasses.Add( superTurkeyClass );
    dodoAberrantWeights.Weights.Add( 0.4F );
    dodoAberrantWeights.ToClasses.Add( dodoClass );
    dodoAberrantWeights.Weights.Add( 1.0F );
    dodoAberrantWeights.ActiveEvent = activeEvent;
    dodoAberrantWeights.bExactMatch = true;

    FString jerboaBPPath{ jerboaBP };
    UClass* jerboaClass = UVictoryCore::BPLoadClass( &jerboaBPPath );
    FClassRemappingWeight jerboaWeights;
    jerboaWeights.FromClass = jerboaClass;
    jerboaWeights.ToClasses.Add( superTurkeyClass );
    jerboaWeights.Weights.Add( 0.4F );
    jerboaWeights.ToClasses.Add( dodoClass );
    jerboaWeights.Weights.Add( 1.0F );
    jerboaWeights.ActiveEvent = activeEvent;
    jerboaWeights.bExactMatch = true;

    auto primalGameData = ArkApi::GetApiUtils().GetGameData();
    auto globalNPCRandomSpawnClassWeights = primalGameData->GlobalNPCRandomSpawnClassWeightsField();
    globalNPCRandomSpawnClassWeights.Add( dodoWeights );
    globalNPCRandomSpawnClassWeights.Add( dodoAberrantWeights );
    globalNPCRandomSpawnClassWeights.Add( jerboaWeights );

    return APrimalWorldSettings_PreGameplaySetup_original( settings );
}

void ReadConfig()
{
    const std::string logPath = ArkApi::Tools::GetCurrentDir() + "/ArkApi/Plugins/SuperTurkeysRestoration/DebugLog.txt";
    debugLogFile.open( logPath, std::ios::app );
    const std::string configPath = ArkApi::Tools::GetCurrentDir() + "/ArkApi/Plugins/SuperTurkeysRestoration/Config.json";
    std::ifstream file{ configPath };
    if( !file.is_open() )
    {
        debugLog( "================================================================================" );
        debugLog( "Super Turkeys Restoration Plugin loaded" );
        debugLog( "================================================================================" );
        debugLog( "Can't open Config.json!",
                  LogLevel::error );
        throw std::runtime_error( "Can't open Config.json" );
    }
    file >> config;
    file.close();
    // Check for debug log setting
    try
    {
        logEnabled = config["DebugLog"];
        if( logEnabled )
        {
            debugLog( "================================================================================" );
            debugLog( "Super Turkeys Restoration Plugin loaded" );
            debugLog( "================================================================================" );
        }
    }
    catch( const std::exception& )
    {
        debugLog( "================================================================================" );
        debugLog( "Super Turkeys Restoration Plugin loaded" );
        debugLog( "================================================================================" );
        debugLog( "Failed to read DebugLog setting, reverted to default (enabled)",
                  LogLevel::warning );
    }
    // Try to read DodoReplacementWeight value
    try
    {
        dodoReplacementWeight = config["DodoReplacementWeight"];
        if( ( dodoReplacementWeight < 0.0F ) or ( dodoReplacementWeight > 1.0F ) )
        {
            debugLog( "Indalid DodoReplacementWeight value, revert to default of " + std::to_string( defaultDodoReplacementWeight ),
                      LogLevel::warning );
        }
        debugLog( "DodoReplacementWeight: " + std::to_string( dodoReplacementWeight ),
                  LogLevel::info );
    }
    catch( const std::exception& )
    {
        dodoReplacementWeight = defaultDodoReplacementWeight;
        debugLog( "Invalid DodoReplacementWeight value, reverting to default " + std::to_string( defaultDodoReplacementWeight ),
                  LogLevel::warning );
    }
    // Try to read AberrantDodoReplacementWeight value
    try
    {
        aberrantDodoReplacementWeight = config["AberrantDodoReplacementWeight"];
        if( ( aberrantDodoReplacementWeight < 0.0F ) or ( aberrantDodoReplacementWeight > 1.0F ) )
        {
            debugLog( "Indalid AberrantDodoReplacementWeight value, revert to default of " + std::to_string( defaultAberrantDodoReplacementWeight ),
                      LogLevel::warning );
        }
        debugLog( "AberrantDodoReplacementWeight: " + std::to_string( aberrantDodoReplacementWeight ),
                  LogLevel::info );
    }
    catch( const std::exception& )
    {
        aberrantDodoReplacementWeight = defaultAberrantDodoReplacementWeight;
        debugLog( "Invalid AberrantDodoReplacementWeight value, reverting to default " + std::to_string( defaultAberrantDodoReplacementWeight ),
                  LogLevel::warning );
    }
    // Try to read JerboaReplacementWeight value
    try
    {
        jerboaReplacementWeight = config["JerboaReplacementWeight"];
        if( ( jerboaReplacementWeight < 0.0F ) or ( jerboaReplacementWeight > 1.0F ) )
        {
            debugLog( "Indalid JerboaReplacementWeight value, revert to default of " + std::to_string( defaultJerboaReplacementWeight ),
                      LogLevel::warning );
        }
        debugLog( "JerboaReplacementWeight: " + std::to_string( jerboaReplacementWeight ),
                  LogLevel::info );
    }
    catch( const std::exception& )
    {
        jerboaReplacementWeight = defaultJerboaReplacementWeight;
        debugLog( "Invalid JerboaReplacementWeight value, reverting to default " + std::to_string( defaultJerboaReplacementWeight ),
                  LogLevel::warning );
    }
}

void load()
{
    Log::Get().Init( "Super Turkeys Restoration" );
    try
    {
        ReadConfig();
    }
    catch( const std::exception& error )
    {
        Log::GetLog()->error( error.what() );
        throw error;
    }
    ArkApi::GetHooks().SetHook( "APrimalWorldSettings.PreGameplaySetup",
                                &hook_APrimalWorldSettings_PreGameplaySetup,
                                &APrimalWorldSettings_PreGameplaySetup_original );
}

void unload()
{
    ArkApi::GetHooks().DisableHook( "APrimalWorldSettings.PreGameplaySetup",
                                    &hook_APrimalWorldSettings_PreGameplaySetup );
}

BOOL APIENTRY DllMain( HINSTANCE /*hinstDLL*/,
                       DWORD fdwReason,
                       LPVOID /*reserved*/ )
{
    switch( fdwReason )
    {
    case DLL_PROCESS_ATTACH:
        load();
        break;
    case DLL_PROCESS_DETACH:
        if( logEnabled )
        {
            debugLog( "Plugin Unloading" );
            debugLogFile.close();
        }
        unload();
        break;
    }
    return TRUE;
}
