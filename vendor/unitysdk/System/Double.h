#pragma once
#include "../unitysdk.h"

#define SYSTEM_DOUBLE_ISFINITE_OFFSET UNITYSDK_OFFSET(0x933B490)
#define SYSTEM_DOUBLE_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x933B500)
#define SYSTEM_DOUBLE_ISNAN_OFFSET UNITYSDK_OFFSET(0x933B570)
#define SYSTEM_DOUBLE_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x933B5E0)
#define SYSTEM_DOUBLE_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x933B630)
#define SYSTEM_DOUBLE_ISPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x933B640)
#define SYSTEM_DOUBLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x933B650)
#define SYSTEM_DOUBLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x933B820)
#define SYSTEM_DOUBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x933B920)
#define SYSTEM_DOUBLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x933BA50)
#define SYSTEM_DOUBLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x933BB40)
#define SYSTEM_DOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x933BBD0)
#define SYSTEM_DOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x933BC40)
#define SYSTEM_DOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x933BCB0)
#define SYSTEM_DOUBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x933BD20)
#define SYSTEM_DOUBLE_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x933BDA0)
#define SYSTEM_DOUBLE_PARSE_OFFSET UNITYSDK_OFFSET(0x933BE70)
#define SYSTEM_DOUBLE_PARSE_OFFSET UNITYSDK_OFFSET(0x933BF40)
#define SYSTEM_DOUBLE_PARSE_OFFSET UNITYSDK_OFFSET(0x933C020)
#define SYSTEM_DOUBLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x933C100)
#define SYSTEM_DOUBLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x933C700)
#define SYSTEM_DOUBLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x933C180)
#define SYSTEM_DOUBLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x933C7A0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x933C7B0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x933C810)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x933C8A0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x933C900)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x933C960)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x933C9C0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x933CA20)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x933CA80)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x933CAE0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x933CB40)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x933CBA0)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x933CC00)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x933CC10)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x933CC80)
#define SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x933CD10)

namespace System
{
	inline static constexpr unsigned int Double_TypeDefinitionIndex = 23732;

	class Double : public Il2CppObject
	{
	public:
		::System::Double m_value; // 0x10
		::System::Double MinValue; // 0x0
		::System::Double MaxValue; // 0x0
		::System::Double Epsilon; // 0x0
		::System::Double NegativeInfinity; // 0x0
		::System::Double PositiveInfinity; // 0x0
		::System::Double NaN; // 0x0
		::System::Double NegativeZero; // 0x0

		::System::Boolean IsFinite(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInfinity(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNaN(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISNAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegative(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISNEGATIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegativeInfinity(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISNEGATIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPositiveInfinity(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_ISPOSITIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Double arg)
		{
			return (return (::System::Int32(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Double Parse(::System::String* str)
		{
			return (return (::System::Double(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_PARSE_OFFSET))(str, nullptr);
		}

		::System::Double Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Double Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, double&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, double&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, double&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, double&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOUBLE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

