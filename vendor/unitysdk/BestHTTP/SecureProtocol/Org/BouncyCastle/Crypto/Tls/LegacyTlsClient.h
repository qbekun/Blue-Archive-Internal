#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ICertificateVerifyer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class IClientCredentialsProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsAuthentication; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x610F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSCLIENT_GETAUTHENTICATION_OFFSET UNITYSDK_OFFSET(0x611000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int LegacyTlsClient_TypeDefinitionIndex = 22147;

	class LegacyTlsClient : public Il2CppObject
	{
	public:
		::System::Uri* TargetUri; // 0x88
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* verifyer; // 0x90
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* credProvider; // 0x98

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSCLIENT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* GetAuthentication()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_LEGACYTLSCLIENT_GETAUTHENTICATION_OFFSET))(nullptr);
		}

	};
}

