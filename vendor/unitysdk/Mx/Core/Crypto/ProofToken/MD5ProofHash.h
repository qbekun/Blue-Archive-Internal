#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_CALCULATE_OFFSET UNITYSDK_OFFSET(0x10871C0)
#define MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_.CTOR_OFFSET UNITYSDK_OFFSET(0x1087680)
#define MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1087690)
#define MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1087740)
#define MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_LEFTROTATE_OFFSET UNITYSDK_OFFSET(0x1087670)

namespace MX::Core::Crypto::ProofToken
{
	inline static constexpr unsigned int MD5ProofHash_TypeDefinitionIndex = 12911;

	class MD5ProofHash : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s; // 0x0
		::Il2CppArray<::System::Object*>* K; // 0x8

		::Il2CppArray<::System::Object*>* Calculate(::Il2CppArray<::System::Object*>* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_CALCULATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_.CTOR_OFFSET))(nullptr);
		}

		::System::String* Evaluate(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_EVALUATE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_.CCTOR_OFFSET))(nullptr);
		}

		::System::UInt32 LeftRotate(::System::UInt32 arg, ::System::Int32 arg2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_PROOFTOKEN_MD5PROOFHASH_LEFTROTATE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

