#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47240)
#define MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47250)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendCancelFriendRequestRequest_TypeDefinitionIndex = 11813;

	class FriendCancelFriendRequestRequest : public Il2CppObject
	{
	public:
		::System::Int64 TargetAccountId; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDCANCELFRIENDREQUESTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

