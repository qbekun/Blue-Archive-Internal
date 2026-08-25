#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D460)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D470)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_SET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF4D480)
#define MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_GET_SEARCHACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF4D490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidGetBestTeamRequest_TypeDefinitionIndex = 12047;

	class RaidGetBestTeamRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SearchAccountId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SearchAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_SET_SEARCHACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SearchAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDGETBESTTEAMREQUEST_GET_SEARCHACCOUNTID_OFFSET))(nullptr);
		}

	};
}

