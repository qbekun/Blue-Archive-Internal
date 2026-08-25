#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50980)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50990)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF509A0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF509B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignMissionMultipleRewardRequest_TypeDefinitionIndex = 12195;

	class WelcomeCampaignMissionMultipleRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONMULTIPLEREWARDREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

	};
}

