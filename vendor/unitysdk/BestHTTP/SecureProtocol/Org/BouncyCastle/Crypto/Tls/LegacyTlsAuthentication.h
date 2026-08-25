#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ICertificateVerifyer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class IClientCredentialsProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_GETCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x610D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x610DF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_NOTIFYSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x610E50)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int LegacyTlsAuthentication_TypeDefinitionIndex = 22146;

	class LegacyTlsAuthentication : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* credProvider; // 0x18
		::System::Uri* TargetUri; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_GETCLIENTCREDENTIALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void NotifyServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSAUTHENTICATION_NOTIFYSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

	};
}

