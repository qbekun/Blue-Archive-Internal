#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class AbstractF2mPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x539470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x5394F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SATISFIESCURVEEQUATION_OFFSET UNITYSDK_OFFSET(0x539520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SATISFIESORDER_OFFSET UNITYSDK_OFFSET(0x539A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEX_OFFSET UNITYSDK_OFFSET(0x539D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEXNEGATEY_OFFSET UNITYSDK_OFFSET(0x53A060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEY_OFFSET UNITYSDK_OFFSET(0x53A080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEYNEGATEX_OFFSET UNITYSDK_OFFSET(0x53A1F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x53A210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_TAU_OFFSET UNITYSDK_OFFSET(0x53A270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_TAUPOW_OFFSET UNITYSDK_OFFSET(0x53A530)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int AbstractF2mPoint_TypeDefinitionIndex = 21799;

	class AbstractF2mPoint : public Il2CppObject
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SatisfiesCurveEquation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SATISFIESCURVEEQUATION_OFFSET))(nullptr);
		}

		::System::Boolean SatisfiesOrder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SATISFIESORDER_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ScaleX(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEX_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ScaleXNegateY(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEXNEGATEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ScaleY(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ScaleYNegateX(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SCALEYNEGATEX_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Subtract(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_TAU_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* TauPow(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MPOINT_TAUPOW_OFFSET))(arg, nullptr);
		}

	};
}

