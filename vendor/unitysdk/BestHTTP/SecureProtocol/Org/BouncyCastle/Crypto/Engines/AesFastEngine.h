#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6DA4C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6DB2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6DB2D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_UNPACKBLOCK_OFFSET UNITYSDK_OFFSET(0x6DB2E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_INV_MCOL_OFFSET UNITYSDK_OFFSET(0x6DB320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6DB420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_SHIFT_OFFSET UNITYSDK_OFFSET(0x6DB3C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6DB430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x6DB460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_PACKBLOCK_OFFSET UNITYSDK_OFFSET(0x6DB470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_FFMULX2_OFFSET UNITYSDK_OFFSET(0x6DB3F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_SUBWORD_OFFSET UNITYSDK_OFFSET(0x6DB4B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6DB5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GENERATEWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x6DB9C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_FFMULX_OFFSET UNITYSDK_OFFSET(0x6DB3D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6DCC80)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int AesFastEngine_TypeDefinitionIndex = 22488;

	class AesFastEngine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* S; // 0x0
		::Il2CppArray<::System::Object*>* Si; // 0x8
		::Il2CppArray<::System::Object*>* rcon; // 0x10
		::Il2CppArray<::System::Object*>* T0; // 0x18
		::Il2CppArray<::System::Object*>* T1; // 0x20
		::Il2CppArray<::System::Object*>* T2; // 0x28
		::Il2CppArray<::System::Object*>* T3; // 0x30
		::Il2CppArray<::System::Object*>* Tinv0; // 0x38
		::Il2CppArray<::System::Object*>* Tinv1; // 0x40
		::Il2CppArray<::System::Object*>* Tinv2; // 0x48
		::Il2CppArray<::System::Object*>* Tinv3; // 0x50
		::System::UInt32 m1; // 0x0
		::System::UInt32 m2; // 0x0
		::System::UInt32 m3; // 0x0
		::System::UInt32 m4; // 0x0
		::System::UInt32 m5; // 0x0
		::System::Int32 ROUNDS; // 0x10
		::Il2CppArray<::System::Object*>* WorkingKey; // 0x18
		::System::UInt32 C0; // 0x20
		::System::UInt32 C1; // 0x24
		::System::UInt32 C2; // 0x28
		::System::UInt32 C3; // 0x2C
		::System::Boolean forEncryption; // 0x30
		::System::Int32 BLOCK_SIZE; // 0x0

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Void UnPackBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_UNPACKBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Inv_Mcol(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_INV_MCOL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::UInt32 Shift(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_SHIFT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void PackBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_PACKBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 FFmulX2(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_FFMULX2_OFFSET))(arg, nullptr);
		}

		::System::UInt32 SubWord(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_SUBWORD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateWorkingKey(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_GENERATEWORKINGKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 FFmulX(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_FFMULX_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_AESFASTENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

