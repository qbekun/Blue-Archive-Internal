#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPrivateKeyParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x77C1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_GETFIELDSIZE_OFFSET UNITYSDK_OFFSET(0x77C1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x77C240)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x77C4A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int ECDHCBasicAgreement_TypeDefinitionIndex = 22624;

	class ECDHCBasicAgreement : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* privKey; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetFieldSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_GETFIELDSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_CALCULATEAGREEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHCBASICAGREEMENT_INIT_OFFSET))(arg, nullptr);
		}

	};
}

