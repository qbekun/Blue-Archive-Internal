#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDREMOVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46970)
#define MX_NETWORKPROTOCOL_FRIENDREMOVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46980)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendRemoveRequest_TypeDefinitionIndex = 11797;

	class FriendRemoveRequest : public Il2CppObject
	{
	public:
		::System::Int64 TargetAccountId; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDREMOVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDREMOVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

