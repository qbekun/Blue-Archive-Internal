#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C52B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C52D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_ENGINEINIT_OFFSET UNITYSDK_OFFSET(0x6C52F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_ENGINEGENERATEKEY_OFFSET UNITYSDK_OFFSET(0x6C5500)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int DesEdeKeyGenerator_TypeDefinitionIndex = 22452;

	class DesEdeKeyGenerator : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void engineInit(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_ENGINEINIT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* engineGenerateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_DESEDEKEYGENERATOR_ENGINEGENERATEKEY_OFFSET))(nullptr);
		}

	};
}

