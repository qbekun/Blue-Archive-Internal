#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_SMIX_OFFSET UNITYSDK_OFFSET(0x6D65D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_XOR_OFFSET UNITYSDK_OFFSET(0x6D6A00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_SINGLEITERATIONPBKDF2_OFFSET UNITYSDK_OFFSET(0x6D6A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_MFCRYPT_OFFSET UNITYSDK_OFFSET(0x6D6BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_CLEAR_OFFSET UNITYSDK_OFFSET(0x6D6D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_ISPOWEROF2_OFFSET UNITYSDK_OFFSET(0x6D6DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6D6DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_CLEARALL_OFFSET UNITYSDK_OFFSET(0x6D6DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_GENERATE_OFFSET UNITYSDK_OFFSET(0x6D6E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_BLOCKMIX_OFFSET UNITYSDK_OFFSET(0x6D68E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int SCrypt_TypeDefinitionIndex = 22484;

	class SCrypt : public Il2CppObject
	{
	public:
		::System::Void SMix(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_SMIX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Xor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_XOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SingleIterationPBKDF2(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_SINGLEITERATIONPBKDF2_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* MFcrypt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_MFCRYPT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPowerOf2(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_ISPOWEROF2_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ClearAll(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_CLEARALL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_GENERATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BlockMix(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_SCRYPT_BLOCKMIX_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

