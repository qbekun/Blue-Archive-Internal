#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class RaidDebuffCollection; }
namespace MX::Logic::BattleEntities { class RaidBossCharacter; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Skills::LogicEffects { class LogicEffect; }
namespace MX::Logic::Data { class DebuffDescription; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DebuffEventArgs; }

#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x127ED80)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERDEBUFFS_OFFSET UNITYSDK_OFFSET(0x127ED90)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_INITRAIDBOSS_OFFSET UNITYSDK_OFFSET(0x127EDA0)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RAIDSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x127EE40)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x127EE50)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERACCOUNTID_OFFSET UNITYSDK_OFFSET(0x127EF60)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERGIVENDEBUFFS_OFFSET UNITYSDK_OFFSET(0x127EF70)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x127EF80)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_CURRENTSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x127F0B0)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_SET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x127F0C0)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_TOLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x127F0D0)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x127F4F0)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_HASPLAYERDEBUFF_OFFSET UNITYSDK_OFFSET(0x127F740)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_SYNCDEBUFF_OFFSET UNITYSDK_OFFSET(0x127F780)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_RAIDBOSS_DEBUFFADDED_OFFSET UNITYSDK_OFFSET(0x127F920)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_CLEARPLAYERDEBUFFS_OFFSET UNITYSDK_OFFSET(0x127FB20)
#define MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RECEIVEDDEBUFFS_OFFSET UNITYSDK_OFFSET(0x127FB80)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int DebuffController_TypeDefinitionIndex = 14076;

	class DebuffController : public Il2CppObject
	{
	public:
		::System::Int64 _PlayerAccountId_k__BackingField; // 0x10
		Il2CppObject* _receivedDebuffs_k__BackingField; // 0x18
		::MX::Logic::Data::RaidDebuffCollection* _currentSnapshots_k__BackingField; // 0x20
		Il2CppObject* _playerDebuffs_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::RaidBossCharacter* _raidBoss_k__BackingField; // 0x30
		::MX::Logic::BattleEntities::SkillActor* _raidSkillActor_k__BackingField; // 0x38

		::MX::Logic::BattleEntities::RaidBossCharacter* get_raidBoss()
		{
			return ((::MX::Logic::BattleEntities::RaidBossCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RAIDBOSS_OFFSET))(nullptr);
		}

		Il2CppObject* get_playerDebuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERDEBUFFS_OFFSET))(nullptr);
		}

		::System::Void InitRaidBoss(::MX::Logic::BattleEntities::RaidBossCharacter* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::RaidBossCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_INITRAIDBOSS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* get_raidSkillActor()
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RAIDSKILLACTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::Logic::BattleEntities::SkillActor* arg2)
		{
			((::System::Void(*)(::System::Int64, ::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_PlayerAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERACCOUNTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlayerGivenDebuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_PLAYERGIVENDEBUFFS_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_CLEAR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::RaidDebuffCollection* get_currentSnapshots()
		{
			return ((::MX::Logic::Data::RaidDebuffCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_CURRENTSNAPSHOTS_OFFSET))(nullptr);
		}

		::System::Void set_raidBoss(::MX::Logic::BattleEntities::RaidBossCharacter* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::RaidBossCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_SET_RAIDBOSS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::LogicEffect* ToLogicEffect(::MX::Logic::Data::DebuffDescription* arg)
		{
			return ((::MX::Logic::Skills::LogicEffects::LogicEffect*(*)(::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_TOLOGICEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasPlayerDebuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_HASPLAYERDEBUFF_OFFSET))(nullptr);
		}

		::System::Void SyncDebuff(::MX::Logic::Data::DebuffDescription* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::DebuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_SYNCDEBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void RaidBoss_DebuffAdded(::System::Object* arg, ::MX::Logic::BattleEntities::DebuffEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::DebuffEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_RAIDBOSS_DEBUFFADDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ClearPlayerDebuffs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_CLEARPLAYERDEBUFFS_OFFSET))(nullptr);
		}

		Il2CppObject* get_receivedDebuffs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_DEBUFFCONTROLLER_GET_RECEIVEDDEBUFFS_OFFSET))(nullptr);
		}

	};
}

