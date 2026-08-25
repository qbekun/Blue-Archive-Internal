#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509FileType; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509FileType_TypeDefinitionIndex = 29129;

	class MonoBtlsX509FileType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509FileType* PEM; // 0x0
		::Mono::Btls::MonoBtlsX509FileType* ASN1; // 0x0
		::Mono::Btls::MonoBtlsX509FileType* DEFAULT; // 0x0

	};
}

