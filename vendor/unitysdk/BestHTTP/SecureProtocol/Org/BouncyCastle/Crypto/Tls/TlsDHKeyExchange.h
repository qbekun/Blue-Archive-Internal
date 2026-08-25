#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsDHVerifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsAgreementCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x622E60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x621F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x622F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x622FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x623010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x623490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x6234C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x623620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x623740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x623830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x623950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x623BD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x623C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x623CF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsDHKeyExchange_TypeDefinitionIndex = 22196;

	class TlsDHKeyExchange : public ::Mono::Math::BigInteger
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials* mAgreementCredentials; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey; // 0x58

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SkipServerCredentials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void ProcessServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresServerKeyExchange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateServerKeyExchange()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void ProcessServerKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateCertificateRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GeneratePremasterSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSDHKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET))(nullptr);
		}

	};
}

