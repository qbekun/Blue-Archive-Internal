#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;

#define UIPOPUP_ACCOUNTNO_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCC8490)
#define UIPOPUP_ACCOUNTNO_REFRASHSETTING_OFFSET UNITYSDK_OFFSET(0xCC8520)
#define UIPOPUP_ACCOUNTNO_AWAKE_OFFSET UNITYSDK_OFFSET(0xCC85E0)
#define UIPOPUP_ACCOUNTNO_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC88D0)
#define UIPOPUP_ACCOUNTNO_ONCLICKCOPYBUTTON_OFFSET UNITYSDK_OFFSET(0xCC88E0)
#define UIPOPUP_ACCOUNTNO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xCC8A00)

	inline static constexpr unsigned int UIPopup_AccountNo_TypeDefinitionIndex = 9130;

	class UIPopup_AccountNo : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		MXButton* copyButton; // 0xE0
		MXButton* closeButtonX; // 0xE8
		UILabel* npaCodeLabel; // 0xF0

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefrashSetting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_REFRASHSETTING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCopyButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_ONCLICKCOPYBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ACCOUNTNO_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

