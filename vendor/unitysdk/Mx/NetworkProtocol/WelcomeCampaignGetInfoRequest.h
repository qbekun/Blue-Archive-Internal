#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50660)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50670)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50680)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50690)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignGetInfoRequest_TypeDefinitionIndex = 12185;

	class WelcomeCampaignGetInfoRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNGETINFOREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}

