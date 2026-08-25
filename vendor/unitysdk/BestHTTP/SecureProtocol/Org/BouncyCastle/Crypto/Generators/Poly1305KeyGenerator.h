#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class KeyGenerationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_ENGINEGENERATEKEY_OFFSET UNITYSDK_OFFSET(0x6D5680)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6D5730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CHECKMASK_OFFSET UNITYSDK_OFFSET(0x6D5740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CLAMP_OFFSET UNITYSDK_OFFSET(0x6D56A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_ENGINEINIT_OFFSET UNITYSDK_OFFSET(0x6D57B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CHECKKEY_OFFSET UNITYSDK_OFFSET(0x6D57F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int Poly1305KeyGenerator_TypeDefinitionIndex = 22481;

	class Poly1305KeyGenerator : public Il2CppObject
	{
	public:
		::System::Byte R_MASK_LOW_2; // 0x0
		::System::Byte R_MASK_HIGH_4; // 0x0

		::Il2CppArray<::System::Object*>* engineGenerateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_ENGINEGENERATEKEY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckMask(::System::Byte arg, ::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CHECKMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clamp(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CLAMP_OFFSET))(arg, nullptr);
		}

		::System::Void engineInit(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::KeyGenerationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_ENGINEINIT_OFFSET))(arg, nullptr);
		}

		::System::Void CheckKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_POLY1305KEYGENERATOR_CHECKKEY_OFFSET))(arg, nullptr);
		}

	};
}

