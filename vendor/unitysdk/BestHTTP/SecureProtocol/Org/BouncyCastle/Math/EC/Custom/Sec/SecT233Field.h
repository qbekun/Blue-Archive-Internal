#pragma once
#include "../../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLCOMPACTEXT_OFFSET UNITYSDK_OFFSET(0x5B5770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUAREN_OFFSET UNITYSDK_OFFSET(0x5B5880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUAREADDTOEXT_OFFSET UNITYSDK_OFFSET(0x5B5AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_TRACE_OFFSET UNITYSDK_OFFSET(0x5B5C80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLMULWACC_OFFSET UNITYSDK_OFFSET(0x5B5CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_REDUCE_OFFSET UNITYSDK_OFFSET(0x5B5970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x5B5FB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLMULTIPLY_OFFSET UNITYSDK_OFFSET(0x5B5FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDEXT_OFFSET UNITYSDK_OFFSET(0x5B5B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x5B63A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_INVERT_OFFSET UNITYSDK_OFFSET(0x5B63B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_MULTIPLYADDTOEXT_OFFSET UNITYSDK_OFFSET(0x5B6C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLEXPAND_OFFSET UNITYSDK_OFFSET(0x5B6300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQRT_OFFSET UNITYSDK_OFFSET(0x5B6C50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLSQUARE_OFFSET UNITYSDK_OFFSET(0x5B58E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDONE_OFFSET UNITYSDK_OFFSET(0x5B6EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_HALFTRACE_OFFSET UNITYSDK_OFFSET(0x5B6F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDTO_OFFSET UNITYSDK_OFFSET(0x5B6FA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUARE_OFFSET UNITYSDK_OFFSET(0x5B6B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_REDUCE23_OFFSET UNITYSDK_OFFSET(0x5B7020)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADD_OFFSET UNITYSDK_OFFSET(0x5B7090)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x5B6BC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	inline static constexpr unsigned int SecT233Field_TypeDefinitionIndex = 21952;

	class SecT233Field : public Il2CppObject
	{
	public:
		::System::UInt64 M41; // 0x0
		::System::UInt64 M59; // 0x0

		::System::Void ImplCompactExt(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLCOMPACTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void SquareN(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUAREN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SquareAddToExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUAREADDTOEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 Trace(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_TRACE_OFFSET))(arg, nullptr);
		}

		::System::Void ImplMulwAcc(::System::UInt64 arg, ::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLMULWACC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Reduce(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_REDUCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ImplMultiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLMULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_FROMBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void Invert(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_INVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MultiplyAddToExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_MULTIPLYADDTOEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ImplExpand(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLEXPAND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sqrt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQRT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImplSquare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_IMPLSQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOne(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HalfTrace(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_HALFTRACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTo(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_SQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reduce23(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_REDUCE23_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Multiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT233FIELD_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

