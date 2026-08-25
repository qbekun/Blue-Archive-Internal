#pragma once
#include "../../../../unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionType; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x143E0D0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x143E0E0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_SET_ALREADYTRIGGERED_OFFSET UNITYSDK_OFFSET(0x143E0F0)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_SET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x143E100)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_ALREADYTRIGGERED_OFFSET UNITYSDK_OFFSET(0x143E110)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_RESUABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition
{
	inline static constexpr unsigned int HexaCondition_TypeDefinitionIndex = 14913;

	class HexaCondition : public Il2CppObject
	{
	public:
		::System::Int64 _ConditionId_k__BackingField; // 0x10
		::System::Boolean _AlreadyTriggered_k__BackingField; // 0x18
		Il2CppObject* VisualCondition; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_ConditionId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_CONDITIONID_OFFSET))(nullptr);
		}

		::System::Void set_AlreadyTriggered(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_SET_ALREADYTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConditionId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_SET_CONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AlreadyTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_ALREADYTRIGGERED_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType* get_Type()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* Clone()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean get_Resuable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXATILEMAPEVENT_HEXATILEMAPCONDITION_HEXACONDITION_GET_RESUABLE_OFFSET))(nullptr);
		}

	};
}

