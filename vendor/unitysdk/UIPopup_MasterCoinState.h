#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;

#define UIPOPUP_MASTERCOINSTATE_SETDATA_OFFSET UNITYSDK_OFFSET(0xAA2B20)
#define UIPOPUP_MASTERCOINSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA2D80)
#define UIPOPUP_MASTERCOINSTATE_AWAKE_OFFSET UNITYSDK_OFFSET(0xAA2D90)

	inline static constexpr unsigned int UIPopup_MasterCoinState_TypeDefinitionIndex = 7968;

	class UIPopup_MasterCoinState : public Il2CppObject
	{
	public:
		UILabel* description; // 0xD8
		UILabel* masterCoinAmountLabel; // 0xE0
		UILabel* masterCoinWeeklyGainLabel; // 0xE8
		MXButton* okButton; // 0xF0
		MXButton* backButton; // 0xF8

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MASTERCOINSTATE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MASTERCOINSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MASTERCOINSTATE_AWAKE_OFFSET))(nullptr);
		}

	};

