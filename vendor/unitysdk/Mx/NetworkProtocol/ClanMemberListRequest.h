#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16600)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16610)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16620)
#define MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16630)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMemberListRequest_TypeDefinitionIndex = 11494;

	class ClanMemberListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERLISTREQUEST_GET_CLANDBID_OFFSET))(nullptr);
		}

	};
}

