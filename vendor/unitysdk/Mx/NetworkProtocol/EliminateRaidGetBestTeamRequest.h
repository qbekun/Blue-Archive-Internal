#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF431E0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF431F0)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_SET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF43200)
#define MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_GET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF43210)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EliminateRaidGetBestTeamRequest_TypeDefinitionIndex = 11659;

	class EliminateRaidGetBestTeamRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SearchAccountId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SearchAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_SET_SEARCHACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SearchAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ELIMINATERAIDGETBESTTEAMREQUEST_GET_SEARCHACCOUNTID_OFFSET))(nullptr);
		}

	};
}

