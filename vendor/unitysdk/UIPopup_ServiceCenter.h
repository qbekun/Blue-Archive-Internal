#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;

#define UIPOPUP_SERVICECENTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCD0510)
#define UIPOPUP_SERVICECENTER_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD05F0)
#define UIPOPUP_SERVICECENTER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD0680)
#define UIPOPUP_SERVICECENTER_ACCEPTPERMISSIONS_OFFSET UNITYSDK_OFFSET(0xCD0A40)
#define UIPOPUP_SERVICECENTER_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xCD0BF0)
#define UIPOPUP_SERVICECENTER_REFRASHSETTING_OFFSET UNITYSDK_OFFSET(0xCD0530)
#define UIPOPUP_SERVICECENTER_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xCD0C00)
#define UIPOPUP_SERVICECENTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD0C10)
#define UIPOPUP_SERVICECENTER_ONCLICKCOPYBUTTON_OFFSET UNITYSDK_OFFSET(0xCD0C20)

	inline static constexpr unsigned int UIPopup_ServiceCenter_TypeDefinitionIndex = 9145;

	class UIPopup_ServiceCenter : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* okButton; // 0xE0
		MXButton* copyButton; // 0xE8
		MXButton* closeButtonX; // 0xF0
		UILabel* npaCodeLabel; // 0xF8

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void AcceptPermissions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ACCEPTPERMISSIONS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void RefrashSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_REFRASHSETTING_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCopyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SERVICECENTER_ONCLICKCOPYBUTTON_OFFSET))(nullptr);
		}

	};

