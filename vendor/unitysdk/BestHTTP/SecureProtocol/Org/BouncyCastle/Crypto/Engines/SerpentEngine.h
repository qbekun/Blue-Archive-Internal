#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x7105B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_MAKEWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x712C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x714B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x714BF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int SerpentEngine_TypeDefinitionIndex = 22530;

	class SerpentEngine : public Il2CppObject
	{
	public:
		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MakeWorkingKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_MAKEWORKINGKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SERPENTENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

