#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define MX_LOGIC_BATTLES_ENEMYGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1398B70)
#define MX_LOGIC_BATTLES_ENEMYGROUP_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1398CC0)
#define MX_LOGIC_BATTLES_ENEMYGROUP_BATTLE_CHARACTERDIED_OFFSET UNITYSDK_OFFSET(0x13990D0)
#define MX_LOGIC_BATTLES_ENEMYGROUP_RECHECKSUPPORTEROFAIGROUP_OFFSET UNITYSDK_OFFSET(0x1398CE0)
#define MX_LOGIC_BATTLES_ENEMYGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399100)
#define MX_LOGIC_BATTLES_ENEMYGROUP_CREATESKILLCARDMANAGER_OFFSET UNITYSDK_OFFSET(0x1399180)
#define MX_LOGIC_BATTLES_ENEMYGROUP_CANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x1399200)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int EnemyGroup_TypeDefinitionIndex = 14435;

	class EnemyGroup : public Il2CppObject
	{
	public:
		Il2CppObject* removedSupporters; // 0x150

		::System::Void .ctor(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Data::TeamSetting* arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Data::TeamSetting*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_CharacterDied(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_BATTLE_CHARACTERDIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReCheckSupporterOfAIGroup(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_RECHECKSUPPORTEROFAIGROUP_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62* CreateSkillCardManager(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::MX::Logic::Battles::Ode65b9d400da84b011ba22621e376f40ae60a647d54d277429416703d7c71a62*(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_CREATESKILLCARDMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanUseAutoSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_ENEMYGROUP_CANUSEAUTOSKILL_OFFSET))(nullptr);
		}

	};
}

