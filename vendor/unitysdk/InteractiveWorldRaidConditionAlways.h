#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONALWAYS_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F2B0)
#define INTERACTIVEWORLDRAIDCONDITIONALWAYS_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F2C0)

	inline static constexpr unsigned int InteractiveWorldRaidConditionAlways_TypeDefinitionIndex = 309;

	class InteractiveWorldRaidConditionAlways : public Il2CppObject
	{
	public:
		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONALWAYS_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONALWAYS_.CTOR_OFFSET))(nullptr);
		}

	};

