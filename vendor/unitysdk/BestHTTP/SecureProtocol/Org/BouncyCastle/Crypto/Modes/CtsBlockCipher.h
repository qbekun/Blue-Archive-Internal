#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockCipher; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6A3110)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6A3470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A3AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6A3B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x6A3CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A3E10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int CtsBlockCipher_TypeDefinitionIndex = 22408;

	class CtsBlockCipher : public Il2CppObject
	{
	public:
		::System::Int32 blockSize; // 0x28

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CTSBLOCKCIPHER_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

	};
}

