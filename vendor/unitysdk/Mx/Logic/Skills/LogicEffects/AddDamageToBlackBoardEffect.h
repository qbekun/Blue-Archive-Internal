#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AddDamageToBlackBoardEffectValue; }
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_GET_BLACKBOARDKEY_OFFSET UNITYSDK_OFFSET(0x1405ED0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1405EF0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x1405F40)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1406040)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1406220)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESS_OFFSET UNITYSDK_OFFSET(0x1406230)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int AddDamageToBlackBoardEffect_TypeDefinitionIndex = 14677;

	class AddDamageToBlackBoardEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AddDamageToBlackBoardEffectValue* _Value_k__BackingField; // 0xD0
		::MX::Logic::Battles::BattleBlackboard* blackBoard; // 0xD8
		::MX::Logic::Battles::BlackboardKey* blackBoardKey; // 0xE0
		::MX::Logic::Battles::Battle* battle; // 0xF8
		Il2CppObject* ability; // 0x100
		::System::Int64 damageSum; // 0x108

		::MX::Logic::Battles::BlackboardKey* get_BlackBoardKey()
		{
			return ((::MX::Logic::Battles::BlackboardKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_GET_BLACKBOARDKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::AddDamageToBlackBoardEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::AddDamageToBlackBoardEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::AddDamageToBlackBoardEffectValue* get_Value()
		{
			return ((::MX::Logic::Data::AddDamageToBlackBoardEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcess(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_ADDDAMAGETOBLACKBOARDEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

