#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONISPERMANENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FB80)
#define INTERACTIVEWORLDRAIDCONDITIONISPERMANENT_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259FB90)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsPermanent_TypeDefinitionIndex = 316;

	class InteractiveWorldRaidConditionIsPermanent : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISPERMANENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISPERMANENT_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

