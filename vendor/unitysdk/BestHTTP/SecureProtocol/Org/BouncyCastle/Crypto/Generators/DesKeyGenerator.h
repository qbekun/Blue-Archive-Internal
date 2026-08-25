#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C52C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C52E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_ENGINEINIT_OFFSET UNITYSDK_OFFSET(0x6C5610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_ENGINEGENERATEKEY_OFFSET UNITYSDK_OFFSET(0x6C56D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int DesKeyGenerator_TypeDefinitionIndex = 22453;

	class DesKeyGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void engineInit(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_ENGINEINIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* engineGenerateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESKEYGENERATOR_ENGINEGENERATEKEY_OFFSET))(nullptr);
		}

	};
}

