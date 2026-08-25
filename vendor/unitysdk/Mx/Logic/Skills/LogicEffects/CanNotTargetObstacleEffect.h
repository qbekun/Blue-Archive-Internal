#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class CanNotTargetObstacleEffectValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x140AC60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x140AD40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_ENDCONDITION_OFFSET UNITYSDK_OFFSET(0x140AD50)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140AD60)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_ABILITY_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x140AD70)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140AE20)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int CanNotTargetObstacleEffect_TypeDefinitionIndex = 14705;

	class CanNotTargetObstacleEffect : public Il2CppObject
	{
	public:
		::System::Boolean _Dispellable_k__BackingField; // 0xD0
		::FlatData::EndCondition* _EndCondition_k__BackingField; // 0xD4
		::System::Int32 _EndConditionArgument_k__BackingField; // 0xD8
		::MX::Logic::Battles::Battle* battle; // 0xE0
		Il2CppObject* dotAbility; // 0xE8

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::FlatData::EndCondition* get_EndCondition()
		{
			return ((::FlatData::EndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_ENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void Ability_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_ABILITY_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::CanNotTargetObstacleEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::CanNotTargetObstacleEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_CANNOTTARGETOBSTACLEEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

