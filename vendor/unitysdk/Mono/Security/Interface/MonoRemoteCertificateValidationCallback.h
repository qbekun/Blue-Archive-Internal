#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Interface { class MonoSslPolicyErrors; }

#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C3D0)
#define MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x910C4A0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoRemoteCertificateValidationCallback_TypeDefinitionIndex = 35796;

	class MonoRemoteCertificateValidationCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::Mono::Security::Interface::MonoSslPolicyErrors* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOREMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

