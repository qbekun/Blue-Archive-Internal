#pragma once
#include "../../unitysdk.h"

class MXButton;
namespace MXField::UI { class MasteryRewardScrollViewController; }

#define MXFIELD_UI_UIPOPUP_FIELDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAA060)
#define MXFIELD_UI_UIPOPUP_FIELDREWARD_INITREWARDSCROLL_OFFSET UNITYSDK_OFFSET(0xEAA070)
#define MXFIELD_UI_UIPOPUP_FIELDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEAA470)
#define MXFIELD_UI_UIPOPUP_FIELDREWARD_START_OFFSET UNITYSDK_OFFSET(0xEAA4E0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIPopup_FieldReward_TypeDefinitionIndex = 10774;

	class UIPopup_FieldReward : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xE8
		::MXField::UI::MasteryRewardScrollViewController* scrollViewController; // 0xF0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitRewardScroll(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDREWARD_INITREWARDSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDREWARD_START_OFFSET))(nullptr);
		}

	};
}

