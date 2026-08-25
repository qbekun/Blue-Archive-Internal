#pragma once
#include "unitysdk.h"

class SwapRailHandler;
class UIRoadPuzzle_SelectTile;
class RoadPuzzleTileMap;
class RoadPuzzleMapTileVisual;
namespace UnityEngine { class Camera; }
class RoadPuzzleTask;
namespace UnityEngine { class Transform; }

#define BASEUISELECTTILESTATE_SETUIACTIVE_OFFSET UNITYSDK_OFFSET(0x27BDCF0)
#define BASEUISELECTTILESTATE_REGISTERBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BASEUISELECTTILESTATE_INIT_OFFSET UNITYSDK_OFFSET(0x27BDEA0)
#define BASEUISELECTTILESTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27BDFD0)
#define BASEUISELECTTILESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x27BDFE0)
#define BASEUISELECTTILESTATE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x27BDFF0)
#define BASEUISELECTTILESTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x27BE030)
#define BASEUISELECTTILESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BE040)
#define BASEUISELECTTILESTATE_TOGGLEMAPTILESELECTION_OFFSET UNITYSDK_OFFSET(0x27BE050)
#define BASEUISELECTTILESTATE_GET_GETCURRENTMAPTILE_OFFSET UNITYSDK_OFFSET(0x27BE360)
#define BASEUISELECTTILESTATE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x27BDD90)

	inline static constexpr unsigned int BaseUISelectTileState_TypeDefinitionIndex = 7554;

	class BaseUISelectTileState : public Il2CppObject
	{
	public:
		SwapRailHandler* SwapRailHandler; // 0x0
		::System::Int32 CurrentRailTileRotation; // 0x8
		UIRoadPuzzle_SelectTile* Owner; // 0x10
		RoadPuzzleTileMap* TileMap; // 0x18
		RoadPuzzleMapTileVisual* CurrentMapTile; // 0x20
		::UnityEngine::Camera* camera3D; // 0x28
		::System::Boolean registeredButtons; // 0x30

		::System::Void SetUIActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_SETUIACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_REGISTERBUTTONS_OFFSET))(nullptr);
		}

		::System::Void Init(UIRoadPuzzle_SelectTile* arg, RoadPuzzleTileMap* arg2, ::UnityEngine::Camera* arg3)
		{
			((::System::Void(*)(UIRoadPuzzle_SelectTile*, RoadPuzzleTileMap*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnter(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_ONENTER_OFFSET))(arg, nullptr);
		}

		RoadPuzzleTask* get_Task()
		{
			return ((RoadPuzzleTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_GET_TASK_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ToggleMapTileSelection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_TOGGLEMAPTILESELECTION_OFFSET))(arg, nullptr);
		}

		RoadPuzzleMapTileVisual* get_GetCurrentMapTile()
		{
			return ((RoadPuzzleMapTileVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_GET_GETCURRENTMAPTILE_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + BASEUISELECTTILESTATE_SETPOSITION_OFFSET))(arg, arg2, nullptr);
		}

	};

