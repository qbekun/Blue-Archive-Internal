#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50820)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50830)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50840)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50850)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignMissionListRequest_TypeDefinitionIndex = 12191;

	class WelcomeCampaignMissionListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNMISSIONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

