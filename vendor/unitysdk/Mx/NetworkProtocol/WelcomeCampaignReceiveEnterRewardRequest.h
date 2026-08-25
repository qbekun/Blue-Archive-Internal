#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF506E0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF506F0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50700)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignReceiveEnterRewardRequest_TypeDefinitionIndex = 12187;

	class WelcomeCampaignReceiveEnterRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNRECEIVEENTERREWARDREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}

