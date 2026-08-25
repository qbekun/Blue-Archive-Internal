#pragma once
#include "unitysdk.h"

class RoadPuzzleTileMapData;
class RoadPuzzleMapTileData;
class RoadPuzzleRailTileData;

#define ROADPUZZLETILEMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2186920)
#define ROADPUZZLETILEMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2186A90)
#define ROADPUZZLETILEMAPDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2187170)
#define ROADPUZZLETILEMAPDATA_ADDTILE_OFFSET UNITYSDK_OFFSET(0x21874E0)
#define ROADPUZZLETILEMAPDATA_DELETETILE_OFFSET UNITYSDK_OFFSET(0x2187670)
#define ROADPUZZLETILEMAPDATA_ADDRAILTILE_OFFSET UNITYSDK_OFFSET(0x2187700)

	inline static constexpr unsigned int RoadPuzzleTileMapData_TypeDefinitionIndex = 4066;

	class RoadPuzzleTileMapData : public Il2CppObject
	{
	public:
		Il2CppObject* Tiles; // 0x10
		Il2CppObject* BuiltInRailTileDatas; // 0x18
		Il2CppObject* LocationToTileDic; // 0x20
		Il2CppObject* LocationToBuiltInRailDic; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(RoadPuzzleTileMapData* arg)
		{
			((::System::Void(*)(RoadPuzzleTileMapData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Boolean AddTile(RoadPuzzleMapTileData* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleMapTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_ADDTILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteTile(RoadPuzzleMapTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_DELETETILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddRailTile(RoadPuzzleRailTileData* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAPDATA_ADDRAILTILE_OFFSET))(arg, nullptr);
		}

	};

