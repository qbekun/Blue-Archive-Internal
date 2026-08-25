#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_ENCRYPTBYTE_OFFSET UNITYSDK_OFFSET(0x6B16D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6B1700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6B1E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6B2550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6B2620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6B1E30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6B2630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6B2640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B27F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6B2920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6B29C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int OpenPgpCfbBlockCipher_TypeDefinitionIndex = 22419;

	class OpenPgpCfbBlockCipher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* IV; // 0x10
		::Il2CppArray<::System::Object*>* FR; // 0x18
		::Il2CppArray<::System::Object*>* FRE; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x28
		::System::Int32 blockSize; // 0x30
		::System::Int32 count; // 0x34
		::System::Boolean forEncryption; // 0x38

		::System::Byte EncryptByte(::System::Byte arg, ::System::Int32 arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_ENCRYPTBYTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Int32 DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OPENPGPCFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

	};
}

