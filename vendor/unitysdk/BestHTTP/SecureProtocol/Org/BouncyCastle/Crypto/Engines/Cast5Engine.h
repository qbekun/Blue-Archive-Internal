#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6E90A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6E90B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_CAST_DECIPHER_OFFSET UNITYSDK_OFFSET(0x6E93C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F2_OFFSET UNITYSDK_OFFSET(0x6E96C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F3_OFFSET UNITYSDK_OFFSET(0x6E9790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6E9860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6E9920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_BITS32TOINTS_OFFSET UNITYSDK_OFFSET(0x6E9AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6E9B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6E9BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_INTSTO32BITS_OFFSET UNITYSDK_OFFSET(0x6E9C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6E9C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x6E9F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_CAST_ENCIPHER_OFFSET UNITYSDK_OFFSET(0x6E9D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6EE480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F1_OFFSET UNITYSDK_OFFSET(0x6E95F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6EE4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6EE610)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int Cast5Engine_TypeDefinitionIndex = 22495;

	class Cast5Engine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* S1; // 0x0
		::Il2CppArray<::System::Object*>* S2; // 0x8
		::Il2CppArray<::System::Object*>* S3; // 0x10
		::Il2CppArray<::System::Object*>* S4; // 0x18
		::Il2CppArray<::System::Object*>* S5; // 0x20
		::Il2CppArray<::System::Object*>* S6; // 0x28
		::Il2CppArray<::System::Object*>* S7; // 0x30
		::Il2CppArray<::System::Object*>* S8; // 0x38
		::System::Int32 MAX_ROUNDS; // 0x40
		::System::Int32 RED_ROUNDS; // 0x44
		::System::Int32 BLOCK_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* _Kr; // 0x10
		::Il2CppArray<::System::Object*>* _Km; // 0x18
		::System::Boolean _encrypting; // 0x20
		::Il2CppArray<::System::Object*>* _workingKey; // 0x28
		::System::Int32 _rounds; // 0x30

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CAST_Decipher(::System::UInt32 arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_CAST_DECIPHER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 F2(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 F3(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Bits32ToInts(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_BITS32TOINTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_RESET_OFFSET))(nullptr);
		}

		::System::UInt32 IntsTo32bits(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_INTSTO32BITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void CAST_Encipher(::System::UInt32 arg, ::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_CAST_ENCIPHER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::UInt32 F1(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_F1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAST5ENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

	};
}

