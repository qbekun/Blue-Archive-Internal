#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0x143F060)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x143F070)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_.CTOR_OFFSET UNITYSDK_OFFSET(0x143F080)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143F090)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_CLONE_OFFSET UNITYSDK_OFFSET(0x143F0A0)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaConditionEveryTurn_TypeDefinitionIndex = 14919;

	class HexaConditionEveryTurn : public Il2CppObject
	{
	public:
		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_GET_RESUABLE_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITIONEVERYTURN_CLONE_OFFSET))(nullptr);
		}

	};
}

