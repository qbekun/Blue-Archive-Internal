#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONISSCENARIOBOSSACTIVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FD00)
#define INTERACTIVEWORLDRAIDCONDITIONISSCENARIOBOSSACTIVE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259FD10)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsScenarioBossActive_TypeDefinitionIndex = 317;

	class InteractiveWorldRaidConditionIsScenarioBossActive : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISSCENARIOBOSSACTIVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISSCENARIOBOSSACTIVE_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

