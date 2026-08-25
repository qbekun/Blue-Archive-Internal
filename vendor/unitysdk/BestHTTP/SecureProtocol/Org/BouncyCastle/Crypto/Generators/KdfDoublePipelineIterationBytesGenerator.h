#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x6CD580)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GETMAC_OFFSET UNITYSDK_OFFSET(0x6CDCA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CDCB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x6CDFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6CDFF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6CE0A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GENERATENEXT_OFFSET UNITYSDK_OFFSET(0x6CD770)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int KdfDoublePipelineIterationBytesGenerator_TypeDefinitionIndex = 22472;

	class KdfDoublePipelineIterationBytesGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* IntegerMax; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* prf; // 0x10
		::System::Int32 h; // 0x18
		::Il2CppArray<::System::Object*>* fixedInputData; // 0x20
		::System::Int32 maxSizeExcl; // 0x28
		::Il2CppArray<::System::Object*>* ios; // 0x30
		::System::Boolean useCounter; // 0x38
		::System::Int32 generatedBytes; // 0x3C
		::Il2CppArray<::System::Object*>* a; // 0x40
		::Il2CppArray<::System::Object*>* k; // 0x48

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* GetMac()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GETMAC_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void generateNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFDOUBLEPIPELINEITERATIONBYTESGENERATOR_GENERATENEXT_OFFSET))(nullptr);
		}

	};
}

