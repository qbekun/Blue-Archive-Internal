#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_SETNB_OFFSET UNITYSDK_OFFSET(0x6AABE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6AAC50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6AAC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6AB210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6AB5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6AB690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6AB730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAADBYTE_OFFSET UNITYSDK_OFFSET(0x6AB740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAADBYTES_OFFSET UNITYSDK_OFFSET(0x6AB770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAAD_OFFSET UNITYSDK_OFFSET(0x6AB7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x6AC420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6AC450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSPACKET_OFFSET UNITYSDK_OFFSET(0x6AC4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6AD4E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_CALCULATEMAC_OFFSET UNITYSDK_OFFSET(0x6AD1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6AD810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETMAC_OFFSET UNITYSDK_OFFSET(0x6AD8A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6AD8F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6AD900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6AD910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_INTTOBYTES_OFFSET UNITYSDK_OFFSET(0x6AC190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETFLAG_OFFSET UNITYSDK_OFFSET(0x6AC200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6ADA10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int KCcmBlockCipher_TypeDefinitionIndex = 22415;

	class KCcmBlockCipher : public Il2CppObject
	{
	public:
		::System::Int32 BYTES_IN_INT; // 0x0
		::System::Int32 BITS_IN_BYTE; // 0x4
		::System::Int32 MAX_MAC_BIT_LENGTH; // 0x8
		::System::Int32 MIN_MAC_BIT_LENGTH; // 0xC
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine; // 0x10
		::System::Int32 macSize; // 0x18
		::System::Boolean forEncryption; // 0x1C
		::Il2CppArray<::System::Object*>* initialAssociatedText; // 0x20
		::Il2CppArray<::System::Object*>* mac; // 0x28
		::Il2CppArray<::System::Object*>* macBlock; // 0x30
		::Il2CppArray<::System::Object*>* nonce; // 0x38
		::Il2CppArray<::System::Object*>* G1; // 0x40
		::Il2CppArray<::System::Object*>* buffer; // 0x48
		::Il2CppArray<::System::Object*>* s; // 0x50
		::Il2CppArray<::System::Object*>* counter; // 0x58
		::System::IO::MemoryStream* associatedText; // 0x60
		::System::IO::MemoryStream* data; // 0x68
		::System::Int32 Nb_; // 0x70

		::System::Void setNb(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_SETNB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::Void ProcessAadByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAADBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAADBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessAAD(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSAAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessPacket(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSPACKET_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CalculateMac(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_CALCULATEMAC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETMAC_OFFSET))(nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::System::Void intToBytes(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_INTTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Byte getFlag(::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_GETFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_KCCMBLOCKCIPHER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

