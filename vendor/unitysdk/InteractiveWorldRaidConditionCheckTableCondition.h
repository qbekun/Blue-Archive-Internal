#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONCHECKTABLECONDITION_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F470)
#define INTERACTIVEWORLDRAIDCONDITIONCHECKTABLECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F620)

	inline static constexpr unsigned int InteractiveWorldRaidConditionCheckTableCondition_TypeDefinitionIndex = 311;

	class InteractiveWorldRaidConditionCheckTableCondition : public Il2CppObject
	{
	public:
		::System::Int64 conditionId; // 0x20

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKTABLECONDITION_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKTABLECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};

