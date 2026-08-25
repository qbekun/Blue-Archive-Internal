#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_WORLDRAID_REFRESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBF18D0)
#define UIPOPUP_WORLDRAID_REFRESH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xBF18E0)
#define UIPOPUP_WORLDRAID_REFRESH_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBF18F0)
#define UIPOPUP_WORLDRAID_REFRESH___N__0_OFFSET UNITYSDK_OFFSET(0xBF1980)
#define UIPOPUP_WORLDRAID_REFRESH_AWAKE_OFFSET UNITYSDK_OFFSET(0xBF1990)
#define UIPOPUP_WORLDRAID_REFRESH_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xBF1AD0)
#define UIPOPUP_WORLDRAID_REFRESH_SETDATA_OFFSET UNITYSDK_OFFSET(0xBE8CC0)
#define UIPOPUP_WORLDRAID_REFRESH_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF1D80)
#define UIPOPUP_WORLDRAID_REFRESH_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBF1D90)

	inline static constexpr unsigned int UIPopup_WorldRaid_Refresh_TypeDefinitionIndex = 8746;

	class UIPopup_WorldRaid_Refresh : public Il2CppObject
	{
	public:
		UILabel* gemEnterCountLabel; // 0xD8
		UILabel* gemPriceLabel; // 0xE0
		MXButton* okButton; // 0xE8
		::System::Int64 remainGemEnterCount; // 0xF0
		::System::Action* enterFormation; // 0xF8

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH___N__0_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickOK()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_REFRESH_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

