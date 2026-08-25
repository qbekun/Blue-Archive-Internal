#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x725E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RS_MDS_ENCODE_OFFSET UNITYSDK_OFFSET(0x725F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RS_REM_OFFSET UNITYSDK_OFFSET(0x726260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x7262D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x726B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_SETKEY_OFFSET UNITYSDK_OFFSET(0x726B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_FE32_3_OFFSET UNITYSDK_OFFSET(0x727AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_MX_Y_OFFSET UNITYSDK_OFFSET(0x727B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B2_OFFSET UNITYSDK_OFFSET(0x727AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x726400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x727D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B0_OFFSET UNITYSDK_OFFSET(0x727A90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_FE32_0_OFFSET UNITYSDK_OFFSET(0x727C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x727D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x727D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_LFSR1_OFFSET UNITYSDK_OFFSET(0x727BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_LFSR2_OFFSET UNITYSDK_OFFSET(0x727BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_MX_X_OFFSET UNITYSDK_OFFSET(0x727D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B3_OFFSET UNITYSDK_OFFSET(0x727AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_BITS32TOBYTES_OFFSET UNITYSDK_OFFSET(0x727CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_BYTESTO32BITS_OFFSET UNITYSDK_OFFSET(0x727550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_F32_OFFSET UNITYSDK_OFFSET(0x7275C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x726790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B1_OFFSET UNITYSDK_OFFSET(0x727AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x727DD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x728310)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int TwofishEngine_TypeDefinitionIndex = 22542;

	class TwofishEngine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* P; // 0x0
		::System::Int32 P_00; // 0x0
		::System::Int32 P_01; // 0x0
		::System::Int32 P_02; // 0x0
		::System::Int32 P_03; // 0x0
		::System::Int32 P_04; // 0x0
		::System::Int32 P_10; // 0x0
		::System::Int32 P_11; // 0x0
		::System::Int32 P_12; // 0x0
		::System::Int32 P_13; // 0x0
		::System::Int32 P_14; // 0x0
		::System::Int32 P_20; // 0x0
		::System::Int32 P_21; // 0x0
		::System::Int32 P_22; // 0x0
		::System::Int32 P_23; // 0x0
		::System::Int32 P_24; // 0x0
		::System::Int32 P_30; // 0x0
		::System::Int32 P_31; // 0x0
		::System::Int32 P_32; // 0x0
		::System::Int32 P_33; // 0x0
		::System::Int32 P_34; // 0x0
		::System::Int32 GF256_FDBK; // 0x0
		::System::Int32 GF256_FDBK_2; // 0x0
		::System::Int32 GF256_FDBK_4; // 0x0
		::System::Int32 RS_GF_FDBK; // 0x0
		::System::Int32 ROUNDS; // 0x0
		::System::Int32 MAX_ROUNDS; // 0x0
		::System::Int32 BLOCK_SIZE; // 0x0
		::System::Int32 MAX_KEY_BITS; // 0x0
		::System::Int32 INPUT_WHITEN; // 0x0
		::System::Int32 OUTPUT_WHITEN; // 0x0
		::System::Int32 ROUND_SUBKEYS; // 0x0
		::System::Int32 TOTAL_SUBKEYS; // 0x0
		::System::Int32 SK_STEP; // 0x0
		::System::Int32 SK_BUMP; // 0x0
		::System::Int32 SK_ROTL; // 0x0
		::System::Boolean encrypting; // 0x10
		::Il2CppArray<::System::Object*>* gMDS0; // 0x18
		::Il2CppArray<::System::Object*>* gMDS1; // 0x20
		::Il2CppArray<::System::Object*>* gMDS2; // 0x28
		::Il2CppArray<::System::Object*>* gMDS3; // 0x30
		::Il2CppArray<::System::Object*>* gSubKeys; // 0x38
		::Il2CppArray<::System::Object*>* gSBox; // 0x40
		::System::Int32 k64Cnt; // 0x48
		::Il2CppArray<::System::Object*>* workingKey; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 RS_MDS_Encode(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RS_MDS_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 RS_rem(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RS_REM_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void SetKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Fe32_3(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_FE32_3_OFFSET))(arg, nullptr);
		}

		::System::Int32 Mx_Y(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_MX_Y_OFFSET))(arg, nullptr);
		}

		::System::Int32 M_b2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B2_OFFSET))(arg, nullptr);
		}

		::System::Void EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Int32 M_b0(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B0_OFFSET))(arg, nullptr);
		}

		::System::Int32 Fe32_0(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_FE32_0_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_RESET_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 LFSR1(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_LFSR1_OFFSET))(arg, nullptr);
		}

		::System::Int32 LFSR2(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_LFSR2_OFFSET))(arg, nullptr);
		}

		::System::Int32 Mx_X(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_MX_X_OFFSET))(arg, nullptr);
		}

		::System::Int32 M_b3(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B3_OFFSET))(arg, nullptr);
		}

		::System::Void Bits32ToBytes(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_BITS32TOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 BytesTo32Bits(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_BYTESTO32BITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 F32(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_F32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 M_b1(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_M_B1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_TWOFISHENGINE_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

