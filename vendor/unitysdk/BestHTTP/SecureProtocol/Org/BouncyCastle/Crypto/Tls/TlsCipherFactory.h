#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class TlsContext; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHERFACTORY_CREATECIPHER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsCipherFactory_TypeDefinitionIndex = 22184;

	class TlsCipherFactory : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher* CreateCipher(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsCipher*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSCIPHERFACTORY_CREATECIPHER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

