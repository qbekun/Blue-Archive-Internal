#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47160)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF47170)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47180)
#define MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF47190)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendDeclineFriendRequestRequest_TypeDefinitionIndex = 11811;

	class FriendDeclineFriendRequestRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetAccountId_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TargetAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDDECLINEFRIENDREQUESTREQUEST_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

	};
}

