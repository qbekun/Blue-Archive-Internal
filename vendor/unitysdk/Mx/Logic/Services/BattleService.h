#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::Logic::BattleEntities { class GroundObstacle; }
namespace MX::Logic::Battles { class GroupTag; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class CharacterGroup; }
namespace MX::Logic::Data { class EchelonConstraint; }
namespace FlatData { class EchelonType; }
namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class ContentType; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Skills { class AliveState; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Data { class WeaponSetting; }
namespace MX::Logic::Data { class GearSetting; }

#define MX_LOGIC_SERVICES_BATTLESERVICE_GETOBSTACLETARGETSIDE_OFFSET UNITYSDK_OFFSET(0x10D0110)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETALLYCENTER_OFFSET UNITYSDK_OFFSET(0x10D0180)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETENEMYCENTER_OFFSET UNITYSDK_OFFSET(0x10D01B0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETALLYTOENEMYDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D01E0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETENEMYTOALLYDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D0400)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D0230)
#define MX_LOGIC_SERVICES_BATTLESERVICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x10D0450)
#define MX_LOGIC_SERVICES_BATTLESERVICE_LOGICFRAMETOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x10D06A0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_MILLISECONDTOLOGICFRAME_OFFSET UNITYSDK_OFFSET(0x10D0700)
#define MX_LOGIC_SERVICES_BATTLESERVICE_LOGICFRAMETOMILLISECOND_OFFSET UNITYSDK_OFFSET(0x10D0790)
#define MX_LOGIC_SERVICES_BATTLESERVICE_MILLISECONDTOLOGICFRAME_OFFSET UNITYSDK_OFFSET(0x10D07F0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x10D0870)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETBATTLETYPES_OFFSET UNITYSDK_OFFSET(0x10D0A30)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORRAID_OFFSET UNITYSDK_OFFSET(0x10D0AA0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORWORLDRAID_OFFSET UNITYSDK_OFFSET(0x10D0ED0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0x10D0FA0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASE_OFFSET UNITYSDK_OFFSET(0x10D0B70)
#define MX_LOGIC_SERVICES_BATTLESERVICE_HASTARGETSIDE_OFFSET UNITYSDK_OFFSET(0x10D0170)
#define MX_LOGIC_SERVICES_BATTLESERVICE_ISTARGETSIDEMATCH_OFFSET UNITYSDK_OFFSET(0x10D0FE0)
#define MX_LOGIC_SERVICES_BATTLESERVICE_ISTARGETSIDEMATCHFULLCHECK_OFFSET UNITYSDK_OFFSET(0x10D1060)
#define MX_LOGIC_SERVICES_BATTLESERVICE_HASALIVESTATE_OFFSET UNITYSDK_OFFSET(0x10D1140)
#define MX_LOGIC_SERVICES_BATTLESERVICE_GETSUMMONERENTITYID_OFFSET UNITYSDK_OFFSET(0x10D1150)
#define MX_LOGIC_SERVICES_BATTLESERVICE_ISSKILLREINFORCED_OFFSET UNITYSDK_OFFSET(0x10D12E0)

namespace MX::Logic::Services
{
	inline static constexpr unsigned int BattleService_TypeDefinitionIndex = 12981;

	class BattleService : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetSideId* GetObstacleTargetSide(::MX::Logic::BattleEntities::GroundObstacle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::MX::Logic::BattleEntities::GroundObstacle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETOBSTACLETARGETSIDE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetAllyCenter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETALLYCENTER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetEnemyCenter(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETENEMYCENTER_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetAllyToEnemyDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETALLYTOENEMYDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetEnemyToAllyDirection(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Battles::GroupTag* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Battles::GroupTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETENEMYTOALLYDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector2* GetDirection(::MX::Logic::Battles::CharacterGroup* arg, ::MX::Logic::Battles::CharacterGroup* arg2)
		{
			return ((::UnityEngine::Vector2*(*)(::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::Battles::CharacterGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETDIRECTION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsMatch(::MX::Logic::Battles::CharacterGroup* arg, ::MX::Logic::Data::EchelonConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::CharacterGroup*, ::MX::Logic::Data::EchelonConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_ISMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::TimeSpan* LogicFrameToTimeSpan(::System::Int32 arg)
		{
			return ((::System::TimeSpan*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_LOGICFRAMETOTIMESPAN_OFFSET))(arg, nullptr);
		}

		::System::Int32 MilliSecondToLogicFrame(::System::Int64 arg)
		{
			return ((::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_MILLISECONDTOLOGICFRAME_OFFSET))(arg, nullptr);
		}

		::System::Int64 LogicFrameToMilliSecond(::System::Int64 arg)
		{
			return ((::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_LOGICFRAMETOMILLISECOND_OFFSET))(arg, nullptr);
		}

		::System::Int32 MilliSecondToLogicFrame(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_MILLISECONDTOLOGICFRAME_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* GetEchelonType(::MX::Logic::Data::BattleTypes* arg)
		{
			return ((::FlatData::EchelonType*(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::BattleTypes* GetBattleTypes(::FlatData::EchelonType* arg)
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETBATTLETYPES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRaidBossPhaseForRaid(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int64 arg5)
		{
			return ((::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORRAID_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 GetRaidBossPhaseForWorldRaid(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::System::Int64 arg5)
		{
			return ((::System::Int32(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORWORLDRAID_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Int32 GetRaidBossPhaseForMultiFloorRaid(::MX::Data::Excel::MultiFloorRaidStageExcel* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4)
		{
			return ((::System::Int32(*)(::MX::Data::Excel::MultiFloorRaidStageExcel*, ::System::Int64, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASEFORMULTIFLOORRAID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetRaidBossPhase(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETRAIDBOSSPHASE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasTargetSide(::MX::Logic::Skills::TargetSideId* arg, ::MX::Logic::Skills::TargetSideId* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::TargetSideId*, ::MX::Logic::Skills::TargetSideId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_HASTARGETSIDE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetSideMatch(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetSideId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetSideId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_ISTARGETSIDEMATCH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsTargetSideMatchFullCheck(::MX::Logic::Battles::Battle* arg, ::MX::Logic::Skills::TargetSideId* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, ::MX::Logic::BattleEntities::BattleEntity* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::Skills::TargetSideId*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_ISTARGETSIDEMATCHFULLCHECK_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean HasAliveState(::MX::Logic::Skills::AliveState* arg, ::MX::Logic::Skills::AliveState* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::AliveState*, ::MX::Logic::Skills::AliveState*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_HASALIVESTATE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* GetSummonerEntityId(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_GETSUMMONERENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkillReinforced(::System::Int64 arg, ::MX::Logic::BattleEntities::SkillSlot* arg2, ::MX::Logic::Data::WeaponSetting* arg3, ::MX::Logic::Data::GearSetting* arg4)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Logic::BattleEntities::SkillSlot*, ::MX::Logic::Data::WeaponSetting*, ::MX::Logic::Data::GearSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SERVICES_BATTLESERVICE_ISSKILLREINFORCED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

