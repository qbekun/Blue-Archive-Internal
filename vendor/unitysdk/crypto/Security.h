#pragma once
#include "../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBufferedCipher; }

#define CRYPTO_SECURITY_CREATECIPHER_OFFSET UNITYSDK_OFFSET(0x4D4D20)
#define CRYPTO_SECURITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D4F40)
#define CRYPTO_SECURITY_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x4D4F50)
#define CRYPTO_SECURITY_DECRYPT_OFFSET UNITYSDK_OFFSET(0x4D5040)
#define CRYPTO_SECURITY_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x4D5140)
#define CRYPTO_SECURITY_GENERATETEXT_OFFSET UNITYSDK_OFFSET(0x4D52B0)

namespace crypto
{
	inline static constexpr unsigned int Security_TypeDefinitionIndex = 21281;

	class Security : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher* CreateCipher(::System::Boolean arg, ::System::String* str, ::System::String* str)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBufferedCipher*(*)(::System::Boolean, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_CREATECIPHER_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_.CTOR_OFFSET))(nullptr);
		}

		::System::String* Encrypt(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_ENCRYPT_OFFSET))(str, str, str, nullptr);
		}

		::System::String* Decrypt(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_DECRYPT_OFFSET))(str, str, str, nullptr);
		}

		::System::String* ComputeHash(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_COMPUTEHASH_OFFSET))(str, str, nullptr);
		}

		::System::String* GenerateText(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CRYPTO_SECURITY_GENERATETEXT_OFFSET))(arg, nullptr);
		}

	};
}

