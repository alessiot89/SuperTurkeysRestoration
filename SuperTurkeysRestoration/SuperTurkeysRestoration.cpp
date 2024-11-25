#pragma warning(push, 3)
#include <API/ARK/Ark.h>
#include "json.hpp"
#pragma warning(pop)
#pragma comment(lib, "ArkApi.lib")

#include <cstdlib>
#include <fstream>
#include <mutex>
#include <string>


constexpr auto const dodoBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Dodo_Character_BP.Dodo_Character_BP'" };
constexpr auto const dodoAberrantBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Dodo_Character_BP_Aberrant.Dodo_Character_BP_Aberrant'" };
constexpr auto const jerboaBP{ "Blueprint'/Game/ScorchedEarth/Dinos/Jerboa/Jerboa_Character_BP.Jerboa_Character_BP'" };
constexpr auto const superTurkeyBP{ "Blueprint'/Game/PrimalEarth/Dinos/Dodo/Turkey_Character_BP.Turkey_Character_BP'" };

///*
//void __fastcall APrimalWorldSettings::PreGameplaySetup(
//	APrimalWorldSettings *this)
//*/
//void PreGameplaySetup() { return NativeCall<void>( this, "APrimalWorldSettings.PreGameplaySetup"); }

DECLARE_HOOK( APrimalWorldSettings_PreGameplaySetup, void, APrimalWorldSettings* );

void hook_APrimalWorldSettings_PreGameplaySetup( APrimalWorldSettings* settings )
{
    static bool initialized = false;

    FString superTurkeyBPPath{ superTurkeyBP };
    auto superTurkeyClass = UVictoryCore::BPLoadClass( &superTurkeyBPPath );
    auto activeEvent = ArkApi::GetApiUtils().GetGameState()->ActiveEventField();
    auto primalGameData = ArkApi::GetApiUtils().GetGameData();
    auto globalNPCRandomSpawnClassWeights = primalGameData->GlobalNPCRandomSpawnClassWeightsField();

    FString dodoBPPath{ dodoBP };
    UClass* dodoClass = UVictoryCore::BPLoadClass( &dodoBPPath );
    FClassRemappingWeight dodoWeights;
    dodoWeights.FromClass = dodoClass;
    dodoWeights.ToClasses.Add( superTurkeyClass );
    dodoWeights.Weights.Add( 0.1F );
    //dodoWeights.ToClasses.Add( dodoClass );
    //dodoWeights.Weights.Add( 1.0F );
    dodoWeights.ActiveEvent = activeEvent;
    dodoWeights.bExactMatch = true;
    globalNPCRandomSpawnClassWeights.Add( dodoWeights );
    initialized = true;

    FString dodoAberrantBPPath{ dodoAberrantBP };
    UClass* dodoAberrantClass = UVictoryCore::BPLoadClass( &dodoAberrantBPPath );
    FClassRemappingWeight dodoAberrantWeights;
    dodoAberrantWeights.FromClass = dodoAberrantClass;
    dodoAberrantWeights.ToClasses.Add( superTurkeyClass );
    dodoAberrantWeights.Weights.Add( 0.1F );
    //dodoAberrantWeights.ToClasses.Add( dodoAberrantClass );
    //dodoAberrantWeights.Weights.Add( 1.0F );
    dodoAberrantWeights.ActiveEvent = activeEvent;
    dodoAberrantWeights.bExactMatch = true;
    globalNPCRandomSpawnClassWeights.Add( dodoAberrantWeights );

    FString jerboaBPPath{ jerboaBP };
    UClass* jerboaClass = UVictoryCore::BPLoadClass( &jerboaBPPath );
    FClassRemappingWeight jerboaWeights;
    jerboaWeights.FromClass = jerboaClass;
    jerboaWeights.ToClasses.Add( superTurkeyClass );
    jerboaWeights.Weights.Add( 0.1F );
    //jerboaWeights.ToClasses.Add( jerboaClass );
    //jerboaWeights.Weights.Add( 1.0F );
    jerboaWeights.ActiveEvent = activeEvent;
    jerboaWeights.bExactMatch = true;
    globalNPCRandomSpawnClassWeights.Add( jerboaWeights );

    return APrimalWorldSettings_PreGameplaySetup_original( settings );
}

void load()
{
    Log::Get().Init( "Super Turkeys Restoration" );
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
        unload();
        break;
    }
    return TRUE;
}
