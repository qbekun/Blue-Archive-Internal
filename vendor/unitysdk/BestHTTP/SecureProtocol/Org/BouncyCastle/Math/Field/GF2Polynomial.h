#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GETEXPONENTSPRESENT_OFFSET UNITYSDK_OFFSET(0x5247D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x524820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x524080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5248D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x524920)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int GF2Polynomial_TypeDefinitionIndex = 21772;

	class GF2Polynomial : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* exponents; // 0x10

		::Il2CppArray<::System::Object*>* GetExponentsPresent()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GETEXPONENTSPRESENT_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 get_Degree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_GF2POLYNOMIAL_GET_DEGREE_OFFSET))(nullptr);
		}

	};
}

