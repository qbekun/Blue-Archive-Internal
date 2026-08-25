#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class RoadPuzzleMapTileVisual;

#define SWAPSELECTIONSTATE_REGISTERBUTTONS_OFFSET UNITYSDK_OFFSET(0x27BFBF0)
#define SWAPSELECTIONSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x27BFD10)
#define SWAPSELECTIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BFE20)
#define SWAPSELECTIONSTATE_ENTERSWAPCONFIRMSTATE_OFFSET UNITYSDK_OFFSET(0x27BFE30)
#define SWAPSELECTIONSTATE_EXITSWAPCONFIRMSTATE_OFFSET UNITYSDK_OFFSET(0x27BFED0)
#define SWAPSELECTIONSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x27BFFE0)
#define SWAPSELECTIONSTATE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27C0030)
#define SWAPSELECTIONSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27C00E0)

	inline static constexpr unsigned int SwapSelectionState_TypeDefinitionIndex = 7559;

	class SwapSelectionState : public ::UnityEngine::Bindings::NativeAsStructAttribute
	{
	public:
		::UnityEngine::GameObject* SwapSourceStyle; // 0x38
		MXButton* CancelButton; // 0x40

		::System::Void RegisterButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_REGISTERBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnEnter(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnterSwapConfirmState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_ENTERSWAPCONFIRMSTATE_OFFSET))(nullptr);
		}

		::System::Void ExitSwapConfirmState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_EXITSWAPCONFIRMSTATE_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_ONEXIT_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPSELECTIONSTATE_LATEUPDATE_OFFSET))(nullptr);
		}

	};

