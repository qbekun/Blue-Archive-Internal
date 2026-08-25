#pragma once
#include "../unitysdk.h"

#define SYSTEM_UINT16_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9380510)
#define SYSTEM_UINT16_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93805E0)
#define SYSTEM_UINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x93805F0)
#define SYSTEM_UINT16_EQUALS_OFFSET UNITYSDK_OFFSET(0x9380660)
#define SYSTEM_UINT16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9380670)
#define SYSTEM_UINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9380680)
#define SYSTEM_UINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9380700)
#define SYSTEM_UINT16_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9380790)
#define SYSTEM_UINT16_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9380870)
#define SYSTEM_UINT16_PARSE_OFFSET UNITYSDK_OFFSET(0x9380920)
#define SYSTEM_UINT16_PARSE_OFFSET UNITYSDK_OFFSET(0x9380B70)
#define SYSTEM_UINT16_PARSE_OFFSET UNITYSDK_OFFSET(0x93809C0)
#define SYSTEM_UINT16_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9380C20)
#define SYSTEM_UINT16_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9380D30)
#define SYSTEM_UINT16_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x9380DE0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9380DF0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x9380E40)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9380E90)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x9380EE0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x9380F30)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x9380F80)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x9380F90)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x9380FE0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x9381030)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x9381080)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x93810D0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9381120)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9381170)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x93811D0)
#define SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x9381260)

namespace System
{
	inline static constexpr unsigned int UInt16_TypeDefinitionIndex = 23861;

	class UInt16 : public Il2CppObject
	{
	public:
		::System::UInt16 m_value; // 0x10
		::System::UInt16 MaxValue; // 0x0
		::System::UInt16 MinValue; // 0x0

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::UInt16 arg)
		{
			return (return (::System::Int32(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::UInt16 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt16 Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::UInt16 Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::UInt16 Parse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::UInt16(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_PARSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, uint16_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, ::System::Globalization::NumberStyles* arg, ::System::Globalization::NumberFormatInfo* arg, uint16_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Globalization::NumberStyles*, ::System::Globalization::NumberFormatInfo*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_TRYPARSE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT16_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

