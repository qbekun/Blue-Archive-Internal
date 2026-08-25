#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class GroundConditionBattleStarted; }
namespace MX::Logic::Battles { class GroundCondition; }

#define GROUNDCONDITIONBATTLESTARTEDVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813B70)
#define GROUNDCONDITIONBATTLESTARTEDVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0x1813B80)
#define GROUNDCONDITIONBATTLESTARTEDVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1813C40)

	inline static constexpr unsigned int GroundConditionBattleStartedVisual_TypeDefinitionIndex = 1224;

	class GroundConditionBattleStartedVisual : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::GroundConditionBattleStarted* GroundConditionBattleStarted; // 0x18

		::MX::Logic::Battles::GroundCondition* GetCondition()
		{
			return ((::MX::Logic::Battles::GroundCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Logic::Battles::GroundCondition* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::GroundCondition*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONBATTLESTARTEDVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

