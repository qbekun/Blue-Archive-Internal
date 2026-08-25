#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIAL_GETEXPONENTSPRESENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIAL_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int IPolynomial_TypeDefinitionIndex = 21775;

	class IPolynomial : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetExponentsPresent()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIAL_GETEXPONENTSPRESENT_OFFSET))(nullptr);
		}

		::System::Int32 get_Degree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IPOLYNOMIAL_GET_DEGREE_OFFSET))(nullptr);
		}

	};
}

