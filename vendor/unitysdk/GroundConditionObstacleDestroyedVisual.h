#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionObstacleDestroyed; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814510)
#define GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814520)
#define GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18145E0)

	inline static constexpr unsigned int GroundConditionObstacleDestroyedVisual_TypeDefinitionIndex = 1235;

	class GroundConditionObstacleDestroyedVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionObstacleDestroyed* ObstacleDestroyed; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLEDESTROYEDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

