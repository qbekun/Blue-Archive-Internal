#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::X509 { class X509ChainStatusFlags; }

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509ChainStatusFlags_TypeDefinitionIndex = 35753;

	class X509ChainStatusFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Security::X509::X509ChainStatusFlags* InvalidBasicConstraints; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* NoError; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* NotSignatureValid; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* NotTimeNested; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* NotTimeValid; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* PartialChain; // 0x0
		::Mono::Security::X509::X509ChainStatusFlags* UntrustedRoot; // 0x0

	};
}

