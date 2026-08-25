#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSENCRYPTIONCREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F24B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsEncryptionCredentials_TypeDefinitionIndex = 22068;

	class AbstractTlsEncryptionCredentials : public ModulusRing
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSENCRYPTIONCREDENTIALS_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptPreMasterSecret(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSENCRYPTIONCREDENTIALS_DECRYPTPREMASTERSECRET_OFFSET))(arg, nullptr);
		}

	};
}

