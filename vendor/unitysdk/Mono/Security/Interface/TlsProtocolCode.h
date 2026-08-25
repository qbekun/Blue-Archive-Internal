#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class TlsProtocolCode; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int TlsProtocolCode_TypeDefinitionIndex = 35802;

	class TlsProtocolCode : public Il2CppObject
	{
	public:
		::System::Int16 value__; // 0x10
		::Mono::Security::Interface::TlsProtocolCode* Tls10; // 0x0
		::Mono::Security::Interface::TlsProtocolCode* Tls11; // 0x0
		::Mono::Security::Interface::TlsProtocolCode* Tls12; // 0x0

	};
}

