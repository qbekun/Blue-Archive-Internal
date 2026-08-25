#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class PassiveTriggerData; }
namespace MX::Logic::Skills { class TargetFindRule; }
namespace MX::Logic::Skills::Passive { class PassiveSkillTargetType; }

#define MX_LOGIC_DATA_PASSIVESKILLDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x11F6F40)
#define MX_LOGIC_DATA_PASSIVESKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F7090)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PassiveSkillData_TypeDefinitionIndex = 13659;

	class PassiveSkillData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x18
		::System::Int32 MaxTriggerCount; // 0x1C
		::System::Int64 CoolTimeNotTrigger; // 0x20
		::System::Int32 TryCount; // 0x28
		::System::Boolean ResetTryCountUseSkill; // 0x2C
		::MX::Logic::Data::PassiveTriggerData* TriggerCondition; // 0x30
		::MX::Logic::Skills::TargetFindRule* TriggerSourceFindRule; // 0x38
		::MX::Logic::Skills::Passive::PassiveSkillTargetType* SkillTargetType; // 0x120
		Il2CppObject* EntityTimeline; // 0x128

		::System::Boolean Validate(::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVESKILLDATA_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PASSIVESKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

