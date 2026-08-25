#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C4D0)
#define MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x910C5A0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoLocalCertificateSelectionCallback_TypeDefinitionIndex = 35797;

	class MonoLocalCertificateSelectionCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOLOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

