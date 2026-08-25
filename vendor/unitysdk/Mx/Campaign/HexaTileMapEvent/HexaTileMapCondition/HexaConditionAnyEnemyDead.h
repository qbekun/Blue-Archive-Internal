#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143E250)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_CLONE_OFFSET UNITYSDK_OFFSET(0x143E260)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x143E2E0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x143E2D0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0x143EDF0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaConditionAnyEnemyDead_TypeDefinitionIndex = 14917;

	class HexaConditionAnyEnemyDead : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONANYENEMYDEAD_GET_RESUABLE_OFFSET))(nullptr);
		}

	};
}

