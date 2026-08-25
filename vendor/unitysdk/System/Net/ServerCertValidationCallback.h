#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A66980)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_GET_VALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A66A00)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9A66A10)
#define SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A66AB0)

namespace System::Net
{
	inline static constexpr unsigned int ServerCertValidationCallback_TypeDefinitionIndex = 29754;

	class ServerCertValidationCallback : public Il2CppObject
	{
	public:
		::System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback; // 0x10
		::System::Threading::ExecutionContext* m_Context; // 0x18

		::System::Void .ctor(::System::Net::Security::RemoteCertificateValidationCallback* arg)
		{
			((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::Security::RemoteCertificateValidationCallback* get_ValidationCallback()
		{
			return (return (::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_GET_VALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void Callback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean Invoke(::System::Object* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVERCERTVALIDATIONCALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

