#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x6CE1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CE200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6CE4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GENERATENEXT_OFFSET UNITYSDK_OFFSET(0x6CE5E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GETMAC_OFFSET UNITYSDK_OFFSET(0x6CE990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x6CE9A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6CEB90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int KdfFeedbackBytesGenerator_TypeDefinitionIndex = 22473;

	class KdfFeedbackBytesGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* IntegerMax; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* prf; // 0x10
		::System::Int32 h; // 0x18
		::Il2CppArray<::System::Object*>* fixedInputData; // 0x20
		::System::Int32 maxSizeExcl; // 0x28
		::Il2CppArray<::System::Object*>* ios; // 0x30
		::Il2CppArray<::System::Object*>* iv; // 0x38
		::System::Boolean useCounter; // 0x40
		::System::Int32 generatedBytes; // 0x44
		::Il2CppArray<::System::Object*>* k; // 0x48

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void generateNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GENERATENEXT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* GetMac()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GETMAC_OFFSET))(nullptr);
		}

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFFEEDBACKBYTESGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

