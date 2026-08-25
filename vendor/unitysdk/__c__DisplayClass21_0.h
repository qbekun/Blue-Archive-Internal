#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaTileMap; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }
namespace MX::Campaign::HexaTileMapEvent::HexaTileMapCondition { class HexaCondition; }

#define <>C__DISPLAYCLASS21_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x143DB50)
#define <>C__DISPLAYCLASS21_0__RUNCOMMANDIFCONDITIONSATISFIED_B__0_OFFSET UNITYSDK_OFFSET(0x143DF40)

	inline static constexpr unsigned int <>c__DisplayClass21_0_TypeDefinitionIndex = 14909;

	class <>c__DisplayClass21_0 : public Il2CppObject
	{
	public:
		::MX::Campaign::HexaTileMap* hexaTileMap; // 0x10
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* campaignStrategySaveDB; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RunCommandIfConditionSatisfied_b__0(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexaTileMapEvent::HexaTileMapCondition::HexaCondition*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS21_0__RUNCOMMANDIFCONDITIONSATISFIED_B__0_OFFSET))(arg, nullptr);
		}

	};

