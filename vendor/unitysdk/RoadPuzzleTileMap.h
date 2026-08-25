#pragma once
#include "unitysdk.h"

class RoadPuzzleTileMapData;
namespace UnityEngine { class Transform; }
class RoadPuzzleMapTileVisual;
class RoadPuzzleTrainHandler;
class RoadPuzzleRailConnectionHandler;
namespace UnityEngine { class Coroutine; }
class RoadPuzzleRailTileVisual;
class RoadPuzzleRailTileData;
class RoadPuzzleMapTileData;

#define ROADPUZZLETILEMAP_OVERWRITERAILTILE_OFFSET UNITYSDK_OFFSET(0x2088960)
#define ROADPUZZLETILEMAP_GET_CONNECTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x2088DB0)
#define ROADPUZZLETILEMAP_ADDRAILTILETOMAPTILE_OFFSET UNITYSDK_OFFSET(0x2088DC0)
#define ROADPUZZLETILEMAP_MAKEALLTRANSITTILEMARKS_OFFSET UNITYSDK_OFFSET(0x2088EA0)
#define ROADPUZZLETILEMAP__MAKEBUILTINRAILS_G__MAKEBUILTINRAIL|24_0_OFFSET UNITYSDK_OFFSET(0x2088F60)
#define ROADPUZZLETILEMAP_MAKEBUILTINRAILS_OFFSET UNITYSDK_OFFSET(0x2087580)
#define ROADPUZZLETILEMAP_DELETERAILTILE_OFFSET UNITYSDK_OFFSET(0x2088A10)
#define ROADPUZZLETILEMAP__MAKEALLTILES_G__MAKETILE|21_0_OFFSET UNITYSDK_OFFSET(0x2089030)
#define ROADPUZZLETILEMAP_MAKEALLREWARDS_OFFSET UNITYSDK_OFFSET(0x20890E0)
#define ROADPUZZLETILEMAP_MAKEALLTILES_OFFSET UNITYSDK_OFFSET(0x2087510)
#define ROADPUZZLETILEMAP_GET_TRAINREACHEDEND_OFFSET UNITYSDK_OFFSET(0x20891C0)
#define ROADPUZZLETILEMAP_ADDRAILTILE_OFFSET UNITYSDK_OFFSET(0x2088BD0)
#define ROADPUZZLETILEMAP_PLAYTRAIN_OFFSET UNITYSDK_OFFSET(0x20891F0)
#define ROADPUZZLETILEMAP_SETREWARDTILEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x20892C0)
#define ROADPUZZLETILEMAP_INIT_OFFSET UNITYSDK_OFFSET(0x20875F0)
#define ROADPUZZLETILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2089680)

	inline static constexpr unsigned int RoadPuzzleTileMap_TypeDefinitionIndex = 3464;

	class RoadPuzzleTileMap : public Il2CppObject
	{
	public:
		RoadPuzzleTileMapData* Data; // 0x18
		::UnityEngine::Transform* TileRoot; // 0x20
		Il2CppObject* LocationToMapTileDic; // 0x28
		Il2CppObject* LocationToRailTileDic; // 0x30
		Il2CppObject* LocationToRewardDic; // 0x38
		Il2CppObject* MapTileList; // 0x40
		Il2CppObject* RailTileList; // 0x48
		Il2CppObject* RewardList; // 0x50
		Il2CppObject* TransitMarkList; // 0x58
		Il2CppObject* EmptyMapTileList; // 0x60
		Il2CppObject* TransitTileList; // 0x68
		Il2CppObject* RailPlacedMapTileList; // 0x70
		RoadPuzzleMapTileVisual* StartTile; // 0x78
		RoadPuzzleMapTileVisual* EndTile; // 0x80
		RoadPuzzleTrainHandler* trainHandler; // 0x88
		RoadPuzzleRailConnectionHandler* connectionHandler; // 0x90
		::UnityEngine::Coroutine* trainCoroutine; // 0x98

		::System::Void OverwriteRailTile(RoadPuzzleRailTileVisual* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(RoadPuzzleRailTileVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_OVERWRITERAILTILE_OFFSET))(arg, arg2, nullptr);
		}

		RoadPuzzleRailConnectionHandler* get_ConnectionHandler()
		{
			return ((RoadPuzzleRailConnectionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_GET_CONNECTIONHANDLER_OFFSET))(nullptr);
		}

		::System::Void AddRailTileToMapTile(RoadPuzzleMapTileVisual* arg, RoadPuzzleRailTileVisual* arg2)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, RoadPuzzleRailTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_ADDRAILTILETOMAPTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* MakeAllTransitTileMarks(Il2CppObject* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_MAKEALLTRANSITTILEMARKS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _MakeBuiltInRails_g__MakeBuiltInRail|24_0(RoadPuzzleRailTileData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP__MAKEBUILTINRAILS_G__MAKEBUILTINRAIL|24_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeBuiltInRails()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_MAKEBUILTINRAILS_OFFSET))(nullptr);
		}

		::System::Void DeleteRailTile(RoadPuzzleRailTileVisual* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(RoadPuzzleRailTileVisual*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_DELETERAILTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* _MakeAllTiles_g__MakeTile|21_0(RoadPuzzleMapTileData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleMapTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP__MAKEALLTILES_G__MAKETILE|21_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeAllRewards(Il2CppObject* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_MAKEALLREWARDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* MakeAllTiles()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_MAKEALLTILES_OFFSET))(nullptr);
		}

		::System::Boolean get_TrainReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_GET_TRAINREACHEDEND_OFFSET))(nullptr);
		}

		::System::Boolean AddRailTile(RoadPuzzleRailTileVisual* arg)
		{
			return ((::System::Boolean(*)(RoadPuzzleRailTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_ADDRAILTILE_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTrain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_PLAYTRAIN_OFFSET))(nullptr);
		}

		::System::Void SetRewardTilePositions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_SETREWARDTILEPOSITIONS_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEMAP_.CTOR_OFFSET))(nullptr);
		}

	};

