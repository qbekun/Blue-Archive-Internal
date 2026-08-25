#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6E1F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_ROLDQ_OFFSET UNITYSDK_OFFSET(0x6E1F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6E2120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6E3890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_CAMELLIAFLS_OFFSET UNITYSDK_OFFSET(0x6E38C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK192OR256_OFFSET UNITYSDK_OFFSET(0x6E39E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6E4430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_UINT2BYTES_OFFSET UNITYSDK_OFFSET(0x6E43D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_LEFTROTATE_OFFSET UNITYSDK_OFFSET(0x6E39C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_RIGHTROTATE_OFFSET UNITYSDK_OFFSET(0x6E4B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_DECROLDQ_OFFSET UNITYSDK_OFFSET(0x6E4B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6E4DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_BYTES2UINT_OFFSET UNITYSDK_OFFSET(0x6E4030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6E4DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6E4DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x6E21F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_ROLDQO32_OFFSET UNITYSDK_OFFSET(0x6E4E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_CAMELLIAF2_OFFSET UNITYSDK_OFFSET(0x6E4090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK128_OFFSET UNITYSDK_OFFSET(0x6E4560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6E52A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_DECROLDQO32_OFFSET UNITYSDK_OFFSET(0x6E5090)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int CamelliaEngine_TypeDefinitionIndex = 22492;

	class CamelliaEngine : public Il2CppObject
	{
	public:
		::System::Boolean initialised; // 0x10
		::System::Boolean _keyIs128; // 0x11
		::System::Int32 BLOCK_SIZE; // 0x0
		::Il2CppArray<::System::Object*>* subkey; // 0x18
		::Il2CppArray<::System::Object*>* kw; // 0x20
		::Il2CppArray<::System::Object*>* ke; // 0x28
		::Il2CppArray<::System::Object*>* state; // 0x30
		::Il2CppArray<::System::Object*>* SIGMA; // 0x0
		::Il2CppArray<::System::Object*>* SBOX1_1110; // 0x8
		::Il2CppArray<::System::Object*>* SBOX4_4404; // 0x10
		::Il2CppArray<::System::Object*>* SBOX2_0222; // 0x18
		::Il2CppArray<::System::Object*>* SBOX3_3033; // 0x20

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void roldq(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_ROLDQ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void camelliaFLs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_CAMELLIAFLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 processBlock192or256(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK192OR256_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void uint2bytes(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_UINT2BYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 leftRotate(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_LEFTROTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 rightRotate(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_RIGHTROTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void decroldq(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_DECROLDQ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::UInt32 bytes2uint(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_BYTES2UINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void setKey(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_SETKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void roldqo32(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_ROLDQO32_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void camelliaF2(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_CAMELLIAF2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 processBlock128(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_PROCESSBLOCK128_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void decroldqo32(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIAENGINE_DECROLDQO32_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

