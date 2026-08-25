#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ED4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x5ED660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_RESET_OFFSET UNITYSDK_OFFSET(0x5ED700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_RETURNBYTE_OFFSET UNITYSDK_OFFSET(0x5ED7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x5ED8A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x5EDA10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int StreamBlockCipher_TypeDefinitionIndex = 22058;

	class StreamBlockCipher : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher; // 0x10
		::Il2CppArray<::System::Object*>* oneByte; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_RESET_OFFSET))(nullptr);
		}

		::System::Byte ReturnByte(::System::Byte arg)
		{
			return (return (::System::Byte(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_RETURNBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_STREAMBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

	};
}

