#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IFiniteField; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field { class IPolynomialExtensionField; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_GETBINARYEXTENSIONFIELD_OFFSET UNITYSDK_OFFSET(0x523E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x524140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_GETPRIMEFIELD_OFFSET UNITYSDK_OFFSET(0x5242A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_.CTOR_OFFSET UNITYSDK_OFFSET(0x524410)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field
{
	inline static constexpr unsigned int FiniteFields_TypeDefinitionIndex = 21770;

	class FiniteFields : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* GF_2; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* GF_3; // 0x8

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomialExtensionField* GetBinaryExtensionField(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IPolynomialExtensionField*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_GETBINARYEXTENSIONFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField* GetPrimeField(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Field::IFiniteField*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_GETPRIMEFIELD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_FIELD_FINITEFIELDS_.CTOR_OFFSET))(nullptr);
		}

	};
}

