#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationFunction; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x782540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x7825C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x782660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x7829B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Kdf
{
	inline static constexpr unsigned int ECDHKekGenerator_TypeDefinitionIndex = 22639;

	class ECDHKekGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm; // 0x18
		::System::Int32 keySize; // 0x20
		::Il2CppArray<::System::Object*>* z; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_ECDHKEKGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

	};
}

