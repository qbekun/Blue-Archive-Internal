#pragma once
#include "../unitysdk.h"

#define SYSTEM_UINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9382130)
#define SYSTEM_UINT64_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9382220)
#define SYSTEM_UINT64_EQUALS_OFFSET UNITYSDK_OFFSET(0x9382240)
#define SYSTEM_UINT64_EQUALS_OFFSET UNITYSDK_OFFSET(0x93822B0)
#define SYSTEM_UINT64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93822C0)
#define SYSTEM_UINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93822D0)
#define SYSTEM_UINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9382350)
#define SYSTEM_UINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93823E0)
#define SYSTEM_UINT64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93824C0)
#define SYSTEM_UINT64_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x93825A0)
#define SYSTEM_UINT64_PARSE_OFFSET UNITYSDK_OFFSET(0x9382650)
#define SYSTEM_UINT64_PARSE_OFFSET UNITYSDK_OFFSET(0x9382720)
#define SYSTEM_UINT64_PARSE_OFFSET UNITYSDK_OFFSET(0x9382800)
#define SYSTEM_UINT64_PARSE_OFFSET UNITYSDK_OFFSET(0x93828D0)
#define SYSTEM_UINT64_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x93829B0)
#define SYSTEM_UINT64_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x9382A90)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9382AA0)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x9382AF0)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9382B40)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x9382B90)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x9382BE0)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x9382C30)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x9382C80)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x9382CD0)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x9382D20)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x9382D70)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9382D80)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9382DD0)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9382E20)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x9382E80)
#define SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x9382F10)

namespace System
{
	inline static constexpr unsigned int UInt64_TypeDefinitionIndex = 23863;

	class UInt64 : public Il2CppObject
	{
	public:
		::System::UInt64 m_value; // 0x10
		::System::UInt64 MaxValue; // 0x0
		::System::UInt64 MinValue; // 0x0

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::UInt64 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::UInt64 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::UInt64 Parse(::System::String* str)
		{
			return (return (::System::UInt64(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_PARSE_OFFSET))(str, nullptr);
		}

		::System::UInt64 Parse(::System::String* str, ::System::Globalization::NumberStyles* arg)
		{
			return (return (::System::UInt64(*)(::System::String*, ::System::Globalization::NumberStyles*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::UInt64 Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::UInt64 Parse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_PARSE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, ::System::Globalization::NumberStyles* arg, ::System::IFormatProvider* arg, uint64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles*, ::System::IFormatProvider*, uint64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_TRYPARSE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_UINT64_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

