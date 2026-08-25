#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsPskIdentity; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsPskIdentityManager; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsDHVerifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class DHPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPublicKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class RsaKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsEncryptionCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x633B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x633C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x633D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x633DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x633F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x6342D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x6345B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x6345E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x634780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x6347D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x634820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x635170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x635560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATEOTHERSECRET_OFFSET UNITYSDK_OFFSET(0x6356B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_VALIDATERSAPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x635890)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsPskKeyExchange_TypeDefinitionIndex = 22222;

	class TlsPskKeyExchange : public ::Mono::Math::BigInteger
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* mPskIdentity; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* mPskIdentityManager; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* mDHVerifier; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* mDHParameters; // 0x40
		::Il2CppArray<::System::Object*>* mNamedCurves; // 0x48
		::Il2CppArray<::System::Object*>* mClientECPointFormats; // 0x50
		::Il2CppArray<::System::Object*>* mServerECPointFormats; // 0x58
		::Il2CppArray<::System::Object*>* mPskIdentityHint; // 0x60
		::Il2CppArray<::System::Object*>* mPsk; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* mDHAgreePrivateKey; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters* mDHAgreePublicKey; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* mECAgreePrivateKey; // 0x80
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* mECAgreePublicKey; // 0x88
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* mRsaServerPublicKey; // 0x98
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials* mServerCredentials; // 0xA0
		::Il2CppArray<::System::Object*>* mPremasterSecret; // 0xA8

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentity*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SkipServerCredentials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void ProcessServerCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateServerKeyExchange()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void ProcessServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresServerKeyExchange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void ProcessServerKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateCertificateRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GeneratePremasterSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateOtherSecret(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_GENERATEOTHERSECRET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ValidateRsaPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSPSKKEYEXCHANGE_VALIDATERSAPUBLICKEY_OFFSET))(arg, nullptr);
		}

	};
}

