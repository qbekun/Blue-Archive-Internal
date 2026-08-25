#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionArriveTile; }
class HexaTileVisual;
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define HEXACONDITIONARRIVETILEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6EAF0)
#define HEXACONDITIONARRIVETILEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6EC00)
#define HEXACONDITIONARRIVETILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6EC10)
#define HEXACONDITIONARRIVETILEVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6EC80)

	inline static constexpr unsigned int HexaConditionArriveTileVisual_TypeDefinitionIndex = 791;

	class HexaConditionArriveTileVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionArriveTile* ArriveTile; // 0x18
		HexaTileVisual* Tile; // 0x20

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONARRIVETILEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONARRIVETILEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONARRIVETILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONARRIVETILEVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

	};

