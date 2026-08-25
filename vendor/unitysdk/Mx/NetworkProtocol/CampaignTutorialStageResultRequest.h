#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15240)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15250)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15260)
#define MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xF15270)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignTutorialStageResultRequest_TypeDefinitionIndex = 11440;

	class CampaignTutorialStageResultRequest : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNTUTORIALSTAGERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

	};
}

