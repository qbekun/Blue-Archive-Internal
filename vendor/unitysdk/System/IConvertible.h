#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IConvertible_TypeDefinitionIndex = 23770;

	class IConvertible : public Il2CppObject
	{
	public:
		::System::TypeCode* GetTypeCode()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_GETTYPECODE_OFFSET))(nullptr);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Char ToChar(::System::IFormatProvider* arg)
		{
			return (return (::System::Char(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(arg, nullptr);
		}

		::System::SByte ToSByte(::System::IFormatProvider* arg)
		{
			return (return (::System::SByte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(arg, nullptr);
		}

		::System::Byte ToByte(::System::IFormatProvider* arg)
		{
			return (return (::System::Byte(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(arg, nullptr);
		}

		::System::Int16 ToInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::Int16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(arg, nullptr);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt16(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::Int32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt32(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::Int64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* arg)
		{
			return (return (::System::UInt64(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::IFormatProvider* arg)
		{
			return (return (::System::Single(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::Double ToDouble(::System::IFormatProvider* arg)
		{
			return (return (::System::Double(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Decimal* ToDecimal(::System::IFormatProvider* arg)
		{
			return (return (::System::Decimal*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(arg, nullptr);
		}

		::System::DateTime* ToDateTime(::System::IFormatProvider* arg)
		{
			return (return (::System::DateTime*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Object* ToType(::System::Type* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(arg, arg, nullptr);
		}

	};
}

