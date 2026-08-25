#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionAnyEnemyArriveTile; }
class HexaTileVisual;
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define HEXACONDITIONANYENEMYARRIVETILEVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6D840)
#define HEXACONDITIONANYENEMYARRIVETILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6D950)
#define HEXACONDITIONANYENEMYARRIVETILEVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6D9D0)
#define HEXACONDITIONANYENEMYARRIVETILEVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6D9E0)

	inline static constexpr unsigned int HexaConditionAnyEnemyArriveTileVisual_TypeDefinitionIndex = 787;

	class HexaConditionAnyEnemyArriveTileVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionAnyEnemyArriveTile* ArriveTile; // 0x18
		HexaTileVisual* Tile; // 0x20

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYARRIVETILEVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYARRIVETILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYARRIVETILEVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONANYENEMYARRIVETILEVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

	};

