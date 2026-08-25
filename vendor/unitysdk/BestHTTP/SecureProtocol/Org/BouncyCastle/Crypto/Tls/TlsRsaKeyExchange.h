#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class RsaKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsEncryptionCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x635910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x635940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x635950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x635A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x635CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x635D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_VALIDATERSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x635E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x635EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x635F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x635F90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsRsaKeyExchange_TypeDefinitionIndex = 22223;

	class TlsRsaKeyExchange : public ::Mono::Math::BigInteger
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials; // 0x38
		::Il2CppArray<::System::Object*>* mPremasterSecret; // 0x40

		::System::Void GenerateClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateCertificateRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipServerCredentials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void ProcessClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_VALIDATERSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GeneratePremasterSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET))(nullptr);
		}

		::System::Void ProcessClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessServerCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSRSAKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET))(arg, nullptr);
		}

	};
}

