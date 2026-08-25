#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIGrid;

#define UIPOPUP_NOTIFYEVENT_SETNOTIFYCLOSE_OFFSET UNITYSDK_OFFSET(0x27703F0)
#define UIPOPUP_NOTIFYEVENT_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0x2770520)
#define UIPOPUP_NOTIFYEVENT_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x27705F0)
#define UIPOPUP_NOTIFYEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2770600)
#define UIPOPUP_NOTIFYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2770820)
#define UIPOPUP_NOTIFYEVENT___N__0_OFFSET UNITYSDK_OFFSET(0x27708A0)
#define UIPOPUP_NOTIFYEVENT_CLOSE_OFFSET UNITYSDK_OFFSET(0x2770530)
#define UIPOPUP_NOTIFYEVENT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27708B0)

	inline static constexpr unsigned int UIPopup_NotifyEvent_TypeDefinitionIndex = 7343;

	class UIPopup_NotifyEvent : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* messageLabel; // 0xE0
		UIGrid* bannerGrid; // 0xE8
		::Il2CppArray<::System::Object*>* bannerTextures; // 0xF0
		MXButton* okButton; // 0xF8
		Il2CppObject* seasonInfoList; // 0x100
		::System::Action* closeCallback; // 0x108

		::System::Void SetNotifyClose(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_SETNOTIFYCLOSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT___N__0_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_CLOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_NOTIFYEVENT_CO_LOADING_OFFSET))(nullptr);
		}

	};

