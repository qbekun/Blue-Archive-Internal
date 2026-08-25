#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDsa; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_CREATEDSAIMPL_OFFSET UNITYSDK_OFFSET(0x62ABA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_.CTOR_OFFSET UNITYSDK_OFFSET(0x62A180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x62AC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_ISVALIDPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x62AC70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int TlsECDsaSigner_TypeDefinitionIndex = 22204;

	class TlsECDsaSigner : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDsa* CreateDsaImpl(::System::Byte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDsa*(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_CREATEDSAIMPL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_.CTOR_OFFSET))(nullptr);
		}

		::System::Byte get_SignatureAlgorithm()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_GET_SIGNATUREALGORITHM_OFFSET))(nullptr);
		}

		::System::Boolean IsValidPublicKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_TLSECDSASIGNER_ISVALIDPUBLICKEY_OFFSET))(arg, nullptr);
		}

	};
}

