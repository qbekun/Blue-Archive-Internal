#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionStartCampaign; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define HEXACONDITIONSTARTCAMPAIGNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6F230)
#define HEXACONDITIONSTARTCAMPAIGNVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F2A0)
#define HEXACONDITIONSTARTCAMPAIGNVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F3B0)
#define HEXACONDITIONSTARTCAMPAIGNVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6F3C0)

	inline static constexpr unsigned int HexaConditionStartCampaignVisual_TypeDefinitionIndex = 794;

	class HexaConditionStartCampaignVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionStartCampaign* StartCampaign; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSTARTCAMPAIGNVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSTARTCAMPAIGNVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSTARTCAMPAIGNVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSTARTCAMPAIGNVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

	};

