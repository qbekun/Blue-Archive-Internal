#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class FpPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x535DE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x52AE50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x52B440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_DETACH_OFFSET UNITYSDK_OFFSET(0x535E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_GETZCOORD_OFFSET UNITYSDK_OFFSET(0x535E90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_ADD_OFFSET UNITYSDK_OFFSET(0x535F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICE_OFFSET UNITYSDK_OFFSET(0x536D40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICEPLUS_OFFSET UNITYSDK_OFFSET(0x537970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_THREETIMES_OFFSET UNITYSDK_OFFSET(0x537EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TIMESPOW2_OFFSET UNITYSDK_OFFSET(0x5383A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWO_OFFSET UNITYSDK_OFFSET(0x538BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_THREE_OFFSET UNITYSDK_OFFSET(0x538C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_FOUR_OFFSET UNITYSDK_OFFSET(0x538C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_EIGHT_OFFSET UNITYSDK_OFFSET(0x538CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_DOUBLEPRODUCTFROMSQUARES_OFFSET UNITYSDK_OFFSET(0x538CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_NEGATE_OFFSET UNITYSDK_OFFSET(0x538D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_CALCULATEJACOBIANMODIFIEDW_OFFSET UNITYSDK_OFFSET(0x538EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_GETJACOBIANMODIFIEDW_OFFSET UNITYSDK_OFFSET(0x539030)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICEJACOBIANMODIFIED_OFFSET UNITYSDK_OFFSET(0x5390C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int FpPoint_TypeDefinitionIndex = 21798;

	class FpPoint : public ::Mono::Security::Cryptography::PKCS1
	{
	public:
		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Detach()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_DETACH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* GetZCoord(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_GETZCOORD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_ADD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Twice()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* TwicePlus(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICEPLUS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* ThreeTimes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_THREETIMES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* TimesPow2(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TIMESPOW2_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Two(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Three(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_THREE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Four(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_FOUR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Eight(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_EIGHT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* DoubleProductFromSquares(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_DOUBLEPRODUCTFROMSQUARES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Negate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_NEGATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* CalculateJacobianModifiedW(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_CALCULATEJACOBIANMODIFIEDW_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* GetJacobianModifiedW()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_GETJACOBIANMODIFIEDW_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::FpPoint* TwiceJacobianModified(::System::Boolean arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::FpPoint*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPPOINT_TWICEJACOBIANMODIFIED_OFFSET))(arg, nullptr);
		}

	};
}

