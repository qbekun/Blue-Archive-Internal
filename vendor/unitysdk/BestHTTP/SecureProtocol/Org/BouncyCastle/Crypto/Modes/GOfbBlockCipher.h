#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6AA100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6AA110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_BYTESTOINT_OFFSET UNITYSDK_OFFSET(0x6AA3C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6AA430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6AA850)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6AA860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6AA920)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6AA930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_INTTOBYTES_OFFSET UNITYSDK_OFFSET(0x6AA7E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6AA2F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int GOfbBlockCipher_TypeDefinitionIndex = 22412;

	class GOfbBlockCipher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* IV; // 0x10
		::Il2CppArray<::System::Object*>* ofbV; // 0x18
		::Il2CppArray<::System::Object*>* ofbOutV; // 0x20
		::System::Int32 blockSize; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x30
		::System::Boolean firstStep; // 0x38
		::System::Int32 N3; // 0x3C
		::System::Int32 N4; // 0x40
		::System::Int32 C1; // 0x0
		::System::Int32 C2; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 bytesToint(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_BYTESTOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void intTobytes(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_INTTOBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_GOFBBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

	};
}

