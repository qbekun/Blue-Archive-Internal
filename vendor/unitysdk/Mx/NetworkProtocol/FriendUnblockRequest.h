#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF474A0)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF474B0)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF474C0)
#define MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF474D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendUnblockRequest_TypeDefinitionIndex = 11821;

	class FriendUnblockRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDUNBLOCKREQUEST_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

	};
}

