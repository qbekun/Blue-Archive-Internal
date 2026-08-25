#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class NtlmFlags; }

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int NtlmFlags_TypeDefinitionIndex = 35783;

	class NtlmFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateUnicode; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateOem; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* RequestTarget; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateNtlm; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateDomainSupplied; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateWorkstationSupplied; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateAlwaysSign; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* NegotiateNtlm2Key; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* Negotiate128; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmFlags* Negotiate56; // 0x0

	};
}

