#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IFiniteField; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IPolynomial; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x524420)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x5240F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_MINIMALPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x524540)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x524550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x5245B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_SUBFIELD_OFFSET UNITYSDK_OFFSET(0x524650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x524660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_CHARACTERISTIC_OFFSET UNITYSDK_OFFSET(0x524730)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int GenericPolynomialExtensionField_TypeDefinitionIndex = 21771;

	class GenericPolynomialExtensionField : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* subfield; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* minimalPolynomial; // 0x18

		::System::Int32 get_Dimension()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_MINIMALPOLYNOMIAL_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_Degree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_DEGREE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_SUBFIELD_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_EQUALS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Characteristic()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GENERICPOLYNOMIALEXTENSIONFIELD_GET_CHARACTERISTIC_OFFSET))(nullptr);
		}

	};
}

