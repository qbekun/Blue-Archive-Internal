#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SCALEXNEGATEYPOINTMAP_MAP_OFFSET UNITYSDK_OFFSET(0x542480)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SCALEXNEGATEYPOINTMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x5424C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int ScaleXNegateYPointMap_TypeDefinitionIndex = 21803;

	class ScaleXNegateYPointMap : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* scale; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Map(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SCALEXNEGATEYPOINTMAP_MAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SCALEXNEGATEYPOINTMAP_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

