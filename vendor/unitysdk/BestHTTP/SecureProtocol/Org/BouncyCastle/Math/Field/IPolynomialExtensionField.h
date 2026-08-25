#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IPolynomial; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIALEXTENSIONFIELD_GET_MINIMALPOLYNOMIAL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int IPolynomialExtensionField_TypeDefinitionIndex = 21776;

	class IPolynomialExtensionField : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial* get_MinimalPolynomial()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomial*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIALEXTENSIONFIELD_GET_MINIMALPOLYNOMIAL_OFFSET))(nullptr);
		}

	};
}

