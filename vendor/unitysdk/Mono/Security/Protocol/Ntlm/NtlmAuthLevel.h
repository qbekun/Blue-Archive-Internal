#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class NtlmAuthLevel; }

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int NtlmAuthLevel_TypeDefinitionIndex = 35782;

	class NtlmAuthLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* LM_and_NTLM; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* LM_and_NTLM_and_try_NTLMv2_Session; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* NTLM_only; // 0x0
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* NTLMv2_only; // 0x0

	};
}

