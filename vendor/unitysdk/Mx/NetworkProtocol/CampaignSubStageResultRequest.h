#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF15100)
#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15110)
#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15120)
#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15130)
#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xF15140)
#define MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15150)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignSubStageResultRequest_TypeDefinitionIndex = 11438;

	class CampaignSubStageResultRequest : public Il2CppObject
	{
	public:
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x40
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x48

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNSUBSTAGERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

