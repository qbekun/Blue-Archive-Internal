#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class FpFieldElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_CALCULATERESIDUE_OFFSET UNITYSDK_OFFSET(0x52AD20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x52EC90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x52B270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_TOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x52ECD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x52ECE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_FIELDSIZE_OFFSET UNITYSDK_OFFSET(0x52ED10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_Q_OFFSET UNITYSDK_OFFSET(0x52ED30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_ADD_OFFSET UNITYSDK_OFFSET(0x52ED40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_ADDONE_OFFSET UNITYSDK_OFFSET(0x52EDF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x52EF00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x52EFB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLYMINUSPRODUCT_OFFSET UNITYSDK_OFFSET(0x52F060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLYPLUSPRODUCT_OFFSET UNITYSDK_OFFSET(0x52F190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_DIVIDE_OFFSET UNITYSDK_OFFSET(0x52F340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_NEGATE_OFFSET UNITYSDK_OFFSET(0x52F410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUARE_OFFSET UNITYSDK_OFFSET(0x52F4A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUAREMINUSPRODUCT_OFFSET UNITYSDK_OFFSET(0x52F530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUAREPLUSPRODUCT_OFFSET UNITYSDK_OFFSET(0x52F640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_INVERT_OFFSET UNITYSDK_OFFSET(0x52F7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQRT_OFFSET UNITYSDK_OFFSET(0x52F860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_CHECKSQRT_OFFSET UNITYSDK_OFFSET(0x52FFA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_LUCASSEQUENCE_OFFSET UNITYSDK_OFFSET(0x530000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODADD_OFFSET UNITYSDK_OFFSET(0x530590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODDOUBLE_OFFSET UNITYSDK_OFFSET(0x5305F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODHALF_OFFSET UNITYSDK_OFFSET(0x530660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODHALFABS_OFFSET UNITYSDK_OFFSET(0x5306C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x530720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODMULT_OFFSET UNITYSDK_OFFSET(0x5307E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODREDUCE_OFFSET UNITYSDK_OFFSET(0x530820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODSUBTRACT_OFFSET UNITYSDK_OFFSET(0x530BB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x530C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x530CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x530D40)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int FpFieldElement_TypeDefinitionIndex = 21790;

	class FpFieldElement : public ::Mono::Security::Cryptography::MD4Managed
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* q; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* r; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* CalculateResidue(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_CALCULATERESIDUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_TOBIGINTEGER_OFFSET))(nullptr);
		}

		::System::String* get_FieldName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_FIELDNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_FieldSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_FIELDSIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Q()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GET_Q_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_ADD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_ADDONE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLYMINUSPRODUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MULTIPLYPLUSPRODUCT_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_DIVIDE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Negate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_NEGATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Square()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUARE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUAREMINUSPRODUCT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQUAREPLUSPRODUCT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Invert()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_INVERT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_SQRT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* CheckSqrt(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_CHECKSQRT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* LucasSequence(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_LUCASSEQUENCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModAdd(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODADD_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModDouble(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODDOUBLE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModHalf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODHALF_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModHalfAbs(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODHALFABS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModInverse(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODINVERSE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModMult(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODMULT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModReduce(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODREDUCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ModSubtract(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_MODSUBTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::FpFieldElement* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::FpFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_FPFIELDELEMENT_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

