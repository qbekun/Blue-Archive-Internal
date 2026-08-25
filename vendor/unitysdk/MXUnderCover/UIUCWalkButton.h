#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCPlayer; }
class UCButtonVisualState;
namespace MXUnderCover { class SwitchedPlayerMessage; }

#define MXUNDERCOVER_UIUCWALKBUTTON_ONPRESSSTART_OFFSET UNITYSDK_OFFSET(0xDC7E50)
#define MXUNDERCOVER_UIUCWALKBUTTON_ONINTERACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xDC1780)
#define MXUNDERCOVER_UIUCWALKBUTTON_RELEASEIFHOLDING_OFFSET UNITYSDK_OFFSET(0xDC7EC0)
#define MXUNDERCOVER_UIUCWALKBUTTON_ONPRESSEND_OFFSET UNITYSDK_OFFSET(0xDC7F30)
#define MXUNDERCOVER_UIUCWALKBUTTON_SETACTIONBUTTONVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDC1A70)
#define MXUNDERCOVER_UIUCWALKBUTTON_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC7FA0)
#define MXUNDERCOVER_UIUCWALKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC8010)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCWalkButton_TypeDefinitionIndex = 10032;

	class UIUCWalkButton : public Il2CppObject
	{
	public:
		::System::Boolean _holding; // 0xA8
		::MXUnderCover::UCPlayer* _heldPlayer; // 0xB0

		::System::Void OnPressStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_ONPRESSSTART_OFFSET))(nullptr);
		}

		::System::Void OnInteractionTriggered(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_ONINTERACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseIfHolding()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_RELEASEIFHOLDING_OFFSET))(nullptr);
		}

		::System::Void OnPressEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_ONPRESSEND_OFFSET))(nullptr);
		}

		::System::Void SetActionButtonVisualState(UCButtonVisualState* arg)
		{
			((::System::Void(*)(UCButtonVisualState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_SETACTIONBUTTONVISUALSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCWALKBUTTON_.CTOR_OFFSET))(nullptr);
		}

	};
}

