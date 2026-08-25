#pragma once
#include "../unitysdk.h"

#define SYSTEM_UINT32_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93812F0)
#define SYSTEM_UINT32_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93813E0)
#define SYSTEM_UINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x9381400)
#define SYSTEM_UINT32_EQUALS_OFFSET UNITYSDK_OFFSET(0x9381470)
#define SYSTEM_UINT32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9381480)
#define SYSTEM_UINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9381490)
#define SYSTEM_UINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9381510)
#define SYSTEM_UINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93815A0)
#define SYSTEM_UINT32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9381670)
#define SYSTEM_UINT32_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x9381750)
#define SYSTEM_UINT32_PARSE_OFFSET UNITYSDK_OFFSET(0x9381800)
#define SYSTEM_UINT32_PARSE_OFFSET UNITYSDK_OFFSET(0x93818D0)
#define SYSTEM_UINT32_PARSE_OFFSET UNITYSDK_OFFSET(0x93819A0)
#define SYSTEM_UINT32_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9381A80)
#define SYSTEM_UINT32_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x9381B40)
#define SYSTEM_UINT32_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x9381C20)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9381C30)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x9381C80)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9381CD0)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x9381D20)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x9381D70)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x9381DC0)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x9381E10)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x9381E60)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x9381E70)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x9381EC0)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9381F10)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9381F60)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9381FB0)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x9382010)
#define SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x93820A0)

namespace System
{
	inline static constexpr unsigned int UInt32_TypeDefinitionIndex = 23862;

	class UInt32 : public Il2CppObject
	{
	public:
		::System::UInt32 m_value; // 0x10
		::System::UInt32 MaxValue; // 0x0
		::System::UInt32 MinValue; // 0x0

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt32 Parse(::System::String* str)
		{
			return (return (::System::UInt32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_PARSE_OFFSET))(str, nullptr);
		}

		::System::UInt32 Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::UInt32 Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT32_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

