#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_CRYPTO_XORCRYPTOR_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1083380)
#define MX_CORE_CRYPTO_XORCRYPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1083620)

namespace MX::Core::Crypto
{
	inline static constexpr unsigned int XORCryptor_TypeDefinitionIndex = 12909;

	class XORCryptor : public Il2CppObject
	{
	public:
		::System::UInt32 ENCRYPTION_KEY; // 0x10

		::System::Boolean Encrypt(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_XORCRYPTOR_ENCRYPT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_CRYPTO_XORCRYPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

