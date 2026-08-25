#pragma once
#include "unitysdk.h"

class MXButton;

#define UIPOPUP_OPTION_CUSTOMKEY_ALERT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2195040)
#define UIPOPUP_OPTION_CUSTOMKEY_ALERT_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2195260)
#define UIPOPUP_OPTION_CUSTOMKEY_ALERT_AWAKE_OFFSET UNITYSDK_OFFSET(0x21952F0)
#define UIPOPUP_OPTION_CUSTOMKEY_ALERT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21955E0)
#define UIPOPUP_OPTION_CUSTOMKEY_ALERT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x21955F0)

	inline static constexpr unsigned int UIPopup_Option_CustomKey_Alert_TypeDefinitionIndex = 4113;

	class UIPopup_Option_CustomKey_Alert : public Il2CppObject
	{
	public:
		Il2CppObject* _conflictKeyGroups; // 0xD8
		Il2CppObject* _changeKeyGroups; // 0xE0
		MXButton* _closeButton; // 0xE8
		MXButton* _close2Button; // 0xF0
		MXButton* _okButton; // 0xF8
		::System::Action* _onClose; // 0x100
		::System::Action* _onOk; // 0x108

		::System::Void Initialize(::System::String* str, Il2CppObject* arg, ::System::String* str2, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ALERT_INITIALIZE_OFFSET))(str, arg, str2, arg2, arg3, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ALERT_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ALERT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ALERT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_CUSTOMKEY_ALERT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

	};

