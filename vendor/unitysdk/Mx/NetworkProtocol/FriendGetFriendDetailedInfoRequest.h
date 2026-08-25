#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_GET_FRIENDACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF46A30)
#define MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46A40)
#define MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_SET_FRIENDACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF46A50)
#define MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46A60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendGetFriendDetailedInfoRequest_TypeDefinitionIndex = 11799;

	class FriendGetFriendDetailedInfoRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FriendAccountId_k__BackingField; // 0x40

		::System::Int64 get_FriendAccountId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_GET_FRIENDACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_FriendAccountId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_SET_FRIENDACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDGETFRIENDDETAILEDINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

