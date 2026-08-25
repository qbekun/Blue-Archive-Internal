#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509LookupType; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509LookupType_TypeDefinitionIndex = 29137;

	class MonoBtlsX509LookupType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509LookupType* UNKNOWN; // 0x0
		::Mono::Btls::MonoBtlsX509LookupType* FILE; // 0x0
		::Mono::Btls::MonoBtlsX509LookupType* HASH_DIR; // 0x0
		::Mono::Btls::MonoBtlsX509LookupType* MONO; // 0x0

	};
}

