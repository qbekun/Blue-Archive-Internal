#pragma once
#include "../unitysdk.h"

#define SYSTEM_SINGLE_ISFINITE_OFFSET UNITYSDK_OFFSET(0x9372AC0)
#define SYSTEM_SINGLE_ISINFINITY_OFFSET UNITYSDK_OFFSET(0x9372B20)
#define SYSTEM_SINGLE_ISNAN_OFFSET UNITYSDK_OFFSET(0x9372B80)
#define SYSTEM_SINGLE_ISNEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x9372BE0)
#define SYSTEM_SINGLE_ISPOSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x9372BF0)
#define SYSTEM_SINGLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9372C00)
#define SYSTEM_SINGLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9372DC0)
#define SYSTEM_SINGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9372EB0)
#define SYSTEM_SINGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9372FF0)
#define SYSTEM_SINGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93730F0)
#define SYSTEM_SINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9373160)
#define SYSTEM_SINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93731D0)
#define SYSTEM_SINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9373240)
#define SYSTEM_SINGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93732B0)
#define SYSTEM_SINGLE_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9373330)
#define SYSTEM_SINGLE_PARSE_OFFSET UNITYSDK_OFFSET(0x9373400)
#define SYSTEM_SINGLE_PARSE_OFFSET UNITYSDK_OFFSET(0x93734D0)
#define SYSTEM_SINGLE_PARSE_OFFSET UNITYSDK_OFFSET(0x93735A0)
#define SYSTEM_SINGLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9373680)
#define SYSTEM_SINGLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9373C90)
#define SYSTEM_SINGLE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9373700)
#define SYSTEM_SINGLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x9373D30)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9373D40)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x9373DA0)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9373E30)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x9373E90)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x9373EF0)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x9373F50)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x9373FB0)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x9374010)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x9374070)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x93740D0)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9374130)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9374140)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x93741A0)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x9374210)
#define SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x93742A0)

namespace System
{
	inline static constexpr unsigned int Single_TypeDefinitionIndex = 23828;

	class Single : public Il2CppObject
	{
	public:
		::System::Single m_value; // 0x10
		::System::Single MinValue; // 0x0
		::System::Single Epsilon; // 0x0
		::System::Single MaxValue; // 0x0
		::System::Single PositiveInfinity; // 0x0
		::System::Single NegativeInfinity; // 0x0
		::System::Single NaN; // 0x0
		::System::Single NegativeZero; // 0x0

		::System::Boolean IsFinite(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_ISFINITE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInfinity(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_ISINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNaN(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_ISNAN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNegativeInfinity(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_ISNEGATIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPositiveInfinity(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_ISPOSITIVEINFINITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single Parse(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_PARSE_OFFSET))(str, nullptr);
		}

		::System::Single Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Single Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, float&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SINGLE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

