#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANJOINREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16720)
#define MX_NETWORKPROTOCOL_CLANJOINREQUEST_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16730)
#define MX_NETWORKPROTOCOL_CLANJOINREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16740)
#define MX_NETWORKPROTOCOL_CLANJOINREQUEST_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16750)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanJoinRequest_TypeDefinitionIndex = 11498;

	class ClanJoinRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINREQUEST_GET_CLANDBID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANJOINREQUEST_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

	};
}

