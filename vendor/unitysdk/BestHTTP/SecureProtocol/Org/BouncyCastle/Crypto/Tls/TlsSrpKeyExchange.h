#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpGroupVerifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class Srp6GroupParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp { class Srp6Client; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp { class Srp6Server; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSignerCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsSrpLoginParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ISigner; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SignatureAndHashAlgorithm; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class SecurityParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_CREATESIGNER_OFFSET UNITYSDK_OFFSET(0x65C4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x65C5A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x65C630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x65C710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x65C830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x65C8E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x65C940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x65CD40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x65CEB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x65CEC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x65D7F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x65DDB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x65DE00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x65DE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x65E020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET UNITYSDK_OFFSET(0x65E360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_INITVERIFYER_OFFSET UNITYSDK_OFFSET(0x65E4A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsSrpKeyExchange_TypeDefinitionIndex = 22236;

	class TlsSrpKeyExchange : public ::Mono::Math::BigInteger
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* mTlsSigner; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* mGroupVerifier; // 0x30
		::Il2CppArray<::System::Object*>* mIdentity; // 0x38
		::Il2CppArray<::System::Object*>* mPassword; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* mServerPublicKey; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* mSrpGroup; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client* mSrpClient; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server* mSrpServer; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mSrpPeerCredentials; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* mSrpVerifier; // 0x70
		::Il2CppArray<::System::Object*>* mSrpSalt; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials* mServerCredentials; // 0x80

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* CreateSigner(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_CREATESIGNER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Collections::IList* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Collections::IList*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SkipServerCredentials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_SKIPSERVERCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void ProcessServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessServerCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequiresServerKeyExchange()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GET_REQUIRESSERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateServerKeyExchange()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATESERVERKEYEXCHANGE_OFFSET))(nullptr);
		}

		::System::Void ProcessServerKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSSERVERKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateCertificateRequest(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_VALIDATECERTIFICATEREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSCLIENTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATECLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessClientKeyExchange(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_PROCESSCLIENTKEYEXCHANGE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GeneratePremasterSecret()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_GENERATEPREMASTERSECRET_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* InitVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsSigner*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SecurityParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSSRPKEYEXCHANGE_INITVERIFYER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

