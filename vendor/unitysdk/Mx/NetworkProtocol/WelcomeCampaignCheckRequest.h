#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50A20)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50A30)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50A40)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50A50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignCheckRequest_TypeDefinitionIndex = 12197;

	class WelcomeCampaignCheckRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNCHECKREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}

