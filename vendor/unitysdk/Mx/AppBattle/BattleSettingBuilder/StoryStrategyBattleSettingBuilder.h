#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace FlatData { class EchelonType; }
namespace MX::Data { class CampaignStageInfo; }
namespace MX::Campaign { class HexaUnit; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0x1D2D120)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1D2D130)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D140)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int StoryStrategyBattleSettingBuilder_TypeDefinitionIndex = 20063;

	class StoryStrategyBattleSettingBuilder : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return (return (::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::CampaignStageInfo* arg, ::MX::Campaign::HexaUnit* arg, ::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::MX::Campaign::HexaUnit*, ::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_STORYSTRATEGYBATTLESETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

