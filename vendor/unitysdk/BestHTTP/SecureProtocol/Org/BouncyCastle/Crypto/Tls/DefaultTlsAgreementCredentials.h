#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBasicAgreement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_GENERATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x5FA550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x5FA700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_.CTOR_OFFSET UNITYSDK_OFFSET(0x5FA710)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DefaultTlsAgreementCredentials_TypeDefinitionIndex = 22101;

	class DefaultTlsAgreementCredentials : public ::Mono::Security::Cryptography::RSAManaged
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mCertificate; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mPrivateKey; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* mBasicAgreement; // 0x20
		::System::Boolean mTruncateAgreement; // 0x28

		::Il2CppArray<::System::Object*>* GenerateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_GENERATEAGREEMENT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* get_Certificate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_GET_CERTIFICATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DEFAULTTLSAGREEMENTCREDENTIALS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

