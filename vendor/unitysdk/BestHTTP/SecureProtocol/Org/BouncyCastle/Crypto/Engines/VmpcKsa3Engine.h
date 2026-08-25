#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_INITKEY_OFFSET UNITYSDK_OFFSET(0x728C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x728F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x728F30)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int VmpcKsa3Engine_TypeDefinitionIndex = 22544;

	class VmpcKsa3Engine : public Il2CppObject
	{
	public:
		::System::Void InitKey(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_INITKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_VMPCKSA3ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

	};
}

