#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class BufferedBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_CREATECIPHER_OFFSET UNITYSDK_OFFSET(0x5EE2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5EE780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_CREATECONTENTCIPHER_OFFSET UNITYSDK_OFFSET(0x5EE810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x5EF090)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Utilities
{
	inline static constexpr unsigned int CipherFactory_TypeDefinitionIndex = 22060;

	class CipherFactory : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* rc2Ekb; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* CreateCipher(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_CREATECIPHER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Object* CreateContentCipher(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_CREATECONTENTCIPHER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_UTILITIES_CIPHERFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

