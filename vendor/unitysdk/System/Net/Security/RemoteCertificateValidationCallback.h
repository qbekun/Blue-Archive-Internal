#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AAF400)
#define SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AAF510)

namespace System::Net::Security
{
	inline static constexpr unsigned int RemoteCertificateValidationCallback_TypeDefinitionIndex = 29944;

	class RemoteCertificateValidationCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Object* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg, ::System::Net::Security::SslPolicyErrors* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_REMOTECERTIFICATEVALIDATIONCALLBACK_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

