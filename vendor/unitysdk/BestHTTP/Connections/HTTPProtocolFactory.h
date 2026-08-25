#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::Connections { class SupportedProtocols; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_GET_OFFSET UNITYSDK_OFFSET(0x8FED40)
#define BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_ISSECUREPROTOCOL_OFFSET UNITYSDK_OFFSET(0x902480)
#define BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_GETPROTOCOLFROMURI_OFFSET UNITYSDK_OFFSET(0x8FEBF0)

namespace BestHTTP::Connections
{
	inline static constexpr unsigned int HTTPProtocolFactory_TypeDefinitionIndex = 23424;

	class HTTPProtocolFactory : public Il2CppObject
	{
	public:
		::System::String* W3C_HTTP1; // 0x0
		::System::String* W3C_HTTP2; // 0x0

		::BestHTTP::HTTPResponse* Get(::BestHTTP::Connections::SupportedProtocols* arg, ::BestHTTP::HTTPRequest* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::BestHTTP::Connections::SupportedProtocols*, ::BestHTTP::HTTPRequest*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_GET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsSecureProtocol(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_ISSECUREPROTOCOL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::SupportedProtocols* GetProtocolFromUri(::System::Uri* arg)
		{
			return (return (::BestHTTP::Connections::SupportedProtocols*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTPPROTOCOLFACTORY_GETPROTOCOLFROMURI_OFFSET))(arg, nullptr);
		}

	};
}

