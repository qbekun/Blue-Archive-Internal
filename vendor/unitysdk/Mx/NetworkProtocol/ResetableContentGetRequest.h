#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D700)
#define MX_NETWORKPROTOCOL_RESETABLECONTENTGETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D710)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ResetableContentGetRequest_TypeDefinitionIndex = 12055;

	class ResetableContentGetRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RESETABLECONTENTGETREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

