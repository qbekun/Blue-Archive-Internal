#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings { class IBlockCipherPadding; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x696AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x696BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_INIT_OFFSET UNITYSDK_OFFSET(0x696C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x696E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x696E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x696E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x696FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x697290)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings
{
	inline static constexpr unsigned int PaddedBufferedBlockCipher_TypeDefinitionIndex = 22382;

	class PaddedBufferedBlockCipher : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PADDINGS_PADDEDBUFFEREDBLOCKCIPHER_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

