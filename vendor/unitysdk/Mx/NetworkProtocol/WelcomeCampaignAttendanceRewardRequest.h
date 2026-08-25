#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50780)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50790)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF507A0)
#define MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF507B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WelcomeCampaignAttendanceRewardRequest_TypeDefinitionIndex = 12189;

	class WelcomeCampaignAttendanceRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WELCOMECAMPAIGNATTENDANCEREWARDREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

	};
}

