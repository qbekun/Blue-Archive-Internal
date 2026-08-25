#pragma once
#include "../../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLSQUARE_OFFSET UNITYSDK_OFFSET(0x598870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_HALFTRACE_OFFSET UNITYSDK_OFFSET(0x5988D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x598AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_FROMBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x598B00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUAREADDTOEXT_OFFSET UNITYSDK_OFFSET(0x598B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDEXT_OFFSET UNITYSDK_OFFSET(0x598B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_TRACE_OFFSET UNITYSDK_OFFSET(0x598C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_REDUCE15_OFFSET UNITYSDK_OFFSET(0x598C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x598CD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_REDUCE_OFFSET UNITYSDK_OFFSET(0x5989C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQRT_OFFSET UNITYSDK_OFFSET(0x598ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLMULW_OFFSET UNITYSDK_OFFSET(0x598F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_MULTIPLYADDTOEXT_OFFSET UNITYSDK_OFFSET(0x599280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADD_OFFSET UNITYSDK_OFFSET(0x5992D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDTO_OFFSET UNITYSDK_OFFSET(0x598AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUAREN_OFFSET UNITYSDK_OFFSET(0x599330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_INVERT_OFFSET UNITYSDK_OFFSET(0x599410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLMULTIPLY_OFFSET UNITYSDK_OFFSET(0x598D10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDONE_OFFSET UNITYSDK_OFFSET(0x5996A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUARE_OFFSET UNITYSDK_OFFSET(0x599630)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec
{
	inline static constexpr unsigned int SecT113Field_TypeDefinitionIndex = 21917;

	class SecT113Field : public Il2CppObject
	{
	public:
		::System::UInt64 M49; // 0x0
		::System::UInt64 M57; // 0x0

		::System::Void ImplSquare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLSQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HalfTrace(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_HALFTRACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* FromBigInteger(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_FROMBIGINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Void SquareAddToExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUAREADDTOEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt32 Trace(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::UInt32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_TRACE_OFFSET))(arg, nullptr);
		}

		::System::Void Reduce15(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_REDUCE15_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Multiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_MULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reduce(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_REDUCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sqrt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQRT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImplMulw(::System::UInt64 arg, ::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLMULW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void MultiplyAddToExt(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_MULTIPLYADDTOEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddTo(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SquareN(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUAREN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invert(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_INVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ImplMultiply(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_IMPLMULTIPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddOne(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_ADDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Square(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_CUSTOM_SEC_SECT113FIELD_SQUARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

