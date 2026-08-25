#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF47080)
#define MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47090)
#define MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF470A0)
#define MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF470B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendAcceptFriendRequestRequest_TypeDefinitionIndex = 11809;

	class FriendAcceptFriendRequestRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x40

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDACCEPTFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

