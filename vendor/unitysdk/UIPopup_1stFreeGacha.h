#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;

#define UIPOPUP_1STFREEGACHA_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA98AC0)
#define UIPOPUP_1STFREEGACHA_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xA98B50)
#define UIPOPUP_1STFREEGACHA_ONCLICKOKBUTTON_OFFSET UNITYSDK_OFFSET(0xA98BE0)
#define UIPOPUP_1STFREEGACHA_SETDATA_OFFSET UNITYSDK_OFFSET(0xA907D0)
#define UIPOPUP_1STFREEGACHA_AWAKE_OFFSET UNITYSDK_OFFSET(0xA98C80)
#define UIPOPUP_1STFREEGACHA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA98F70)

	inline static constexpr unsigned int UIPopup_1stFreeGacha_TypeDefinitionIndex = 7950;

	class UIPopup_1stFreeGacha : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		UILabel* remainCountLabel; // 0xE0
		UILabel* nextCountLabel; // 0xE8
		MXButton* okButton; // 0xF0
		MXButton* cancelButton; // 0xF8
		::System::Int32 remainCount; // 0x100
		::System::Action* confirmedCallback; // 0x108
		::System::Action* canceledCallback; // 0x110

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickOkButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_ONCLICKOKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int32 arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_1STFREEGACHA_.CTOR_OFFSET))(nullptr);
		}

	};

