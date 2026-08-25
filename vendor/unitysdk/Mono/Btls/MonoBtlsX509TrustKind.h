#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509TrustKind; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509TrustKind_TypeDefinitionIndex = 29147;

	class MonoBtlsX509TrustKind : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509TrustKind* DEFAULT; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* TRUST_CLIENT; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* TRUST_SERVER; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* TRUST_ALL; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* REJECT_CLIENT; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* REJECT_SERVER; // 0x0
		::Mono::Btls::MonoBtlsX509TrustKind* REJECT_ALL; // 0x0

	};
}

