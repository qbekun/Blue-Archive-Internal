#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_ICERTIFICATEPOLICY_CHECKVALIDATIONRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Net
{
	inline static constexpr unsigned int ICertificatePolicy_TypeDefinitionIndex = 29679;

	class ICertificatePolicy : public Il2CppObject
	{
	public:
		::System::Boolean CheckValidationResult(::System::Net::ServicePoint* arg, ::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Net::WebRequest* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Net::ServicePoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Net::WebRequest*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_ICERTIFICATEPOLICY_CHECKVALIDATIONRESULT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

