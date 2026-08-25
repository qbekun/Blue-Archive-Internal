#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x524950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x524270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x524960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GET_CHARACTERISTIC_OFFSET UNITYSDK_OFFSET(0x524990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x5249A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int PrimeField_TypeDefinitionIndex = 21777;

	class PrimeField : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* characteristic; // 0x10

		::System::Int32 get_Dimension()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GET_DIMENSION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GETHASHCODE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_Characteristic()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_GET_CHARACTERISTIC_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_PRIMEFIELD_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

