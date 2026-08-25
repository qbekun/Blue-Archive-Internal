#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_CLONE_OFFSET UNITYSDK_OFFSET(0x143F4F0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_FINDTARGETUNITSPAWNEVENT_OFFSET UNITYSDK_OFFSET(0x143F640)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143FEF0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0x143FF00)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_ISDEAD_OFFSET UNITYSDK_OFFSET(0x143FF10)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x143F5C0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x1440150)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaConditionUnitDead_TypeDefinitionIndex = 14925;

	class HexaConditionUnitDead : public Il2CppObject
	{
	public:
		Il2CppObject* UnitEntityIds; // 0x28

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_CLONE_OFFSET))(nullptr);
		}

		::System::Int64 FindTargetUnitSpawnEvent(::System::Int64 arg, ::MX::Campaign::HexaTileMap* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Campaign::HexaTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_FINDTARGETUNITSPAWNEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_GET_RESUABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsDead(::System::Int64 arg, ::MX::Campaign::HexaTileMap* arg2, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_ISDEAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONUNITDEAD_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

