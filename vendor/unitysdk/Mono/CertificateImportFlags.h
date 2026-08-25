#pragma once
#include "../unitysdk.h"

namespace Mono { class CertificateImportFlags; }

namespace Mono
{
	inline static constexpr unsigned int CertificateImportFlags_TypeDefinitionIndex = 23565;

	class CertificateImportFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::CertificateImportFlags* None; // 0x0
		::Mono::CertificateImportFlags* DisableNativeBackend; // 0x0
		::Mono::CertificateImportFlags* DisableAutomaticFallback; // 0x0

	};
}

