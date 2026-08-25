#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITION_GET_CONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x25A2C80)
#define INTERACTIVEWORLDRAIDCONDITION_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERACTIVEWORLDRAIDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F2D0)
#define INTERACTIVEWORLDRAIDCONDITION_EVALUATE_OFFSET UNITYSDK_OFFSET(0x25A2DF0)

	inline static constexpr unsigned int InteractiveWorldRaidCondition_TypeDefinitionIndex = 329;

	class InteractiveWorldRaidCondition : public Il2CppObject
	{
	public:
		::System::Boolean isReverseCondition; // 0x18

		::System::String* get_ConditionInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITION_GET_CONDITIONINFO_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITION_CHECKCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITION_EVALUATE_OFFSET))(nullptr);
		}

	};

