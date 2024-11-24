# SuperTurkeysRestoration
Re-adds Turkey Trial Super Turkeys atching the GlobalNPCRandomSpawnClassWeights data at map startup. In such way it is possible to setup the Super Turkeys using the ini config.
Like in Turkey Trial, Super Turkeys will spawn along Dodos, Aberrant Dodos and Jerboas depending on the map spawn container entries.
Please note these will not make Super Turkeys a permanent asset of primal game data, which means at every server shutdown or restart they will be wiped from the map to start respawning at next server run (Wishbones will stay).


## How to install
* Extract the plugin in ShooterGame\Binaries\Win64\ArkApi\Plugins
* -ActiveEvent=TurkeyTrial must be added at command line to allow the TurkeyTrial crafting using the Super Turkeys WishBones.
* Setup the Spawn Entries Conteiners to add the Super Turkeys where Dodos, Aberrant Dodos and Jerboas do spawn (see below for each official Map config)
* Adjust at your will the spawn weight chances for Super Turkes to spawn instead of Dodos, Aberrant Dodos and Jerboas in the config.json or leave them at default. Note the values are in normalized between 0 and 1.0, any out of range value will be reverted to default plugin values.

## Official Maps Condfig
### The Island
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### The Center
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Scorched Earth
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesEZMode_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesGreenDesert_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.170000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesOasis_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Ragnarok
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_Jungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_Jerboa_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_MonkeyIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.075000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Aberration
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="AB_DinoSpawnEntries_TwitchFertileLandEasy_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="AB_DinoSpawnEntries_TwitchFertileLand_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Extinction
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityCenter_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityCenter_DangerClose_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityObelisk_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_City_Park2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Wasteland_North_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.060000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Wasteland_South_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.200000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Ext_DinoSpawnEntries_DesertOasis_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Ext_DinoSpawnEntries_Forest_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))

```

### Valguero
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="VAL_DinoSpawnEntries_TwitchFertileLand_Mix_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_Golem_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_Plains_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Genesis: Part 1
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_Nice_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_OceanAboveWater_Land_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Crystal Isles
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesGreenDesert_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.170000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesOasis_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Genesis: Part 2
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesMeanJungle_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesNiceJungle_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Easy_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Hard_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.050000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Medium_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_GardensLake_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Lost Island
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesDesertOasis_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesGreenDesert_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.170000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### Fjordur
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="AB_DinoSpawnEntries_TwitchFertileLand_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_FallBiomeCave_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_Nice_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```

### All official maps:
```
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesEZMode_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesGreenDesert_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.170000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="SE_DinoSpawnEntriesOasis_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_Jungle_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_Jerboa_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Ragnarok_MonkeyIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.075000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="AB_DinoSpawnEntries_TwitchFertileLandEasy_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="AB_DinoSpawnEntries_TwitchFertileLand_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityCenter_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityCenter_DangerClose_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_CityObelisk_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_City_Park2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Wasteland_North_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.060000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_Wasteland_South_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.200000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Ext_DinoSpawnEntries_DesertOasis_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Ext_DinoSpawnEntries_Forest_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="VAL_DinoSpawnEntries_TwitchFertileLand_Mix_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_Golem_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_ChalkHills_Plains_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.165000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_Arctic_Forest_Nice_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="Gen1_OceanAboveWater_Land_DinoSpawnEntries_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=1.000000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesMeanJungle_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesNiceJungle_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Easy_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Hard_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.050000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesRiverLand_Medium_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_GardensLake_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_Gen2_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesBeach_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.425000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesJungle_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.100000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesDesertOasis_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntriesGreenDesert_LostIsland_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.170000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
ConfigAddNPCSpawnEntriesContainer=(NPCSpawnEntriesContainerClassString="DinoSpawnEntries_FallBiomeCave_C",NPCSpawnEntries=((AnEntryName="turkeys",EntryWeight=0.250000,NPCsToSpawnStrings=("Turkey_Character_BP_C"))),NPCSpawnLimits=((NPCClassString="Turkey_Character_BP_C",MaxPercentageOfDesiredNumToAllow=1.000000)))
```
