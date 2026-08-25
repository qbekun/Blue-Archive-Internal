#pragma once
#include "../../unitysdk.h"

namespace Mono::Security::Protocol::Ntlm { class MessageBase; }

#define MONO_HTTP_NTLMSESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DACC0)
#define MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x96DACD0)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmSession_TypeDefinitionIndex = 29087;

	class NtlmSession : public Il2CppObject
	{
	public:
		::Mono::Security::Protocol::Ntlm::MessageBase* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Net::Authorization* Authenticate(::System::String* str, ::System::Net::WebRequest* arg, ::System::Net::ICredentials* arg)
		{
			return (return (::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMSESSION_AUTHENTICATE_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

