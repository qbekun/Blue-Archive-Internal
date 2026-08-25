#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionTurn; }
namespace MX::NetworkProtocol { class CampaignState; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define HEXACONDITIONTURNVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6F470)
#define HEXACONDITIONTURNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6F5E0)
#define HEXACONDITIONTURNVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F650)
#define HEXACONDITIONTURNVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F760)

	inline static constexpr unsigned int HexaConditionTurnVisual_TypeDefinitionIndex = 795;

	class HexaConditionTurnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionTurn* ConditionTurn; // 0x18
		::System::Int32 Turn; // 0x20
		::MX::NetworkProtocol::CampaignState* State; // 0x24

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONTURNVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONTURNVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONTURNVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONTURNVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

