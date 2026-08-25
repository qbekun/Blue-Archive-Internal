#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class BlackBoardSumBulletTypeDamagedEffectValue; }
namespace MX::Logic::Battles { class BattleBlackboard; }
namespace MX::Logic::Battles { class BlackboardKey; }
namespace MX::Logic::Battles { class O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffectHitSpecification; }
namespace FlatData { class BulletType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class DamageResultEventArgs; }

#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x140A380)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x140A3A0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_CHECKEXPIRED_OFFSET UNITYSDK_OFFSET(0x140A3C0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x140A450)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x140A490)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_BLACKBOARDKEY_OFFSET UNITYSDK_OFFSET(0x140A4B0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x140A4D0)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x140A700)
#define MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET UNITYSDK_OFFSET(0x140A710)

namespace MX::Logic::Skills::LogicEffects
{
	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedEffect_TypeDefinitionIndex = 14701;

	class BlackBoardSumBulletTypeDamagedEffect : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BlackBoardSumBulletTypeDamagedEffectValue* _value_k__BackingField; // 0xD0
		::MX::Logic::Battles::BattleBlackboard* blackBoard; // 0xD8
		::MX::Logic::Battles::BlackboardKey* blackBoardKey; // 0xE0
		::MX::Logic::Battles::O1054ef03f4eac11d4d980230b18b9ac5604ed06a81b68c87276faa849ac55e5a* logicEffectProcessor; // 0xF8
		Il2CppObject* ability; // 0x100

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CheckExpired()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_CHECKEXPIRED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Data::BlackBoardSumBulletTypeDamagedEffectValue* arg, ::MX::Logic::Skills::SkillSpecification* arg2, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification* arg3)
		{
			((::System::Void(*)(::MX::Logic::Data::BlackBoardSumBulletTypeDamagedEffectValue*, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::LogicEffects::LogicEffectHitSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return ((::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::BlackboardKey* get_BlackboardKey()
		{
			return ((::MX::Logic::Battles::BlackboardKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_BLACKBOARDKEY_OFFSET))(nullptr);
		}

		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::BlackBoardSumBulletTypeDamagedEffectValue* get_value()
		{
			return ((::MX::Logic::Data::BlackBoardSumBulletTypeDamagedEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void LogicEffectProcessor_DamageProcessed(::System::Object* arg, ::MX::Logic::Battles::DamageResultEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::DamageResultEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_LOGICEFFECTS_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECT_LOGICEFFECTPROCESSOR_DAMAGEPROCESSED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

