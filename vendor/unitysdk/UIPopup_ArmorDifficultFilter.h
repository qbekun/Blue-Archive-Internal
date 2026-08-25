#pragma once
#include "unitysdk.h"

class UIRaidArmorFilterButton;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIRaidDifficultyFilterButton;
class UIRaidPercentageFilterButton;

#define UIPOPUP_ARMORDIFFICULTFILTER_ISFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x278EBD0)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x278F120)
#define UIPOPUP_ARMORDIFFICULTFILTER_INITPERCENTAGEFILTERS_OFFSET UNITYSDK_OFFSET(0x278F220)
#define UIPOPUP_ARMORDIFFICULTFILTER_GET_ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x278F370)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONOPENED_OFFSET UNITYSDK_OFFSET(0x278F380)
#define UIPOPUP_ARMORDIFFICULTFILTER_AWAKE_OFFSET UNITYSDK_OFFSET(0x278FDC0)
#define UIPOPUP_ARMORDIFFICULTFILTER_SET_ENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x27901F0)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKDIFFICULTYFILTER_OFFSET UNITYSDK_OFFSET(0x278FBC0)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKALLARMORFILTER_OFFSET UNITYSDK_OFFSET(0x278F710)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKPERCENTAGEFILTER_OFFSET UNITYSDK_OFFSET(0x278FCC0)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2790310)
#define UIPOPUP_ARMORDIFFICULTFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2790340)
#define UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKARMORFILTER_OFFSET UNITYSDK_OFFSET(0x278FA70)
#define UIPOPUP_ARMORDIFFICULTFILTER_CHANGEALLSUBFILTERAVAILABLESTATE_OFFSET UNITYSDK_OFFSET(0x2790200)

	inline static constexpr unsigned int UIPopup_ArmorDifficultFilter_TypeDefinitionIndex = 7432;

	class UIPopup_ArmorDifficultFilter : public Il2CppObject
	{
	public:
		UIRaidArmorFilterButton* AllArmorFilter; // 0x18
		::Il2CppArray<::System::Object*>* ArmorFilters; // 0x20
		::Il2CppArray<::System::Object*>* DifficultyFilters; // 0x28
		::UnityEngine::GameObject* AllDifficultyFilter_Available; // 0x30
		::UnityEngine::GameObject* AllDifficultyFilter_Unavailable; // 0x38
		::Il2CppArray<::System::Object*>* PercentageFilters; // 0x40
		::UnityEngine::GameObject* AllPercentageFilter_Available; // 0x48
		::UnityEngine::GameObject* AllPercentageFilter_Unavailable; // 0x50
		MXButton* OkButton; // 0x58
		MXButton* CancelButton; // 0x60
		::System::Action* _EndCallback_k__BackingField; // 0x68

		::System::Boolean IsFilterChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ISFILTERCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void InitPercentageFilters()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_INITPERCENTAGEFILTERS_OFFSET))(nullptr);
		}

		::System::Action* get_EndCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_GET_ENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_EndCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_SET_ENDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickDifficultyFilter(UIRaidDifficultyFilterButton* arg)
		{
			((::System::Void(*)(UIRaidDifficultyFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKDIFFICULTYFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickAllArmorFilter(UIRaidArmorFilterButton* arg)
		{
			((::System::Void(*)(UIRaidArmorFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKALLARMORFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPercentageFilter(UIRaidPercentageFilterButton* arg)
		{
			((::System::Void(*)(UIRaidPercentageFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKPERCENTAGEFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickArmorFilter(UIRaidArmorFilterButton* arg)
		{
			((::System::Void(*)(UIRaidArmorFilterButton*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_ONCLICKARMORFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeAllSubFilterAvailableState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARMORDIFFICULTFILTER_CHANGEALLSUBFILTERAVAILABLESTATE_OFFSET))(arg, nullptr);
		}

	};

