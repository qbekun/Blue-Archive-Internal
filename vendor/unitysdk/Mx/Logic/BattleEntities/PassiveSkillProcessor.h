#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Skills::Passive { class PassiveSkill; }
namespace MX::Logic::Skills { class SkillType; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::Skills::Passive { class PassiveExecution; }

#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_GET_SKILLS_OFFSET UNITYSDK_OFFSET(0x113DCF0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_GET_WATCHTARGETS_OFFSET UNITYSDK_OFFSET(0x113DD40)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x113DD50)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x113DE30)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_REMOVEEXPIRED_OFFSET UNITYSDK_OFFSET(0x113E6A0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_REGISTER_OFFSET UNITYSDK_OFFSET(0x113E6B0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_INIT_OFFSET UNITYSDK_OFFSET(0x113E7E0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_ENABLEEXECUTIONS_OFFSET UNITYSDK_OFFSET(0x113F060)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_DISABLEEXECUTIONS_OFFSET UNITYSDK_OFFSET(0x113F350)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_CLEARONDEAD_OFFSET UNITYSDK_OFFSET(0x113F620)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FIND_OFFSET UNITYSDK_OFFSET(0x113F8B0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x113FC30)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FIND_OFFSET UNITYSDK_OFFSET(0x113FC60)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x113FFF0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_UPDATEADD_OFFSET UNITYSDK_OFFSET(0x113E160)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_INITEXECUTIONS_OFFSET UNITYSDK_OFFSET(0x113EB60)
#define MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_ADDEXECUTIONRUNTIME_OFFSET UNITYSDK_OFFSET(0x11400A0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PassiveSkillProcessor_TypeDefinitionIndex = 13110;

	class PassiveSkillProcessor : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* owner; // 0x10
		Il2CppObject* skillExecutionsTable; // 0x18
		Il2CppObject* _watchTargets_k__BackingField; // 0x20

		Il2CppObject* get_skills()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_GET_SKILLS_OFFSET))(nullptr);
		}

		Il2CppObject* get_watchTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_GET_WATCHTARGETS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveExpired(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_REMOVEEXPIRED_OFFSET))(arg, nullptr);
		}

		::System::Void Register(::MX::Logic::Skills::Passive::PassiveSkill* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void EnableExecutions(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::SkillType* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_ENABLEEXECUTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DisableExecutions(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::SkillType* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::SkillType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_DISABLEEXECUTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearOnDead(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_CLEARONDEAD_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkill* Find(::MX::Logic::BattleEntities::SkillSlot* arg)
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FIND_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* FindSlot(::System::String* str)
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FINDSLOT_OFFSET))(str, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveSkill* Find(::System::String* str)
		{
			return ((::MX::Logic::Skills::Passive::PassiveSkill*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_FIND_OFFSET))(str, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateAdd(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_UPDATEADD_OFFSET))(arg, nullptr);
		}

		::System::Void InitExecutions(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_INITEXECUTIONS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Skills::Passive::PassiveExecution* AddExecutionRuntime(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::Passive::PassiveSkill* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3)
		{
			return ((::MX::Logic::Skills::Passive::PassiveExecution*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::Passive::PassiveSkill*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVESKILLPROCESSOR_ADDEXECUTIONRUNTIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

