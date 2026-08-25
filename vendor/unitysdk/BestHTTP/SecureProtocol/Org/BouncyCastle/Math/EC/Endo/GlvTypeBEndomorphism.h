#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class GlvTypeBParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPointMap; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_DECOMPOSESCALAR_OFFSET UNITYSDK_OFFSET(0x5622A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_.CTOR_OFFSET UNITYSDK_OFFSET(0x562310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_GET_POINTMAP_OFFSET UNITYSDK_OFFSET(0x5623D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_GET_HASEFFICIENTPOINTMAP_OFFSET UNITYSDK_OFFSET(0x5623E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int GlvTypeBEndomorphism_TypeDefinitionIndex = 21856;

	class GlvTypeBEndomorphism : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* m_parameters; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap; // 0x18

		::Il2CppArray<::System::Object*>* DecomposeScalar(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_DECOMPOSESCALAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_GET_POINTMAP_OFFSET))(nullptr);
		}

		::System::Boolean get_HasEfficientPointMap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEBENDOMORPHISM_GET_HASEFFICIENTPOINTMAP_OFFSET))(nullptr);
		}

	};
}

