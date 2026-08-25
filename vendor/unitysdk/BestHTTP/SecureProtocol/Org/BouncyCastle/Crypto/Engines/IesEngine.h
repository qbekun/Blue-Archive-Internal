#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBasicAgreement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationFunction; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class BufferedBlockCipher; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class IesParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KdfParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6FC9D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6FCAE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x6FCC10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_DECRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6FCD00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_ENCRYPTBLOCK_OFFSET UNITYSDK_OFFSET(0x6FD580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_GENERATEKDFBYTES_OFFSET UNITYSDK_OFFSET(0x6FD430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x6FDBE0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	inline static constexpr unsigned int IesEngine_TypeDefinitionIndex = 22509;

	class IesEngine : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* agree; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mac; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher; // 0x28
		::Il2CppArray<::System::Object*>* macBuf; // 0x30
		::System::Boolean forEncryption; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* privParam; // 0x40
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* pubParam; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::IesParameters* param; // 0x50

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBasicAgreement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::BufferedBlockCipher*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_DECRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* EncryptBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_ENCRYPTBLOCK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateKdfBytes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfParameters* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KdfParameters*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_GENERATEKDFBYTES_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessBlock(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_ENGINES_IESENGINE_PROCESSBLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

