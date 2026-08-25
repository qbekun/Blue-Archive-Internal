#pragma once
#include "unitysdk.h"

class MXButton;
class UISprite;
class UILabel;
namespace MX::Data { class EventContentSeasonInfo; }

#define UIPOPUP_DREAMMAKER_COSTCAUTION_SETUI_OFFSET UNITYSDK_OFFSET(0xD0BE30)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xD0C160)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0xD0C220)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_ONOPENED_OFFSET UNITYSDK_OFFSET(0xD0C240)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_SETDATA_OFFSET UNITYSDK_OFFSET(0xD0C260)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_AWAKE_OFFSET UNITYSDK_OFFSET(0xD0C2B0)
#define UIPOPUP_DREAMMAKER_COSTCAUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD0C5A0)

	inline static constexpr unsigned int UIPopup_Dreammaker_CostCaution_TypeDefinitionIndex = 618;

	class UIPopup_Dreammaker_CostCaution : public Il2CppObject
	{
	public:
		MXButton* cancelButton; // 0xD8
		MXButton* Xbutton; // 0xE0
		MXButton* okButton; // 0xE8
		UISprite* havingMaterialIcon; // 0xF0
		UILabel* havingMaterialText; // 0xF8
		UISprite* totalRequiredMaterialIcon; // 0x100
		UILabel* totalRequiredMaterialText; // 0x108
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x110
		::System::Action* onClickOkAction; // 0x118
		::System::Int64 multiplier; // 0x120

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_SETUI_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DREAMMAKER_COSTCAUTION_.CTOR_OFFSET))(nullptr);
		}

	};

