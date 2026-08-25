#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class GlvTypeAParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPointMap; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_.CTOR_OFFSET UNITYSDK_OFFSET(0x5620C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_GET_HASEFFICIENTPOINTMAP_OFFSET UNITYSDK_OFFSET(0x562180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_GET_POINTMAP_OFFSET UNITYSDK_OFFSET(0x562190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_DECOMPOSESCALAR_OFFSET UNITYSDK_OFFSET(0x5621A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo
{
	inline static constexpr unsigned int GlvTypeAEndomorphism_TypeDefinitionIndex = 21854;

	class GlvTypeAEndomorphism : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* m_parameters; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasEfficientPointMap()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_GET_HASEFFICIENTPOINTMAP_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_GET_POINTMAP_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* DecomposeScalar(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ENDO_GLVTYPEAENDOMORPHISM_DECOMPOSESCALAR_OFFSET))(arg, nullptr);
		}

	};
}

