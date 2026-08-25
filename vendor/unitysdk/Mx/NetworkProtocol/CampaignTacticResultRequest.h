#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::Campaign { class SkillCardHand; }
namespace MX::Logic::Battles::Summary { class TacticSkipSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF14C00)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0xF14C10)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14C20)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF14C30)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF14C40)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_HAND_OFFSET UNITYSDK_OFFSET(0xF14C50)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF14C60)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_SKIPSUMMARY_OFFSET UNITYSDK_OFFSET(0xF14C70)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_HAND_OFFSET UNITYSDK_OFFSET(0xF14C80)
#define MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14C90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignTacticResultRequest_TypeDefinitionIndex = 11428;

	class CampaignTacticResultRequest : public Il2CppObject
	{
	public:
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48
		::MX::Campaign::SkillCardHand* _Hand_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::TacticSkipSummary* _SkipSummary_k__BackingField; // 0x58

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::TacticSkipSummary* get_SkipSummary()
		{
			return ((::MX::Logic::Battles::Summary::TacticSkipSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_SKIPSUMMARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::SkillCardHand* get_Hand()
		{
			return ((::MX::Campaign::SkillCardHand*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_HAND_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_SkipSummary(::MX::Logic::Battles::Summary::TacticSkipSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::TacticSkipSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_SKIPSUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Hand(::MX::Campaign::SkillCardHand* arg)
		{
			((::System::Void(*)(::MX::Campaign::SkillCardHand*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_SET_HAND_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTACTICRESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

