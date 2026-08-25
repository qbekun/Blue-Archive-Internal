#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSAGREEMENTCREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F0CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSAGREEMENTCREDENTIALS_GENERATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int AbstractTlsAgreementCredentials_TypeDefinitionIndex = 22063;

	class AbstractTlsAgreementCredentials : public ModulusRing
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSAGREEMENTCREDENTIALS_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ABSTRACTTLSAGREEMENTCREDENTIALS_GENERATEAGREEMENT_OFFSET))(arg, nullptr);
		}

	};
}

