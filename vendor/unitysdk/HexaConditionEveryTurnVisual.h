#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionEveryTurn; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define HEXACONDITIONEVERYTURNVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6EDB0)
#define HEXACONDITIONEVERYTURNVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6EDC0)
#define HEXACONDITIONEVERYTURNVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6EE30)
#define HEXACONDITIONEVERYTURNVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6EE40)

	inline static constexpr unsigned int HexaConditionEveryTurnVisual_TypeDefinitionIndex = 792;

	class HexaConditionEveryTurnVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionEveryTurn* EveryTurn; // 0x18

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONEVERYTURNVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONEVERYTURNVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONEVERYTURNVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONEVERYTURNVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

	};

