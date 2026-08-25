#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class SessionTask; }
namespace MX::Logic::Battles::Summary { class TacticSkipSummary; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Campaign { class SkillCardHand; }

#define ICAMPAIGNTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_SET_HAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_GET_HAND_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICAMPAIGNTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ICampaignTacticResultNetworkTask_TypeDefinitionIndex = 2109;

	class ICampaignTacticResultNetworkTask : public Il2CppObject
	{
	public:
		::Assets::_MX::Program::Scripts::Network::SessionTask* ToSessionTask()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_TOSESSIONTASK_OFFSET))(nullptr);
		}

		::System::Void set_SkipSummary(::MX::Logic::Battles::Summary::TacticSkipSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::TacticSkipSummary*, ::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_SET_SKIPSUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::TacticSkipSummary* get_SkipSummary()
		{
			return ((::MX::Logic::Battles::Summary::TacticSkipSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_GET_SKIPSUMMARY_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Hand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_SET_HAND_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::SkillCardHand* get_Hand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_GET_HAND_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + ICAMPAIGNTACTICRESULTNETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

	};

