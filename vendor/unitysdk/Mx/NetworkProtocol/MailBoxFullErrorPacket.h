#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11B20)
#define MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11B30)
#define MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xF11B40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailBoxFullErrorPacket_TypeDefinitionIndex = 11328;

	class MailBoxFullErrorPacket : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* get_ErrorCode()
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILBOXFULLERRORPACKET_GET_ERRORCODE_OFFSET))(nullptr);
		}

	};
}

