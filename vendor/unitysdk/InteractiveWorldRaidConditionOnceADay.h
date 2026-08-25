#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONONCEADAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FF00)
#define INTERACTIVEWORLDRAIDCONDITIONONCEADAY_ONCOMMANDEXECUTE_OFFSET UNITYSDK_OFFSET(0x259FF10)
#define INTERACTIVEWORLDRAIDCONDITIONONCEADAY_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x25A0150)
#define INTERACTIVEWORLDRAIDCONDITIONONCEADAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A0400)

	inline static constexpr unsigned int InteractiveWorldRaidConditionOnceADay_TypeDefinitionIndex = 319;

	class InteractiveWorldRaidConditionOnceADay : public Il2CppObject
	{
	public:
		::System::String* key; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEADAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnCommandExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEADAY_ONCOMMANDEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEADAY_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONONCEADAY_AWAKE_OFFSET))(nullptr);
		}

	};

