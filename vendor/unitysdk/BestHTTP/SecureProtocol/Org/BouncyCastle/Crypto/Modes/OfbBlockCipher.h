#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6B0EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6B1120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x6B1320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET UNITYSDK_OFFSET(0x6B13F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x6B1400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6B1410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x6B14F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET UNITYSDK_OFFSET(0x6B16C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int OfbBlockCipher_TypeDefinitionIndex = 22418;

	class OfbBlockCipher : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* IV; // 0x10
		::Il2CppArray<::System::Object*>* ofbV; // 0x18
		::Il2CppArray<::System::Object*>* ofbOutV; // 0x20
		::System::Int32 blockSize; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x30

		::System::Int32 ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_PROCESSBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* GetUnderlyingCipher()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GETUNDERLYINGCIPHER_OFFSET))(nullptr);
		}

		::System::Int32 GetBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GETBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsPartialBlockOkay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_OFBBLOCKCIPHER_GET_ISPARTIALBLOCKOKAY_OFFSET))(nullptr);
		}

	};
}

