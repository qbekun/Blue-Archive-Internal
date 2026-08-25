#pragma once
#include "../unitysdk.h"

#define SYSTEM_BYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x927C120)
#define SYSTEM_BYTE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x927C1E0)
#define SYSTEM_BYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x927C1F0)
#define SYSTEM_BYTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x927C260)
#define SYSTEM_BYTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x927C270)
#define SYSTEM_BYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x927C280)
#define SYSTEM_BYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x927C4E0)
#define SYSTEM_BYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x927C580)
#define SYSTEM_BYTE_PARSE_OFFSET UNITYSDK_OFFSET(0x927C320)
#define SYSTEM_BYTE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x927C630)
#define SYSTEM_BYTE_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x927C740)
#define SYSTEM_BYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927C800)
#define SYSTEM_BYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927C880)
#define SYSTEM_BYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927C950)
#define SYSTEM_BYTE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927C9E0)
#define SYSTEM_BYTE_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x927CAC0)
#define SYSTEM_BYTE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x927CB70)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x927CB80)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x927CBE0)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x927CC40)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x927CD40)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x927CD50)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x927CDB0)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x927CE10)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x927CE70)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x927CED0)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x927CF30)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x927CF90)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x927CFF0)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x927D050)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x927D170)
#define SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x927D200)

namespace System
{
	inline static constexpr unsigned int Byte_TypeDefinitionIndex = 23718;

	class Byte : public Il2CppObject
	{
	public:
		::System::Byte m_value; // 0x10
		::System::Byte MaxValue; // 0x0
		::System::Byte MinValue; // 0x0

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Byte arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Byte Parse(::System::String* str)
		{
			return (return (::System::Byte(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_PARSE_OFFSET))(str, nullptr);
		}

		::System::Byte Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Byte Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Byte Parse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Byte(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, uint8_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, uint8_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTE_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

