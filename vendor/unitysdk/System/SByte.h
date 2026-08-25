#pragma once
#include "../unitysdk.h"

#define SYSTEM_SBYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9371B50)
#define SYSTEM_SBYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9371C20)
#define SYSTEM_SBYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9371C30)
#define SYSTEM_SBYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9371CA0)
#define SYSTEM_SBYTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9371CB0)
#define SYSTEM_SBYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9371CC0)
#define SYSTEM_SBYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9371D40)
#define SYSTEM_SBYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9371DD0)
#define SYSTEM_SBYTE_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9371F50)
#define SYSTEM_SBYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x9372090)
#define SYSTEM_SBYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x9372330)
#define SYSTEM_SBYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x9372160)
#define SYSTEM_SBYTE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x93723E0)
#define SYSTEM_SBYTE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9372500)
#define SYSTEM_SBYTE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x93725E0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x93725F0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x9372640)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9372690)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x93726A0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x93726F0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x9372740)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x9372790)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x93727A0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x93727F0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x9372840)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9372890)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x93728E0)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9372930)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x9372990)
#define SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x9372A20)

namespace System
{
	inline static constexpr unsigned int SByte_TypeDefinitionIndex = 23826;

	class SByte : public Il2CppObject
	{
	public:
		::System::SByte m_value; // 0x10
		::System::SByte MaxValue; // 0x0
		::System::SByte MinValue; // 0x0

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::SByte arg)
		{
			return (return (::System::Int32(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::SByte arg)
		{
			return (return (::System::Boolean(*)(::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::SByte Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::SByte Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::SByte Parse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::SByte(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, int8_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, int8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, int8_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, int8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SBYTE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

