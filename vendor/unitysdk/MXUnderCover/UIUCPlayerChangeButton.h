#pragma once
#include "../unitysdk.h"

class UCPersonalityType;
namespace MXUnderCover { class SwitchedPlayerMessage; }
namespace MXUnderCover { class UIUCMainButtonController; }

#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC0960)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_REFRESHCHARACTER_OFFSET UNITYSDK_OFFSET(0xDC0A80)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_GET_ISSOLOPLAY_OFFSET UNITYSDK_OFFSET(0xDC0B20)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONCLICKCHARACTERSWITCH_OFFSET UNITYSDK_OFFSET(0xDC0B80)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONSWITCHEDPLAYERMESSAGE_OFFSET UNITYSDK_OFFSET(0xDC0CA0)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0xDC0CB0)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC0D70)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_SETENABLE_OFFSET UNITYSDK_OFFSET(0xDC0DA0)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONDESTROYINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC0E00)
#define MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_GETPERSONALITYTYPE_OFFSET UNITYSDK_OFFSET(0xDC0EB0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCPlayerChangeButton_TypeDefinitionIndex = 10016;

	class UIUCPlayerChangeButton : public Il2CppObject
	{
	public:
		UCPersonalityType* PersonalityType; // 0xA8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void RefreshCharacter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_REFRESHCHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSoloPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_GET_ISSOLOPLAY_OFFSET))(nullptr);
		}

		::System::Void OnClickCharacterSwitch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONCLICKCHARACTERSWITCH_OFFSET))(nullptr);
		}

		::System::Void OnSwitchedPlayerMessage(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONSWITCHEDPLAYERMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroyInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_ONDESTROYINTERNAL_OFFSET))(nullptr);
		}

		UCPersonalityType* GetPersonalityType()
		{
			return ((UCPersonalityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCPLAYERCHANGEBUTTON_GETPERSONALITYTYPE_OFFSET))(nullptr);
		}

	};
}

