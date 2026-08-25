#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANKICKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF169C0)
#define MX_NETWORKPROTOCOL_CLANKICKREQUEST_GET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF169D0)
#define MX_NETWORKPROTOCOL_CLANKICKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF169E0)
#define MX_NETWORKPROTOCOL_CLANKICKREQUEST_SET_MEMBERACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF169F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanKickRequest_TypeDefinitionIndex = 11508;

	class ClanKickRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MemberAccountId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_MemberAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKREQUEST_GET_MEMBERACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MemberAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANKICKREQUEST_SET_MEMBERACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

