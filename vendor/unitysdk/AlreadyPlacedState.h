#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
namespace MX::NetworkProtocol { class MiniGameRoadPuzzleSaveStageResponse; }
class RoadPuzzleMapTileVisual;

#define ALREADYPLACEDSTATE_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27BF230)
#define ALREADYPLACEDSTATE__ONCLICKSAVE_B__15_1_OFFSET UNITYSDK_OFFSET(0x27BF250)
#define ALREADYPLACEDSTATE_ONCLICKSWAPRAIL_OFFSET UNITYSDK_OFFSET(0x27BF2F0)
#define ALREADYPLACEDSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x27BF3F0)
#define ALREADYPLACEDSTATE_REGISTERBUTTONS_OFFSET UNITYSDK_OFFSET(0x27BF4A0)
#define ALREADYPLACEDSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BF780)
#define ALREADYPLACEDSTATE_ONCLICKSAVE_OFFSET UNITYSDK_OFFSET(0x27BF790)
#define ALREADYPLACEDSTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x27BF9A0)
#define ALREADYPLACEDSTATE_ONPRESSROTATERAIL_OFFSET UNITYSDK_OFFSET(0x27BF9F0)
#define ALREADYPLACEDSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x27BFA20)
#define ALREADYPLACEDSTATE_GETROTATEBUTTON_OFFSET UNITYSDK_OFFSET(0x27BFB20)

	inline static constexpr unsigned int AlreadyPlacedState_TypeDefinitionIndex = 7558;

	class AlreadyPlacedState : public ::UnityEngine::Bindings::NativeAsStructAttribute
	{
	public:
		::UnityEngine::GameObject* AlreadyPlacedStyle; // 0x38
		MXButton* SwapRailButton; // 0x40
		MXButton* RotateLeftButton; // 0x48
		MXButton* SaveButton; // 0x50
		MXButton* CancelButton; // 0x58
		::System::Int32 currentRailTileRotation; // 0x60
		::System::Boolean exitOnSuccess; // 0x64

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void _OnClickSave_b__15_1(::MX::NetworkProtocol::MiniGameRoadPuzzleSaveStageResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameRoadPuzzleSaveStageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE__ONCLICKSAVE_B__15_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSwapRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONCLICKSWAPRAIL_OFFSET))(nullptr);
		}

		::System::Void OnEnter(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_REGISTERBUTTONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickSave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONCLICKSAVE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPressRotateRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONPRESSROTATERAIL_OFFSET))(nullptr);
		}

		::System::Void OnExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_ONEXIT_OFFSET))(nullptr);
		}

		MXButton* GetRotateButton()
		{
			return ((MXButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALREADYPLACEDSTATE_GETROTATEBUTTON_OFFSET))(nullptr);
		}

	};

