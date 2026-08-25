#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x7813D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x781A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x781B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x781C20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Kdf
{
	inline static constexpr unsigned int ConcatenationKdfGenerator_TypeDefinitionIndex = 22636;

	class ConcatenationKdfGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mDigest; // 0x10
		::Il2CppArray<::System::Object*>* mShared; // 0x18
		::Il2CppArray<::System::Object*>* mOtherInfo; // 0x20
		::System::Int32 mHLen; // 0x28

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_CONCATENATIONKDFGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

	};
}

