#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONISSCENARIOWATCHED_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259FE40)
#define INTERACTIVEWORLDRAIDCONDITIONISSCENARIOWATCHED_.CTOR_OFFSET UNITYSDK_OFFSET(0x259FEF0)

	inline static constexpr unsigned int InteractiveWorldRaidConditionIsScenarioWatched_TypeDefinitionIndex = 318;

	class InteractiveWorldRaidConditionIsScenarioWatched : public Il2CppObject
	{
	public:
		::System::Int64 scenarioGroupId; // 0x20

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISSCENARIOWATCHED_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONISSCENARIOWATCHED_.CTOR_OFFSET))(nullptr);
		}

	};

