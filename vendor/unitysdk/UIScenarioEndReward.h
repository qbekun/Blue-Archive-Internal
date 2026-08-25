#pragma once
#include "unitysdk.h"

class MXButton;

#define UISCENARIOENDREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x27DCF40)
#define UISCENARIOENDREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DD070)
#define UISCENARIOENDREWARD_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27DD080)
#define UISCENARIOENDREWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27DD120)
#define UISCENARIOENDREWARD_SETDATA_OFFSET UNITYSDK_OFFSET(0x27DD1D0)
#define UISCENARIOENDREWARD_ONBACK_OFFSET UNITYSDK_OFFSET(0x27DD1F0)
#define UISCENARIOENDREWARD_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0x27DD300)

	inline static constexpr unsigned int UIScenarioEndReward_TypeDefinitionIndex = 7644;

	class UIScenarioEndReward : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::System::Action* CloseAction; // 0xE0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_ONBACK_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOENDREWARD_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

	};

