#pragma once
#include "../../unitysdk.h"

namespace Mono::Btls { class MonoBtlsX509StoreType; }

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsX509StoreType_TypeDefinitionIndex = 29146;

	class MonoBtlsX509StoreType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Btls::MonoBtlsX509StoreType* Custom; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* MachineTrustedRoots; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* MachineIntermediateCA; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* MachineUntrusted; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* UserTrustedRoots; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* UserIntermediateCA; // 0x0
		::Mono::Btls::MonoBtlsX509StoreType* UserUntrusted; // 0x0

	};
}

