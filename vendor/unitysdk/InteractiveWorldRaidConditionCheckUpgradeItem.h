#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDCONDITIONCHECKUPGRADEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x259F630)
#define INTERACTIVEWORLDRAIDCONDITIONCHECKUPGRADEITEM_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x259F640)

	inline static constexpr unsigned int InteractiveWorldRaidConditionCheckUpgradeItem_TypeDefinitionIndex = 312;

	class InteractiveWorldRaidConditionCheckUpgradeItem : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKUPGRADEITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDCONDITIONCHECKUPGRADEITEM_CHECKCONDITION_OFFSET))(nullptr);
		}

	};

