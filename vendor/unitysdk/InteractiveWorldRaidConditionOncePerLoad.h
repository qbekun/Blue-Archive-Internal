#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A05F0)
#define INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x25A0740)
#define INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_ONCOMMANDEXECUTE_OFFSET UNITYSDK_OFFSET(0x25A0860)
#define INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A0970)

	inline static constexpr unsigned int InteractiveWorldRaidConditionOncePerLoad_TypeDefinitionIndex = 320;

	class InteractiveWorldRaidConditionOncePerLoad : public Il2CppObject
	{
	public:
		::System::String* key; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void OnCommandExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_ONCOMMANDEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEPERLOAD_.CTOR_OFFSET))(nullptr);
		}

	};

