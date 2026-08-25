#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAF2C0)
#define SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AAF3D0)

namespace System::Net::Security
{
	inline static constexpr unsigned int LocalCertificateSelectionCallback_TypeDefinitionIndex = 29943;

	class LocalCertificateSelectionCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::System::Object* arg, ::System::String* str, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::System::Object*, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_LOCALCERTIFICATESELECTIONCALLBACK_INVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};
}

