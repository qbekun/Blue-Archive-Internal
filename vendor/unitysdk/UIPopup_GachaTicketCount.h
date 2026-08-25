#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
class UILabel;

#define UIPOPUP_GACHATICKETCOUNT_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA2390)
#define UIPOPUP_GACHATICKETCOUNT_SETDATA_OFFSET UNITYSDK_OFFSET(0xAA2680)
#define UIPOPUP_GACHATICKETCOUNT_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xAA29F0)
#define UIPOPUP_GACHATICKETCOUNT_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xAA2A80)
#define UIPOPUP_GACHATICKETCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA2B10)

	inline static constexpr unsigned int UIPopup_GachaTicketCount_TypeDefinitionIndex = 7967;

	class UIPopup_GachaTicketCount : public Il2CppObject
	{
	public:
		MXButton* Confirm; // 0xD8
		MXButton* Cancel; // 0xE0
		MXButton* Close; // 0xE8
		UISprite* image; // 0xF0
		UILabel* curHasCount; // 0xF8
		UILabel* afterHasCount; // 0x100
		::System::Action* okAction; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHATICKETCOUNT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHATICKETCOUNT_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHATICKETCOUNT_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHATICKETCOUNT_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_GACHATICKETCOUNT_.CTOR_OFFSET))(nullptr);
		}

	};

