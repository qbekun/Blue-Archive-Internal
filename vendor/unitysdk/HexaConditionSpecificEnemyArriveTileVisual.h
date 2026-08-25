#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionSpecificEnemyArriveTile; }
class HexaTileVisual;
class HexaUnitVisual;
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6EF50)
#define HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6EFC0)
#define HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F110)
#define HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F220)

	inline static constexpr unsigned int HexaConditionSpecificEnemyArriveTileVisual_TypeDefinitionIndex = 793;

	class HexaConditionSpecificEnemyArriveTileVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionSpecificEnemyArriveTile* ArriveTile; // 0x18
		HexaTileVisual* Tile; // 0x20
		HexaUnitVisual* Unit; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONSPECIFICENEMYARRIVETILEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

	};

