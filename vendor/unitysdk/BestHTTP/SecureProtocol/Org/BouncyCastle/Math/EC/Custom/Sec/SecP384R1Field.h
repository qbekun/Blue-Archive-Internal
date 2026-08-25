#pragma once
#include "../../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDPINVTO_OFFSET UNITYSDK_OFFSET(0x590910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5909D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDEXT_OFFSET UNITYSDK_OFFSET(0x590B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_TWICE_OFFSET UNITYSDK_OFFSET(0x590C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_NEGATE_OFFSET UNITYSDK_OFFSET(0x590D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDONE_OFFSET UNITYSDK_OFFSET(0x590DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_REDUCE_OFFSET UNITYSDK_OFFSET(0x590E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x591350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SQUAREN_OFFSET UNITYSDK_OFFSET(0x5913D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBTRACTEXT_OFFSET UNITYSDK_OFFSET(0x591460)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_REDUCE32_OFFSET UNITYSDK_OFFSET(0x5911F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x591550)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x591690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SQUARE_OFFSET UNITYSDK_OFFSET(0x591770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x5917E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_HALF_OFFSET UNITYSDK_OFFSET(0x5917F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBPINVFROM_OFFSET UNITYSDK_OFFSET(0x5915D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADD_OFFSET UNITYSDK_OFFSET(0x5918C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	inline static constexpr unsigned int SecP384R1Field_TypeDefinitionIndex = 21909;

	class SecP384R1Field : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* P; // 0x0
		::Il2CppArray<::System::Object*>* PExt; // 0x8
		::Il2CppArray<::System::Object*>* PExtInv; // 0x10
		::System::UInt32 P11; // 0x0
		::System::UInt32 PExt23; // 0x0

		::System::Void AddPInvTo(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDPINVTO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void AddExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Twice(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_TWICE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Negate(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_NEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOne(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reduce(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_REDUCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Multiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SquareN(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SQUAREN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SubtractExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBTRACTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reduce32(::System::UInt32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_REDUCE32_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Subtract(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBTRACT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_FROMBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void Square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Half(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_HALF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SubPInvFrom(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_SUBPINVFROM_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECP384R1FIELD_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

