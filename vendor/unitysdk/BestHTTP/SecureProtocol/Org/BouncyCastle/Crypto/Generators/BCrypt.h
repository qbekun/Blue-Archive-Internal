#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PROCESSTABLE_OFFSET UNITYSDK_OFFSET(0x6C3B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_CYCLICXORKEY_OFFSET UNITYSDK_OFFSET(0x6C3DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PROCESSTABLEWITHSALT_OFFSET UNITYSDK_OFFSET(0x6C3ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_INITSTATE_OFFSET UNITYSDK_OFFSET(0x6C4270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_DERIVERAWKEY_OFFSET UNITYSDK_OFFSET(0x6C43B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_GENERATE_OFFSET UNITYSDK_OFFSET(0x6C4D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6C5010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C4F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PASSWORDTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x6C5250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_F_OFFSET UNITYSDK_OFFSET(0x6C3D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_ENCRYPTMAGICSTRING_OFFSET UNITYSDK_OFFSET(0x6C4700)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int BCrypt_TypeDefinitionIndex = 22451;

	class BCrypt : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* MAGIC_STRING; // 0x0
		::System::Int32 MAGIC_STRING_LENGTH; // 0x0
		::Il2CppArray<::System::Object*>* KP; // 0x8
		::Il2CppArray<::System::Object*>* KS0; // 0x10
		::Il2CppArray<::System::Object*>* KS1; // 0x18
		::Il2CppArray<::System::Object*>* KS2; // 0x20
		::Il2CppArray<::System::Object*>* KS3; // 0x28
		::System::Int32 ROUNDS; // 0x0
		::System::Int32 SBOX_SK; // 0x0
		::System::Int32 SBOX_SK2; // 0x0
		::System::Int32 SBOX_SK3; // 0x0
		::System::Int32 P_SZ; // 0x0
		::Il2CppArray<::System::Object*>* S; // 0x10
		::Il2CppArray<::System::Object*>* P; // 0x18
		::System::Int32 SALT_SIZE_BYTES; // 0x0
		::System::Int32 MIN_COST; // 0x0
		::System::Int32 MAX_COST; // 0x0
		::System::Int32 MAX_PASSWORD_BYTES; // 0x0

		::System::Void ProcessTable(::System::UInt32 arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PROCESSTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CyclicXorKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_CYCLICXORKEY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessTableWithSalt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PROCESSTABLEWITHSALT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_INITSTATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DeriveRawKey(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_DERIVERAWKEY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Generate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_GENERATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* PasswordToByteArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_PASSWORDTOBYTEARRAY_OFFSET))(arg, nullptr);
		}

		::System::UInt32 F(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_F_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptMagicString()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_BCRYPT_ENCRYPTMAGICSTRING_OFFSET))(nullptr);
		}

	};
}

