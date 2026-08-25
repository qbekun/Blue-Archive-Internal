#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsEncryptionCredentials_TypeDefinitionIndex = 22205;

	class TlsEncryptionCredentials : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* DecryptPreMasterSecret(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET))(arg, nullptr);
		}

	};
}

