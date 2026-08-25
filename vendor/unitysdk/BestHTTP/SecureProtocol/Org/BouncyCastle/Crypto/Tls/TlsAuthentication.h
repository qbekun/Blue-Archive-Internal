#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCredentials; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class CertificateRequest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAUTHENTICATION_NOTIFYSERVERCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAUTHENTICATION_GETCLIENTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsAuthentication_TypeDefinitionIndex = 22181;

	class TlsAuthentication : public Il2CppObject
	{
	public:
		::System::Void NotifyServerCertificate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAUTHENTICATION_NOTIFYSERVERCERTIFICATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials* GetClientCredentials(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCredentials*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::CertificateRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSAUTHENTICATION_GETCLIENTCREDENTIALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

