#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_REFERENCEMULTIPLIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x55D4D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_REFERENCEMULTIPLIER_MULTIPLYPOSITIVE_OFFSET UNITYSDK_OFFSET(0x55D4E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int ReferenceMultiplier_TypeDefinitionIndex = 21835;

	class ReferenceMultiplier : public ::Mono::Security::Interface::TlsException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_REFERENCEMULTIPLIER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_REFERENCEMULTIPLIER_MULTIPLYPOSITIVE_OFFSET))(arg, arg, nullptr);
		}

	};
}

