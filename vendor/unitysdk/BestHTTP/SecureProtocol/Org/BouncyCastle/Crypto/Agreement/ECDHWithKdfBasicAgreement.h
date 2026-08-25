#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDerivationFunction; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_BIGINTTOBYTES_OFFSET UNITYSDK_OFFSET(0x77C5B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_CALCULATEAGREEMENT_OFFSET UNITYSDK_OFFSET(0x77C5F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x77C8F0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement
{
	inline static constexpr unsigned int ECDHWithKdfBasicAgreement_TypeDefinitionIndex = 22625;

	class ECDHWithKdfBasicAgreement : public Il2CppObject
	{
	public:
		::System::String* algorithm; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* kdf; // 0x20

		::Il2CppArray<::System::Object*>* BigIntToBytes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_BIGINTTOBYTES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateAgreement(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_CALCULATEAGREEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDerivationFunction*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_ECDHWITHKDFBASICAGREEMENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

