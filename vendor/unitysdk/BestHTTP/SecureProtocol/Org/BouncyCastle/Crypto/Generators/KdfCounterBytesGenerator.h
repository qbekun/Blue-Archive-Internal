#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x6CCB80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GENERATENEXT_OFFSET UNITYSDK_OFFSET(0x6CCE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x6CD190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GENERATEBYTES_OFFSET UNITYSDK_OFFSET(0x6CD280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GETMAC_OFFSET UNITYSDK_OFFSET(0x6CD470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GET_DIGEST_OFFSET UNITYSDK_OFFSET(0x6CD480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6CD4D0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	inline static constexpr unsigned int KdfCounterBytesGenerator_TypeDefinitionIndex = 22471;

	class KdfCounterBytesGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* IntegerMax; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Two; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* prf; // 0x10
		::System::Int32 h; // 0x18
		::Il2CppArray<::System::Object*>* fixedInputDataCtrPrefix; // 0x20
		::Il2CppArray<::System::Object*>* fixedInputData_afterCtr; // 0x28
		::System::Int32 maxSizeExcl; // 0x30
		::Il2CppArray<::System::Object*>* ios; // 0x38
		::System::Int32 generatedBytes; // 0x40
		::Il2CppArray<::System::Object*>* k; // 0x48

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void generateNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GENERATENEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GenerateBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GENERATEBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* GetMac()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GETMAC_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* get_Digest()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_GET_DIGEST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_GENERATORS_KDFCOUNTERBYTESGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

