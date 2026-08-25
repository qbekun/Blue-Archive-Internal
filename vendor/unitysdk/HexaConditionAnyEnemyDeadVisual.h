#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionAnyEnemyDead; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define HEXACONDITIONANYENEMYDEADVISUAL_FINDTARGETUNITSPAWNEVENT_OFFSET UNITYSDK_OFFSET(0xF6DBC0)
#define HEXACONDITIONANYENEMYDEADVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6E470)
#define HEXACONDITIONANYENEMYDEADVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6E860)
#define HEXACONDITIONANYENEMYDEADVISUAL_ISDEAD_OFFSET UNITYSDK_OFFSET(0xF6E6C0)
#define HEXACONDITIONANYENEMYDEADVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6E980)
#define HEXACONDITIONANYENEMYDEADVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6E9F0)

	inline static constexpr unsigned int HexaConditionAnyEnemyDeadVisual_TypeDefinitionIndex = 790;

	class HexaConditionAnyEnemyDeadVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionAnyEnemyDead* AnyEnemyUnitDead; // 0x18

		::System::Int64 FindTargetUnitSpawnEvent(::System::Int64 arg, ::MX::Campaign::HexaTileMap* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_FINDTARGETUNITSPAWNEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDead(::System::Int64 arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_ISDEAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYDEADVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

