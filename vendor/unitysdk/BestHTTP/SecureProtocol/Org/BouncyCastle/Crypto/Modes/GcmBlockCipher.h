#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm { class IGcmExponentiator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6A5600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6A57B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6A5870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6A5880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6A5890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETMAC_OFFSET UNITYSDK_OFFSET(0x6A76F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A7770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A77A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSAADBYTE_OFFSET UNITYSDK_OFFSET(0x6A77C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSAADBYTES_OFFSET UNITYSDK_OFFSET(0x6A75C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_INITCIPHER_OFFSET UNITYSDK_OFFSET(0x6A7900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x6A7AB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6A7DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6A7B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6A8BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6A9B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6A9890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSPARTIAL_OFFSET UNITYSDK_OFFSET(0x6A9390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASH_OFFSET UNITYSDK_OFFSET(0x6A74C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHBLOCK_OFFSET UNITYSDK_OFFSET(0x6A7560)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHBLOCK_OFFSET UNITYSDK_OFFSET(0x6A9BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHPARTIAL_OFFSET UNITYSDK_OFFSET(0x6A79D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETNEXTCTRBLOCK_OFFSET UNITYSDK_OFFSET(0x6A8A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_CHECKSTATUS_OFFSET UNITYSDK_OFFSET(0x6A7880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_TABLES8KGCMMULTIPLIER_INIT_OFFSET UNITYSDK_OFFSET(0x6A6220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_TABLES8KGCMMULTIPLIER_MULTIPLYH_OFFSET UNITYSDK_OFFSET(0x6A8870)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int GcmBlockCipher_TypeDefinitionIndex = 22411;

	class GcmBlockCipher : public Il2CppObject
	{
	public:
		::System::Int32 BlockSize; // 0x0
		::Il2CppArray<::System::Object*>* ctrBlock; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator* exp; // 0x20
		::System::Boolean forEncryption; // 0x28
		::System::Boolean initialised; // 0x29
		::System::Int32 macSize; // 0x2C
		::Il2CppArray<::System::Object*>* lastKey; // 0x30
		::Il2CppArray<::System::Object*>* nonce; // 0x38
		::Il2CppArray<::System::Object*>* initialAssociatedText; // 0x40
		::Il2CppArray<::System::Object*>* H; // 0x48
		::Il2CppArray<::System::Object*>* J0; // 0x50
		::System::Int32 bufLength; // 0x58
		::Il2CppArray<::System::Object*>* bufBlock; // 0x60
		::Il2CppArray<::System::Object*>* macBlock; // 0x68
		::Il2CppArray<::System::Object*>* S; // 0x70
		::Il2CppArray<::System::Object*>* S_at; // 0x78
		::Il2CppArray<::System::Object*>* S_atPre; // 0x80
		::Il2CppArray<::System::Object*>* counter; // 0x88
		::System::UInt32 blocksRemaining; // 0x90
		::System::Int32 bufOff; // 0x94
		::System::UInt64 totalLength; // 0x98
		::Il2CppArray<::System::Object*>* atBlock; // 0xA0
		::System::Int32 atBlockPos; // 0xA8
		::System::UInt64 atLength; // 0xB0
		::System::UInt64 atLengthPre; // 0xB8
		::Il2CppArray<::System::Object*>* Tables8kGcmMultiplier_H; // 0xC0
		::Il2CppArray<::System::Object*>* Tables8kGcmMultiplier_M; // 0xC8
		::Il2CppArray<::System::Object*>* Tables8kGcmMultiplier_z; // 0xD0

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETMAC_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSAADBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSAADBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitCipher()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_INITCIPHER_OFFSET))(nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::System::Void Reset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPartial(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_PROCESSPARTIAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void gHASH(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void gHASHBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void gHASHBlock(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void gHASHPartial(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GHASHPARTIAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetNextCtrBlock(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_GETNEXTCTRBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void CheckStatus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_CHECKSTATUS_OFFSET))(nullptr);
		}

		::System::Void Tables8kGcmMultiplier_Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_TABLES8KGCMMULTIPLIER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Tables8kGcmMultiplier_MultiplyH(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GCMBLOCKCIPHER_TABLES8KGCMMULTIPLIER_MULTIPLYH_OFFSET))(arg, nullptr);
		}

	};
}

