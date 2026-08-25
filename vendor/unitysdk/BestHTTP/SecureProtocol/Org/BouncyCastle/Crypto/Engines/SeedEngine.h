#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_ROTATERIGHT8_OFFSET UNITYSDK_OFFSET(0x70FA10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_ROTATELEFT8_OFFSET UNITYSDK_OFFSET(0x70FA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_F_OFFSET UNITYSDK_OFFSET(0x70FA30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_EXTRACTW1_OFFSET UNITYSDK_OFFSET(0x70FB00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x70FB10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x70FB20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x70FD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PHASECALC2_OFFSET UNITYSDK_OFFSET(0x70FA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PHASECALC1_OFFSET UNITYSDK_OFFSET(0x70FAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_BYTESTOLONG_OFFSET UNITYSDK_OFFSET(0x70FE00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_LONGTOBYTES_OFFSET UNITYSDK_OFFSET(0x70FE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x70FF00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_G_OFFSET UNITYSDK_OFFSET(0x70FD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_CREATEWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x70FF30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x710180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x710490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x710530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x710540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_EXTRACTW0_OFFSET UNITYSDK_OFFSET(0x710170)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int SeedEngine_TypeDefinitionIndex = 22528;

	class SeedEngine : public Il2CppObject
	{
	public:
		::System::Int32 BlockSize; // 0x0
		::Il2CppArray<::System::Object*>* SS0; // 0x0
		::Il2CppArray<::System::Object*>* SS1; // 0x8
		::Il2CppArray<::System::Object*>* SS2; // 0x10
		::Il2CppArray<::System::Object*>* SS3; // 0x18
		::Il2CppArray<::System::Object*>* KC; // 0x20
		::Il2CppArray<::System::Object*>* wKey; // 0x10
		::System::Boolean forEncryption; // 0x18

		::System::Int64 rotateRight8(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_ROTATERIGHT8_OFFSET))(arg, nullptr);
		}

		::System::Int64 rotateLeft8(::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_ROTATELEFT8_OFFSET))(arg, nullptr);
		}

		::System::Int64 F(::System::Int32 arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_F_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 extractW1(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_EXTRACTW1_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 phaseCalc2(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PHASECALC2_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 phaseCalc1(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PHASECALC1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int64 bytesToLong(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_BYTESTOLONG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void longToBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_LONGTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 G(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_G_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* createWorkingKey(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_CREATEWORKINGKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 extractW0(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_SEEDENGINE_EXTRACTW0_OFFSET))(arg, nullptr);
		}

	};
}

