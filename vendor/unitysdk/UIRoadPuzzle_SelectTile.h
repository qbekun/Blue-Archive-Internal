#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class PlacementState;
class AlreadyPlacedState;
class SwapSelectionState;
class SwapConfirmState;
class RoadPuzzleTileMap;
class UIStyle;
namespace UnityEngine { class Camera; }
class BaseUISelectTileState;
class RoadPuzzleMapTileVisual;

#define UIROADPUZZLE_SELECTTILE_ROTATERAIL_OFFSET UNITYSDK_OFFSET(0x27C13E0)
#define UIROADPUZZLE_SELECTTILE_CLOSEUI_OFFSET UNITYSDK_OFFSET(0x27C1540)
#define UIROADPUZZLE_SELECTTILE__OPENUI_G__GETUISTYLE|16_0_OFFSET UNITYSDK_OFFSET(0x27C1550)
#define UIROADPUZZLE_SELECTTILE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27C15E0)
#define UIROADPUZZLE_SELECTTILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C1660)
#define UIROADPUZZLE_SELECTTILE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27C16F0)
#define UIROADPUZZLE_SELECTTILE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x27C14F0)
#define UIROADPUZZLE_SELECTTILE_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x27BE940)
#define UIROADPUZZLE_SELECTTILE__INITIALIZE_G__INITSTATES|15_0_OFFSET UNITYSDK_OFFSET(0x27C1780)
#define UIROADPUZZLE_SELECTTILE_GET_CURRENTUISTYLE_OFFSET UNITYSDK_OFFSET(0x27C1CF0)
#define UIROADPUZZLE_SELECTTILE_ONPRESSROTATERAIL_OFFSET UNITYSDK_OFFSET(0x27C1D00)
#define UIROADPUZZLE_SELECTTILE_OPENUI_OFFSET UNITYSDK_OFFSET(0x27C1D40)
#define UIROADPUZZLE_SELECTTILE_UPDATE_OFFSET UNITYSDK_OFFSET(0x27C1F90)
#define UIROADPUZZLE_SELECTTILE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x27BF320)

	inline static constexpr unsigned int UIRoadPuzzle_SelectTile_TypeDefinitionIndex = 7565;

	class UIRoadPuzzle_SelectTile : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* SelectUI; // 0x18
		::UnityEngine::GameObject* CurrentSelectedIcon; // 0x20
		PlacementState* PlacementState; // 0x28
		AlreadyPlacedState* AlreadyPlacedState; // 0x30
		SwapSelectionState* SwapSelectionState; // 0x38
		SwapConfirmState* SwapConfirmState; // 0x40
		RoadPuzzleTileMap* tileMap; // 0x48
		UIStyle* currentUIStyle; // 0x50
		Il2CppObject* stateDic; // 0x58
		::System::Boolean isInitialized; // 0x60
		::System::Single pressCooldown; // 0x64
		::System::Single lastPressed; // 0x68
		::System::Boolean pressed; // 0x6C
		::System::Boolean firstRotate; // 0x6D

		::System::Void RotateRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_ROTATERAIL_OFFSET))(nullptr);
		}

		::System::Void CloseUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_CLOSEUI_OFFSET))(nullptr);
		}

		UIStyle* _OpenUI_g__GetUIStyle|16_0(<>c__DisplayClass16_0&* arg)
		{
			return ((UIStyle*(*)(<>c__DisplayClass16_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE__OPENUI_G__GETUISTYLE|16_0_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(RoadPuzzleTileMap* arg, ::UnityEngine::Camera* arg2)
		{
			((::System::Void(*)(RoadPuzzleTileMap*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		BaseUISelectTileState* get_CurrentState()
		{
			return ((BaseUISelectTileState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_GET_CURRENTSTATE_OFFSET))(nullptr);
		}

		::System::Void ExitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_EXITSTATE_OFFSET))(nullptr);
		}

		::System::Void _Initialize_g__InitStates|15_0(<>c__DisplayClass15_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass15_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE__INITIALIZE_G__INITSTATES|15_0_OFFSET))(arg, nullptr);
		}

		UIStyle* get_CurrentUIStyle()
		{
			return ((UIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_GET_CURRENTUISTYLE_OFFSET))(nullptr);
		}

		::System::Void OnPressRotateRail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_ONPRESSROTATERAIL_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_OPENUI_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ChangeState(UIStyle* arg, RoadPuzzleMapTileVisual* arg2)
		{
			((::System::Void(*)(UIStyle*, RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLE_SELECTTILE_CHANGESTATE_OFFSET))(arg, arg2, nullptr);
		}

	};

