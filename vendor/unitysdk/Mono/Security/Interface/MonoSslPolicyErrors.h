#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoSslPolicyErrors; }

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoSslPolicyErrors_TypeDefinitionIndex = 35795;

	class MonoSslPolicyErrors : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Security::Interface::MonoSslPolicyErrors* None; // 0x0
		::Mono::Security::Interface::MonoSslPolicyErrors* RemoteCertificateNotAvailable; // 0x0
		::Mono::Security::Interface::MonoSslPolicyErrors* RemoteCertificateNameMismatch; // 0x0
		::Mono::Security::Interface::MonoSslPolicyErrors* RemoteCertificateChainErrors; // 0x0

	};
}

