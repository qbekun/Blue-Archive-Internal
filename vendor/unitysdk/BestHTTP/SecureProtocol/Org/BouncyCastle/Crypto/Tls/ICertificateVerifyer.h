#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ICERTIFICATEVERIFYER_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ICertificateVerifyer_TypeDefinitionIndex = 22143;

	class ICertificateVerifyer : public Il2CppObject
	{
	public:
		::System::Boolean IsValid(::System::Uri* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ICERTIFICATEVERIFYER_ISVALID_OFFSET))(arg, arg, nullptr);
		}

	};
}

