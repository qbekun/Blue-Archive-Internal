#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509Format; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509Format_TypeDefinitionIndex = 29130;

	class MonoBtlsX509Format : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509Format* DER; // 0x0
		::Mono::Btls::MonoBtlsX509Format* PEM; // 0x0

	};
}

