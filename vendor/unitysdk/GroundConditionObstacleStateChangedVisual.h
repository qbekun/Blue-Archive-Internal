#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionObstacleStateChanged; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x18145F0)
#define GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814600)
#define GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1814610)

	inline static constexpr unsigned int GroundConditionObstacleStateChangedVisual_TypeDefinitionIndex = 1236;

	class GroundConditionObstacleStateChangedVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionObstacleStateChanged* ObstacleStateChanged; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONOBSTACLESTATECHANGEDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

