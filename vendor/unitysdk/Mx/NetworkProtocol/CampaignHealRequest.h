#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_CAMPAIGNSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14F60)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF14F70)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF14F80)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14F90)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_CAMPAIGNSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14FA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF14FB0)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xF14FC0)
#define MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignHealRequest_TypeDefinitionIndex = 11434;

	class CampaignHealRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CampaignStageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _CharacterServerId_k__BackingField; // 0x50

		::System::Void set_CampaignStageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_CAMPAIGNSTAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CampaignStageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_CAMPAIGNSTAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNHEALREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

