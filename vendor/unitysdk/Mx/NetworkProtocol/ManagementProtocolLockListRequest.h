#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47F90)
#define MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47FA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ManagementProtocolLockListRequest_TypeDefinitionIndex = 11849;

	class ManagementProtocolLockListRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTPROTOCOLLOCKLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

