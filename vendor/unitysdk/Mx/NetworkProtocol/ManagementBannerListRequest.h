#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47EC0)
#define MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47ED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ManagementBannerListRequest_TypeDefinitionIndex = 11847;

	class ManagementBannerListRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MANAGEMENTBANNERLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

