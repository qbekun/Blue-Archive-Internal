#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { class SimpleBigDecimal; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x5E34F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E3570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E3600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_CHECKSCALE_OFFSET UNITYSDK_OFFSET(0x5E3640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADJUSTSCALE_OFFSET UNITYSDK_OFFSET(0x5E36B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0x5E3780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0x5E3810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_NEGATE_OFFSET UNITYSDK_OFFSET(0x5E38A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x5E3910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x5E39A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x5E3A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x5E3AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_DIVIDE_OFFSET UNITYSDK_OFFSET(0x5E3B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_DIVIDE_OFFSET UNITYSDK_OFFSET(0x5E3BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SHIFTLEFT_OFFSET UNITYSDK_OFFSET(0x5E3C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x5E3CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x5E3D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_FLOOR_OFFSET UNITYSDK_OFFSET(0x5E3D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ROUND_OFFSET UNITYSDK_OFFSET(0x5E3D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x5E3E60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_LONGVALUE_OFFSET UNITYSDK_OFFSET(0x5E3EA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x5E3EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x5E3EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x5E4260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5E4310)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc
{
	inline static constexpr unsigned int SimpleBigDecimal_TypeDefinitionIndex = 21999;

	class SimpleBigDecimal : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* bigInt; // 0x10
		::System::Int32 scale; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* GetInstance(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GETINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CheckScale(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_CHECKSCALE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* AdjustScale(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADJUSTSCALE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Add(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ADD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Negate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_NEGATE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Subtract(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_MULTIPLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Multiply(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_MULTIPLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_DIVIDE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Divide(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_DIVIDE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ShiftLeft(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_SHIFTLEFT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_COMPARETO_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Floor()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_FLOOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Round()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_ROUND_OFFSET))(nullptr);
		}

		::System::Int32 get_IntValue()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_INTVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_LongValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_LONGVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Scale()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GET_SCALE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_SIMPLEBIGDECIMAL_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

