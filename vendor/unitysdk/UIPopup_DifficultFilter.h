#pragma once
#include "unitysdk.h"

class MXButton;
class UIRaidPercentageFilterButton;
class UIRaidDifficultyFilterButton;

#define UIPOPUP_DIFFICULTFILTER_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2790520)
#define UIPOPUP_DIFFICULTFILTER_ONCLICKPERCENTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x2790550)
#define UIPOPUP_DIFFICULTFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2790620)
#define UIPOPUP_DIFFICULTFILTER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2790630)
#define UIPOPUP_DIFFICULTFILTER_ONCLICKDIFFICULTYFILTER_OFFSET UNITYSDK_OFFSET(0x2790BB0)
#define UIPOPUP_DIFFICULTFILTER_INITPERCENTAGEFILTERS_OFFSET UNITYSDK_OFFSET(0x2790C80)
#define UIPOPUP_DIFFICULTFILTER_GET_ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x2790E70)
#define UIPOPUP_DIFFICULTFILTER_ISFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x2790730)
#define UIPOPUP_DIFFICULTFILTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2790E80)
#define UIPOPUP_DIFFICULTFILTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x27910E0)
#define UIPOPUP_DIFFICULTFILTER_SET_ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x2791380)

	inline static constexpr unsigned int UIPopup_DifficultFilter_TypeDefinitionIndex = 7435;

	class UIPopup_DifficultFilter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DifficultyFilters; // 0x18
		::Il2CppArray<::System::Object*>* PercentageFilters; // 0x20
		MXButton* OkButton; // 0x28
		MXButton* CancelButton; // 0x30
		::System::Action* _EndCallback_k__BackingField; // 0x38

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickPercentageFilter(UIRaidPercentageFilterButton* arg)
		{
			((::System::Void(*)(UIRaidPercentageFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ONCLICKPERCENTAGEFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnClickDifficultyFilter(UIRaidDifficultyFilterButton* arg)
		{
			((::System::Void(*)(UIRaidDifficultyFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ONCLICKDIFFICULTYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void InitPercentageFilters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_INITPERCENTAGEFILTERS_OFFSET))(nullptr);
		}

		::System::Action* get_EndCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_GET_ENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean IsFilterChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ISFILTERCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_EndCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_DIFFICULTFILTER_SET_ENDCALLBACK_OFFSET))(arg, nullptr);
		}

	};

