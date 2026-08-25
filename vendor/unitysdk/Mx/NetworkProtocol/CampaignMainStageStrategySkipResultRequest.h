#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15620)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15630)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15640)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF15650)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15660)
#define MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF15670)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignMainStageStrategySkipResultRequest_TypeDefinitionIndex = 11452;

	class CampaignMainStageStrategySkipResultRequest : public Il2CppObject
	{
	public:
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNMAINSTAGESTRATEGYSKIPRESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

	};
}

