#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46FA0)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF46FB0)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46FC0)
#define MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF46FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendSendFriendRequestRequest_TypeDefinitionIndex = 11807;

	class FriendSendFriendRequestRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSENDFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

