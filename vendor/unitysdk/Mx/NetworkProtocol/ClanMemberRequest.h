#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_SET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16520)
#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16530)
#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF16540)
#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF16550)
#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF16560)
#define MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0xF16570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanMemberRequest_TypeDefinitionIndex = 11492;

	class ClanMemberRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ClanDBId_k__BackingField; // 0x40
		::System::Int64 _MemberAccountId_k__BackingField; // 0x48

		::System::Void set_MemberAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_SET_MEMBERACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MemberAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_MEMBERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANMEMBERREQUEST_GET_CLANDBID_OFFSET))(nullptr);
		}

	};
}

