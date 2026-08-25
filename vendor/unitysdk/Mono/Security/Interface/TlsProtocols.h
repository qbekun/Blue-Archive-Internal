#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class TlsProtocols; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsProtocols_TypeDefinitionIndex = 35803;

	class TlsProtocols : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Security::Interface::TlsProtocols* Zero; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls10Client; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls10Server; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls10; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls11Client; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls11Server; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls11; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls12Client; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls12Server; // 0x0
		::Mono::Security::Interface::TlsProtocols* Tls12; // 0x0
		::Mono::Security::Interface::TlsProtocols* ClientMask; // 0x0
		::Mono::Security::Interface::TlsProtocols* ServerMask; // 0x0

	};
}

