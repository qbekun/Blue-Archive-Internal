#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x71B660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x71B910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x71BBD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x71C040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x71C080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_SETTWEAK_OFFSET UNITYSDK_OFFSET(0x71C1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x71C340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x71C3A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x71C3B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x71C3C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x71C3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x71C5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_BYTESTOWORD_OFFSET UNITYSDK_OFFSET(0x71BF00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_WORDTOBYTES_OFFSET UNITYSDK_OFFSET(0x71C6F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_ROTLXOR_OFFSET UNITYSDK_OFFSET(0x71C820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_XORROTR_OFFSET UNITYSDK_OFFSET(0x71C830)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int ThreefishEngine_TypeDefinitionIndex = 22540;

	class ThreefishEngine : public Il2CppObject
	{
	public:
		::System::Int32 BLOCKSIZE_256; // 0x0
		::System::Int32 BLOCKSIZE_512; // 0x0
		::System::Int32 BLOCKSIZE_1024; // 0x0
		::System::Int32 TWEAK_SIZE_BYTES; // 0x0
		::System::Int32 TWEAK_SIZE_WORDS; // 0x0
		::System::Int32 ROUNDS_256; // 0x0
		::System::Int32 ROUNDS_512; // 0x0
		::System::Int32 ROUNDS_1024; // 0x0
		::System::Int32 MAX_ROUNDS; // 0x0
		::System::UInt64 C_240; // 0x0
		::Il2CppArray<::System::Object*>* MOD9; // 0x0
		::Il2CppArray<::System::Object*>* MOD17; // 0x8
		::Il2CppArray<::System::Object*>* MOD5; // 0x10
		::Il2CppArray<::System::Object*>* MOD3; // 0x18
		::System::Int32 blocksizeBytes; // 0x10
		::System::Int32 blocksizeWords; // 0x14
		::Il2CppArray<::System::Object*>* currentBlock; // 0x18
		::Il2CppArray<::System::Object*>* t; // 0x20
		::Il2CppArray<::System::Object*>* kw; // 0x28
		ThreefishCipher* cipher; // 0x30
		::System::Boolean forEncryption; // 0x38

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetTweak(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_SETTWEAK_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_PROCESSBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 BytesToWord(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_BYTESTOWORD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WordToBytes(::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_WORDTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 RotlXor(::System::UInt64 arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_ROTLXOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 XorRotr(::System::UInt64 arg, ::System::Int32 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::Int32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_THREEFISHENGINE_XORROTR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

