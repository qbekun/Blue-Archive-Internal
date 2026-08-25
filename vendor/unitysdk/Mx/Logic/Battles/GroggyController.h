#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class RaidBossCharacter; }
namespace MX::Logic::Data { class StatusAddEffectValue; }
namespace MX::Logic::BattleEntities { class SkillActor; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDBOSSMAXGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1280100)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_TOTALGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1280110)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_CURRENTBOSSPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1280120)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_CURRENTBOSSPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1280130)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_RESETPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1280140)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1280150)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_NEXTGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1280160)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_INITRAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1280170)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_TOTALGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x12804A0)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_SYNCTOTALGROGGY_OFFSET UNITYSDK_OFFSET(0x12804B0)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12804C0)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDBOSS_OFFSET UNITYSDK_OFFSET(0x1280500)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1280510)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_ISGROGGYACTIVATED_OFFSET UNITYSDK_OFFSET(0x12807C0)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_RAIDBOSSMAXGROGGYPOINT_OFFSET UNITYSDK_OFFSET(0x1280800)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_ADDPLAYERGROGGY_OFFSET UNITYSDK_OFFSET(0x1280810)
#define MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDSKILLACTOR_OFFSET UNITYSDK_OFFSET(0x1280820)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroggyController_TypeDefinitionIndex = 14078;

	class GroggyController : public Il2CppObject
	{
	public:
		::System::Int64 _CurrentBossPlayerGroggy_k__BackingField; // 0x10
		::System::Int64 _TotalGroggyPoint_k__BackingField; // 0x18
		::System::Int64 _RaidBossMaxGroggyPoint_k__BackingField; // 0x20
		::System::Int64 lastActivatedGroggyPoint; // 0x28
		::MX::Logic::BattleEntities::RaidBossCharacter* _raidBoss_k__BackingField; // 0x30
		::MX::Logic::Data::StatusAddEffectValue* groggyValue; // 0x38
		::MX::Logic::BattleEntities::SkillActor* _raidSkillActor_k__BackingField; // 0x40

		::System::Int64 get_RaidBossMaxGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDBOSSMAXGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void set_TotalGroggyPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_TOTALGROGGYPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CurrentBossPlayerGroggy()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_CURRENTBOSSPLAYERGROGGY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentBossPlayerGroggy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_CURRENTBOSSPLAYERGROGGY_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPlayerGroggy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_RESETPLAYERGROGGY_OFFSET))(nullptr);
		}

		::System::Void set_raidBoss(::MX::Logic::BattleEntities::RaidBossCharacter* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::RaidBossCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_RAIDBOSS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NextGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_NEXTGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void InitRaidBoss(::MX::Logic::BattleEntities::RaidBossCharacter* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::RaidBossCharacter*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_INITRAIDBOSS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_TotalGroggyPoint()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_TOTALGROGGYPOINT_OFFSET))(nullptr);
		}

		::System::Void SyncTotalGroggy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_SYNCTOTALGROGGY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::SkillActor* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::RaidBossCharacter* get_raidBoss()
		{
			return ((::MX::Logic::BattleEntities::RaidBossCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDBOSS_OFFSET))(nullptr);
		}

		::System::Void Update(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGroggyActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_ISGROGGYACTIVATED_OFFSET))(nullptr);
		}

		::System::Void set_RaidBossMaxGroggyPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_SET_RAIDBOSSMAXGROGGYPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void AddPlayerGroggy(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_ADDPLAYERGROGGY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::SkillActor* get_raidSkillActor()
		{
			return ((::MX::Logic::BattleEntities::SkillActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROGGYCONTROLLER_GET_RAIDSKILLACTOR_OFFSET))(nullptr);
		}

	};
}

