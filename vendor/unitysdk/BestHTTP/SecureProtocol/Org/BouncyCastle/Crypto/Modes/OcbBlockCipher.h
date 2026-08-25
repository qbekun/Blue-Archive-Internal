#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6AE7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6AEC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6AEC20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6AECE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSNONCE_OFFSET UNITYSDK_OFFSET(0x6AF5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6AF960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETMAC_OFFSET UNITYSDK_OFFSET(0x6AF970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6AF9F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6AFA20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSAADBYTE_OFFSET UNITYSDK_OFFSET(0x6AFA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSAADBYTES_OFFSET UNITYSDK_OFFSET(0x6AFAA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x6AFB50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6AFBC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6AFCA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6B0380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_CLEAR_OFFSET UNITYSDK_OFFSET(0x6B03A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETLSUB_OFFSET UNITYSDK_OFFSET(0x6B03C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSHASHBLOCK_OFFSET UNITYSDK_OFFSET(0x6B0740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSMAINBLOCK_OFFSET UNITYSDK_OFFSET(0x6B07F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6B09F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_UPDATEHASH_OFFSET UNITYSDK_OFFSET(0x6B0C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_DOUBLE_OFFSET UNITYSDK_OFFSET(0x6AF550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_EXTEND_OFFSET UNITYSDK_OFFSET(0x6B01C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_NTZ_OFFSET UNITYSDK_OFFSET(0x6B07B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_SHIFTLEFT_OFFSET UNITYSDK_OFFSET(0x6B0CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_XOR_OFFSET UNITYSDK_OFFSET(0x6B0220)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int OcbBlockCipher_TypeDefinitionIndex = 22417;

	class OcbBlockCipher : public Il2CppObject
	{
	public:
		::System::Int32 BLOCK_SIZE; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* hashCipher; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mainCipher; // 0x18
		::System::Boolean forEncryption; // 0x20
		::System::Int32 macSize; // 0x24
		::Il2CppArray<::System::Object*>* initialAssociatedText; // 0x28
		::System::Collections::IList* L; // 0x30
		::Il2CppArray<::System::Object*>* L_Asterisk; // 0x38
		::Il2CppArray<::System::Object*>* L_Dollar; // 0x40
		::Il2CppArray<::System::Object*>* KtopInput; // 0x48
		::Il2CppArray<::System::Object*>* Stretch; // 0x50
		::Il2CppArray<::System::Object*>* OffsetMAIN_0; // 0x58
		::Il2CppArray<::System::Object*>* hashBlock; // 0x60
		::Il2CppArray<::System::Object*>* mainBlock; // 0x68
		::System::Int32 hashBlockPos; // 0x70
		::System::Int32 mainBlockPos; // 0x74
		::System::Int64 hashBlockCount; // 0x78
		::System::Int64 mainBlockCount; // 0x80
		::Il2CppArray<::System::Object*>* OffsetHASH; // 0x88
		::Il2CppArray<::System::Object*>* Sum; // 0x90
		::Il2CppArray<::System::Object*>* OffsetMAIN; // 0x98
		::Il2CppArray<::System::Object*>* Checksum; // 0xA0
		::Il2CppArray<::System::Object*>* macBlock; // 0xA8

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ProcessNonce(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSNONCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETMAC_OFFSET))(nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSAADBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSAADBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::System::Void Clear(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_CLEAR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetLSub(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_GETLSUB_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHashBlock()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSHASHBLOCK_OFFSET))(nullptr);
		}

		::System::Void ProcessMainBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_PROCESSMAINBLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateHASH(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_UPDATEHASH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* OCB_double(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_DOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Void OCB_extend(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_EXTEND_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 OCB_ntz(::System::Int64 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_OCB_NTZ_OFFSET))(arg, nullptr);
		}

		::System::Int32 ShiftLeft(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_SHIFTLEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Xor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OCBBLOCKCIPHER_XOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

