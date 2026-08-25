#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IFiniteField; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IEXTENSIONFIELD_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IEXTENSIONFIELD_GET_SUBFIELD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int IExtensionField_TypeDefinitionIndex = 21773;

	class IExtensionField : public Il2CppObject
	{
	public:
		::System::Int32 get_Degree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IEXTENSIONFIELD_GET_DEGREE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* get_Subfield()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_IEXTENSIONFIELD_GET_SUBFIELD_OFFSET))(nullptr);
		}

	};
}

