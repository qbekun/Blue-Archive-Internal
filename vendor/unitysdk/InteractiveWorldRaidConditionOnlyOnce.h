#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONONLYONCE_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A0980)
#define INTERACTIVEWORLDRAIDCONDITIONONLYONCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A0AD0)
#define INTERACTIVEWORLDRAIDCONDITIONONLYONCE_ONCOMMANDEXECUTE_OFFSET UNITYSDK_OFFSET(0x25A0AE0)
#define INTERACTIVEWORLDRAIDCONDITIONONLYONCE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x25A0D20)

	inline static constexpr unsigned int InteractiveWorldRaidConditionOnlyOnce_TypeDefinitionIndex = 321;

	class InteractiveWorldRaidConditionOnlyOnce : public Il2CppObject
	{
	public:
		::System::String* key; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONLYONCE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONLYONCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCommandExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONLYONCE_ONCOMMANDEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONLYONCE_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

