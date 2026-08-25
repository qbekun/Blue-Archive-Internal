#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF50A60)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_SET_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF50A70)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_HASCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0xF50A80)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50A90)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_SET_HASCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0xF50AA0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50AB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignCheckResponse_TypeDefinitionIndex = 12198;

	class WelcomeCampaignCheckResponse : public Il2CppObject
	{
	public:
		::System::Boolean _HasNotReceiveReward_k__BackingField; // 0x50
		::System::Boolean _HasCompleteMission_k__BackingField; // 0x51

		::System::Boolean get_HasNotReceiveReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_HASNOTRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_HasNotReceiveReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_SET_HASNOTRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasCompleteMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_HASCOMPLETEMISSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HasCompleteMission(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_SET_HASCOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

