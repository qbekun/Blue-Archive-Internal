#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_ZSIGNEDDIGITR2LMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x5618A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_ZSIGNEDDIGITR2LMULTIPLIER_MULTIPLYPOSITIVE_OFFSET UNITYSDK_OFFSET(0x5618B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int ZSignedDigitR2LMultiplier_TypeDefinitionIndex = 21848;

	class ZSignedDigitR2LMultiplier : public ::Mono::Security::Interface::TlsException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_ZSIGNEDDIGITR2LMULTIPLIER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_ZSIGNEDDIGITR2LMULTIPLIER_MULTIPLYPOSITIVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

