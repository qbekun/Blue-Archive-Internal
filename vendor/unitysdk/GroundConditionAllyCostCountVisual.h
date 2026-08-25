#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionAllyCostCount; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONALLYCOSTCOUNTVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x18136B0)
#define GROUNDCONDITIONALLYCOSTCOUNTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18136C0)
#define GROUNDCONDITIONALLYCOSTCOUNTVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x18136D0)

	inline static constexpr unsigned int GroundConditionAllyCostCountVisual_TypeDefinitionIndex = 1220;

	class GroundConditionAllyCostCountVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionAllyCostCount* Condition; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALLYCOSTCOUNTVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALLYCOSTCOUNTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALLYCOSTCOUNTVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

