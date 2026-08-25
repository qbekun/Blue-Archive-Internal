#pragma once
#include "unitysdk.h"

#define UISCENARIOMODE_EVENTMEETUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FDEB0)
#define UISCENARIOMODE_EVENTMEETUP_INITVOLUMEIDS_OFFSET UNITYSDK_OFFSET(0x27FDED0)
#define UISCENARIOMODE_EVENTMEETUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27FDFF0)

	inline static constexpr unsigned int UIScenarioMode_EventMeetup_TypeDefinitionIndex = 7749;

	class UIScenarioMode_EventMeetup : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EVENTMEETUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitVolumeIds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EVENTMEETUP_INITVOLUMEIDS_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_EVENTMEETUP_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

