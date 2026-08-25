#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::NetworkProtocol { class MiniGameRoadPuzzleSaveStageResponse; }
class RoadPuzzleMapTileVisual;

#define SWAPCONFIRMSTATE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27C0170)
#define SWAPCONFIRMSTATE__ONCLICKSAVE_B__12_1_OFFSET UNITYSDK_OFFSET(0x27C0580)
#define SWAPCONFIRMSTATE_REGISTERBUTTONS_OFFSET UNITYSDK_OFFSET(0x27C0700)
#define SWAPCONFIRMSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x27C0910)
#define SWAPCONFIRMSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27C0D30)
#define SWAPCONFIRMSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x27C0EB0)
#define SWAPCONFIRMSTATE_GETROTATEBUTTON_OFFSET UNITYSDK_OFFSET(0x27C0F70)
#define SWAPCONFIRMSTATE_ONPRESSROTATERAIL_OFFSET UNITYSDK_OFFSET(0x27C0F80)
#define SWAPCONFIRMSTATE_ONCLICKSAVE_OFFSET UNITYSDK_OFFSET(0x27C0FE0)
#define SWAPCONFIRMSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C1310)

	inline static constexpr unsigned int SwapConfirmState_TypeDefinitionIndex = 7561;

	class SwapConfirmState : public ::UnityEngine::Bindings::NativeAsStructAttribute
	{
	public:
		::UnityEngine::GameObject* SwapTargetStyle; // 0x38
		MXButton* RotateLeftButton; // 0x40
		MXButton* CancelButton; // 0x48
		MXButton* SaveButton; // 0x50
		::System::Int32 currentSwapSourceRailTileRotation; // 0x58

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void _OnClickSave_b__12_1(::MX::NetworkProtocol::MiniGameRoadPuzzleSaveStageResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameRoadPuzzleSaveStageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE__ONCLICKSAVE_B__12_1_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_REGISTERBUTTONS_OFFSET))(nullptr);
		}

		::System::Void OnEnter(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_ONEXIT_OFFSET))(nullptr);
		}

		MXButton* GetRotateButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_GETROTATEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnPressRotateRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_ONPRESSROTATERAIL_OFFSET))(nullptr);
		}

		::System::Void OnClickSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_ONCLICKSAVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPCONFIRMSTATE_.CTOR_OFFSET))(nullptr);
		}

	};

