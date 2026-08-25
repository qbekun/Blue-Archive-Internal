#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x6E5490)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK128_OFFSET UNITYSDK_OFFSET(0x6E7C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_LEFTROTATE_OFFSET UNITYSDK_OFFSET(0x6E83A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX2_OFFSET UNITYSDK_OFFSET(0x6E83C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_ROLDQO32_OFFSET UNITYSDK_OFFSET(0x6E7600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6E8480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_ROLDQ_OFFSET UNITYSDK_OFFSET(0x6E73F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_RIGHTROTATE_OFFSET UNITYSDK_OFFSET(0x6E84B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6E84D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK192OR256_OFFSET UNITYSDK_OFFSET(0x6E84E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6E8B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6E8C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6E8CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6E8E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX4_OFFSET UNITYSDK_OFFSET(0x6E8E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_LROT8_OFFSET UNITYSDK_OFFSET(0x6E8460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_CAMELLIAFLS_OFFSET UNITYSDK_OFFSET(0x6E8240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_UINT2BYTES_OFFSET UNITYSDK_OFFSET(0x6E8340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX3_OFFSET UNITYSDK_OFFSET(0x6E8EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6E8F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_BYTES2UINT_OFFSET UNITYSDK_OFFSET(0x6E6B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_CAMELLIAF2_OFFSET UNITYSDK_OFFSET(0x6E6B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_DECROLDQO32_OFFSET UNITYSDK_OFFSET(0x6E7A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_DECROLDQ_OFFSET UNITYSDK_OFFSET(0x6E7810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6E8F70)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int CamelliaLightEngine_TypeDefinitionIndex = 22493;

	class CamelliaLightEngine : public Il2CppObject
	{
	public:
		::System::Int32 BLOCK_SIZE; // 0x0
		::System::Boolean initialised; // 0x10
		::System::Boolean _keyis128; // 0x11
		::Il2CppArray<::System::Object*>* subkey; // 0x18
		::Il2CppArray<::System::Object*>* kw; // 0x20
		::Il2CppArray<::System::Object*>* ke; // 0x28
		::Il2CppArray<::System::Object*>* state; // 0x30
		::Il2CppArray<::System::Object*>* SIGMA; // 0x0
		::Il2CppArray<::System::Object*>* SBOX1; // 0x8

		::System::Void setKey(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SETKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 processBlock128(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK128_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 leftRotate(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_LEFTROTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 sbox2(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX2_OFFSET))(arg, nullptr);
		}

		::System::Void roldqo32(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_ROLDQO32_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void roldq(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_ROLDQ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 rightRotate(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_RIGHTROTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Int32 processBlock192or256(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK192OR256_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::UInt32 sbox4(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX4_OFFSET))(arg, nullptr);
		}

		::System::Byte lRot8(::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_LROT8_OFFSET))(arg, arg, nullptr);
		}

		::System::Void camelliaFLs(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_CAMELLIAFLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void uint2bytes(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_UINT2BYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 sbox3(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_SBOX3_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_RESET_OFFSET))(nullptr);
		}

		::System::UInt32 bytes2uint(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_BYTES2UINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void camelliaF2(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_CAMELLIAF2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void decroldqo32(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_DECROLDQO32_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void decroldq(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_DECROLDQ_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_CAMELLIALIGHTENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

