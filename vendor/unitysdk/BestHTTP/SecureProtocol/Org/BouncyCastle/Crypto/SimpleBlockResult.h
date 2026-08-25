#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ED420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x5ED450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x5ED470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_COLLECT_OFFSET UNITYSDK_OFFSET(0x5ED480)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int SimpleBlockResult_TypeDefinitionIndex = 22057;

	class SimpleBlockResult : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* result; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_GET_LENGTH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* Collect()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_COLLECT_OFFSET))(nullptr);
		}

		::System::Int32 Collect(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIMPLEBLOCKRESULT_COLLECT_OFFSET))(arg, arg, nullptr);
		}

	};
}

