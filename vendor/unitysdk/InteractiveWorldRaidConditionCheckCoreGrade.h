#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONCHECKCOREGRADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F2E0)
#define INTERACTIVEWORLDRAIDCONDITIONCHECKCOREGRADE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F2F0)

	inline static constexpr unsigned int InteractiveWorldRaidConditionCheckCoreGrade_TypeDefinitionIndex = 310;

	class InteractiveWorldRaidConditionCheckCoreGrade : public Il2CppObject
	{
	public:
		::System::Int32 coreGrade; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKCOREGRADE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKCOREGRADE_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

