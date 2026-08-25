#pragma once
#include "unitysdk.h"

class MXButton;
namespace FlatData { class Nation; }
class UIToggle;

#define UIPOPUP_VOICESELECT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x277FAC0)
#define UIPOPUP_VOICESELECT_INITTOGGLE_OFFSET UNITYSDK_OFFSET(0x277FB50)
#define UIPOPUP_VOICESELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x277FD00)
#define UIPOPUP_VOICESELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x277FE30)
#define UIPOPUP_VOICESELECT_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x277FEC0)
#define UIPOPUP_VOICESELECT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x277FFB0)
#define UIPOPUP_VOICESELECT_INITIALIZEOK_OFFSET UNITYSDK_OFFSET(0x2780080)

	inline static constexpr unsigned int UIPopup_VoiceSelect_TypeDefinitionIndex = 7376;

	class UIPopup_VoiceSelect : public Il2CppObject
	{
	public:
		MXButton* okButton; // 0xD8
		::FlatData::Nation* selectVoiceLanguage; // 0xE0
		UIToggle* toggleKr; // 0xE8
		UIToggle* toggleJp; // 0xF0
		Il2CppObject* table; // 0xF8
		::System::Action* okAction; // 0x100

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitToggle(UIToggle* arg, ::FlatData::Nation* arg2)
		{
			((::System::Void(*)(UIToggle*, ::FlatData::Nation*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_INITTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitializeOk(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_VOICESELECT_INITIALIZEOK_OFFSET))(arg, nullptr);
		}

	};

