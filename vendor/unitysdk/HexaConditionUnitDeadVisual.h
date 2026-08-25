#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaConditionUnitDead; }
namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define HEXACONDITIONUNITDEADVISUAL_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0xF6F770)
#define HEXACONDITIONUNITDEADVISUAL_SETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6F9D0)
#define HEXACONDITIONUNITDEADVISUAL_GETCONDITION_OFFSET UNITYSDK_OFFSET(0xF6FAE0)
#define HEXACONDITIONUNITDEADVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xF6FAF0)

	inline static constexpr unsigned int HexaConditionUnitDeadVisual_TypeDefinitionIndex = 796;

	class HexaConditionUnitDeadVisual : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaConditionUnitDead* UnitDead; // 0x18
		Il2CppObject* Units; // 0x20

		::System::Boolean IsSatisfied(::MX::Campaign::HexaTileMap* arg, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMap*, ::MX::GameLogic::DBModel::CampaignMainStageSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONUNITDEADVISUAL_ISSATISFIED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCondition(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONUNITDEADVISUAL_SETCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* GetCondition()
		{
			return ((::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONUNITDEADVISUAL_GETCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXACONDITIONUNITDEADVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

