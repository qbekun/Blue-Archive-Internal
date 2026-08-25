#pragma once
#include "../../../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class NtlmAuthLevel; }

#define MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_GET_DEFAULTAUTHLEVEL_OFFSET UNITYSDK_OFFSET(0x910A7E0)
#define MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x910A830)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int NtlmSettings_TypeDefinitionIndex = 35784;

	class NtlmSettings : public Il2CppObject
	{
	public:
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* defaultAuthLevel; // 0x0

		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel* get_DefaultAuthLevel()
		{
			return (return (::Mono::Security::Protocol::Ntlm::NtlmAuthLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_GET_DEFAULTAUTHLEVEL_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_NTLMSETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

