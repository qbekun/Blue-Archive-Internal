#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsSslRenegotiateMode; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsSslRenegotiateMode_TypeDefinitionIndex = 29121;

	class MonoBtlsSslRenegotiateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsSslRenegotiateMode* NEVER; // 0x0
		::Mono::Btls::MonoBtlsSslRenegotiateMode* ONCE; // 0x0
		::Mono::Btls::MonoBtlsSslRenegotiateMode* FREELY; // 0x0
		::Mono::Btls::MonoBtlsSslRenegotiateMode* IGNORE; // 0x0

	};
}

