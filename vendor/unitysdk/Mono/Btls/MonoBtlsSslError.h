#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsSslError; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsSslError_TypeDefinitionIndex = 29120;

	class MonoBtlsSslError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsSslError* None; // 0x0
		::Mono::Btls::MonoBtlsSslError* Ssl; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantRead; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantWrite; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantX509Lookup; // 0x0
		::Mono::Btls::MonoBtlsSslError* Syscall; // 0x0
		::Mono::Btls::MonoBtlsSslError* ZeroReturn; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantConnect; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantAccept; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantChannelIdLookup; // 0x0
		::Mono::Btls::MonoBtlsSslError* PendingSession; // 0x0
		::Mono::Btls::MonoBtlsSslError* PendingCertificate; // 0x0
		::Mono::Btls::MonoBtlsSslError* WantPrivateKeyOperation; // 0x0

	};
}

