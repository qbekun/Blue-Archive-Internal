#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::BattleEntities { class PassiveSkillSpawner; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Battles { class LogicEffectExpiredEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x13F76D0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x13F78B0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_DISABLE_OFFSET UNITYSDK_OFFSET(0x13F7AA0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_BATTLE_LOGICEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x13F7BC0)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_ENABLE_OFFSET UNITYSDK_OFFSET(0x13F7C40)
#define MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x13F7D60)

namespace MX::Logic::Skills::Passive
{
	inline static constexpr unsigned int BattleEntityCountLogicEffectCategoryExecution_TypeDefinitionIndex = 14625;

	class BattleEntityCountLogicEffectCategoryExecution : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* targetCategory; // 0x50
		::System::Int32 minCount; // 0x54
		::System::Int32 maxCount; // 0x58
		::MX::Logic::BattleEntities::PassiveSkillSpawner* spawner; // 0x60
		::System::Boolean check; // 0x68
		::System::Boolean minMaxConditionOk; // 0x69

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::Skills::Passive::PassiveSkill* arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Disable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Battle_LogicEffectExpired(::System::Object* arg, ::MX::Logic::Battles::LogicEffectExpiredEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectExpiredEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_BATTLE_LOGICEFFECTEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Enable(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LogicEffectProcessor_LogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_PASSIVE_BATTLEENTITYCOUNTLOGICEFFECTCATEGORYEXECUTION_LOGICEFFECTPROCESSOR_LOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

	};
}

