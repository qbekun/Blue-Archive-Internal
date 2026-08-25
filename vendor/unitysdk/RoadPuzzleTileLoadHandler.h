#pragma once
#include "unitysdk.h"

class RoadPuzzleTileMapData;
class RoadPuzzleRailTileData;
class RoadPuzzleTileRewardData;
namespace UnityEngine { class Transform; }
class RoadPuzzleMapTileData;

#define ROADPUZZLETILELOADHANDLER_LOADMAPDATA_EDITOR_OFFSET UNITYSDK_OFFSET(0x2086DA0)
#define ROADPUZZLETILELOADHANDLER_MAKERAILTILE_OFFSET UNITYSDK_OFFSET(0x2086140)
#define ROADPUZZLETILELOADHANDLER_MAKEREWARD_OFFSET UNITYSDK_OFFSET(0x2086ED0)
#define ROADPUZZLETILELOADHANDLER_MAKETRANSITMARK_OFFSET UNITYSDK_OFFSET(0x2086F80)
#define ROADPUZZLETILELOADHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2087010)
#define ROADPUZZLETILELOADHANDLER_MAKEMAPTILE_OFFSET UNITYSDK_OFFSET(0x2087020)
#define ROADPUZZLETILELOADHANDLER_MAKETILEMAP_OFFSET UNITYSDK_OFFSET(0x20870B0)
#define ROADPUZZLETILELOADHANDLER_LOADMAPDATA_OFFSET UNITYSDK_OFFSET(0x2087170)

	inline static constexpr unsigned int RoadPuzzleTileLoadHandler_TypeDefinitionIndex = 3453;

	class RoadPuzzleTileLoadHandler : public Il2CppObject
	{
	public:
		::System::String* MapTileResPath; // 0x0
		::System::String* RailTileResPath; // 0x0
		::System::String* RewardVisualPath; // 0x0
		::System::String* TransitMarkPath; // 0x0
		::System::String* TileName_CurveSmall; // 0x0
		::System::String* TileName_CurveBig; // 0x0
		::System::String* TileName_Straight; // 0x0

		RoadPuzzleTileMapData* LoadMapData_Editor(::System::String* str)
		{
			return ((RoadPuzzleTileMapData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_LOADMAPDATA_EDITOR_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* MakeRailTile(RoadPuzzleRailTileData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_MAKERAILTILE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeReward(RoadPuzzleTileRewardData* arg, ::UnityEngine::Transform* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleTileRewardData*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_MAKEREWARD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* MakeTransitMark(::UnityEngine::Transform* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_MAKETRANSITMARK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* MakeMapTile(RoadPuzzleMapTileData* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleMapTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_MAKEMAPTILE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* MakeTileMap(RoadPuzzleTileMapData* arg, ::UnityEngine::Transform* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(RoadPuzzleTileMapData*, ::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_MAKETILEMAP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		RoadPuzzleTileMapData* LoadMapData(::System::String* str)
		{
			return ((RoadPuzzleTileMapData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILELOADHANDLER_LOADMAPDATA_OFFSET))(str, nullptr);
		}

	};

