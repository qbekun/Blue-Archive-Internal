#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47B00)
#define MX_NETWORKPROTOCOL_MAILCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailCheckRequest_TypeDefinitionIndex = 11839;

	class MailCheckRequest : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

