#pragma once
#include "../../../../unitysdk.h"

namespace MX::NetworkProtocol { class CampaignState; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0x143F350)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143F360)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_CLONE_OFFSET UNITYSDK_OFFSET(0x143F370)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x143F3F0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x143F3E0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaConditionTurn_TypeDefinitionIndex = 14922;

	class HexaConditionTurn : public Il2CppObject
	{
	public:
		::System::Int32 TurnNumber; // 0x28
		::MX::NetworkProtocol::CampaignState* CampaignState; // 0x2C

		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_GET_RESUABLE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONTURN_.CTOR_OFFSET))(nullptr);
		}

	};
}

