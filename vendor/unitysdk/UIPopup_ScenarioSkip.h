#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UIScrollView;

#define UIPOPUP_SCENARIOSKIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27CDEA0)
#define UIPOPUP_SCENARIOSKIP_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x27CE0C0)
#define UIPOPUP_SCENARIOSKIP__ONCLICKCONFIRM_G__PROCESSINNARRATIVEFIELD|15_0_OFFSET UNITYSDK_OFFSET(0x27CE160)
#define UIPOPUP_SCENARIOSKIP_ONBACK_OFFSET UNITYSDK_OFFSET(0x27CE220)
#define UIPOPUP_SCENARIOSKIP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27CE230)
#define UIPOPUP_SCENARIOSKIP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x27CE2C0)
#define UIPOPUP_SCENARIOSKIP_SETDATA_OFFSET UNITYSDK_OFFSET(0x27CE2E0)
#define UIPOPUP_SCENARIOSKIP__ONCLICKCONFIRM_G__PROCESSINSCENARIO|15_1_OFFSET UNITYSDK_OFFSET(0x27CE420)
#define UIPOPUP_SCENARIOSKIP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x27CE610)
#define UIPOPUP_SCENARIOSKIP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27CE630)
#define UIPOPUP_SCENARIOSKIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CE950)
#define UIPOPUP_SCENARIOSKIP_SETNARRATIVEFIELDDATA_OFFSET UNITYSDK_OFFSET(0x27CE960)

	inline static constexpr unsigned int UIPopup_ScenarioSkip_TypeDefinitionIndex = 7606;

	class UIPopup_ScenarioSkip : public Il2CppObject
	{
	public:
		UILabel* digestTitle; // 0xD8
		UILabel* digestDescription; // 0xE0
		MXButton* confirm; // 0xE8
		MXButton* cancel; // 0xF0
		::System::Boolean isNarrativeField; // 0xF8
		::System::Int64 fieldQuestGroupId; // 0x100
		UIScrollView* scrollView; // 0x108

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_AWAKE_OFFSET))(nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void _OnClickConfirm_g__ProcessInNarrativeField|15_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP__ONCLICKCONFIRM_G__PROCESSINNARRATIVEFIELD|15_0_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickConfirm_g__ProcessInScenario|15_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP__ONCLICKCONFIRM_G__PROCESSINSCENARIO|15_1_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetNarrativeFieldData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOSKIP_SETNARRATIVEFIELDDATA_OFFSET))(arg, nullptr);
		}

	};

