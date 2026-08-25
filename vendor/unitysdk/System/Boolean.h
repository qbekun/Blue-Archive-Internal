#pragma once
#include "../unitysdk.h"

#define SYSTEM_BOOLEAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x927A1C0)
#define SYSTEM_BOOLEAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927A1D0)
#define SYSTEM_BOOLEAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x927A220)
#define SYSTEM_BOOLEAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x927A2C0)
#define SYSTEM_BOOLEAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x927A330)
#define SYSTEM_BOOLEAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x927A340)
#define SYSTEM_BOOLEAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x927A410)
#define SYSTEM_BOOLEAN_PARSE_OFFSET UNITYSDK_OFFSET(0x927A430)
#define SYSTEM_BOOLEAN_PARSE_OFFSET UNITYSDK_OFFSET(0x927A510)
#define SYSTEM_BOOLEAN_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x927A970)
#define SYSTEM_BOOLEAN_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x927A5D0)
#define SYSTEM_BOOLEAN_TRIMWHITESPACEANDNULL_OFFSET UNITYSDK_OFFSET(0x927AA10)
#define SYSTEM_BOOLEAN_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x927AE00)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x927AE10)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET UNITYSDK_OFFSET(0x927AE20)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET UNITYSDK_OFFSET(0x927AEB0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET UNITYSDK_OFFSET(0x927AF10)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET UNITYSDK_OFFSET(0x927AF70)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET UNITYSDK_OFFSET(0x927AFD0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET UNITYSDK_OFFSET(0x927B030)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET UNITYSDK_OFFSET(0x927B090)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET UNITYSDK_OFFSET(0x927B0F0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET UNITYSDK_OFFSET(0x927B150)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET UNITYSDK_OFFSET(0x927B1B0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET UNITYSDK_OFFSET(0x927B230)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET UNITYSDK_OFFSET(0x927B2B0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET UNITYSDK_OFFSET(0x927B3C0)
#define SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET UNITYSDK_OFFSET(0x927B450)
#define SYSTEM_BOOLEAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x927C090)

namespace System
{
	inline static constexpr unsigned int Boolean_TypeDefinitionIndex = 23717;

	class Boolean : public Il2CppObject
	{
	public:
		::System::Boolean m_value; // 0x10
		::System::Int32 True; // 0x0
		::System::Int32 False; // 0x0
		::System::String* TrueLiteral; // 0x0
		::System::String* FalseLiteral; // 0x0
		::System::String* TrueString; // 0x0
		::System::String* FalseString; // 0x8

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean Parse(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_PARSE_OFFSET))(str, nullptr);
		}

		::System::Boolean Parse(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryParse(::System::String* str, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_TRYPARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParse(Il2CppObject* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_TRYPARSE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* TrimWhiteSpaceAndNull(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_TRIMWHITESPACEANDNULL_OFFSET))(arg, nullptr);
		}

		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean System.IConvertible.ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char System.IConvertible.ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte System.IConvertible.ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte System.IConvertible.ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 System.IConvertible.ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 System.IConvertible.ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IConvertible.ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 System.IConvertible.ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 System.IConvertible.ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 System.IConvertible.ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single System.IConvertible.ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double System.IConvertible.ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* System.IConvertible.ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* System.IConvertible.ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::Object* System.IConvertible.ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_SYSTEM.ICONVERTIBLE.TOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BOOLEAN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

