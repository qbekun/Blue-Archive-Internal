#pragma once
#include "../unitysdk.h"

#define SYSTEM_FORMATTABLESTRING_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FORMATTABLESTRING_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FORMATTABLESTRING_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FORMATTABLESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_FORMATTABLESTRING_SYSTEM.IFORMATTABLE.TOSTRING_OFFSET UNITYSDK_OFFSET(0x933D1C0)
#define SYSTEM_FORMATTABLESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x933D1E0)
#define SYSTEM_FORMATTABLESTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x933D240)

namespace System
{
	inline static constexpr unsigned int FormattableString_TypeDefinitionIndex = 23741;

	class FormattableString : public Il2CppObject
	{
	public:
		::System::String* get_Format()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_GET_FORMAT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_GETARGUMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ArgumentCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Object* GetArgument(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_GETARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* System.IFormattable.ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_SYSTEM.IFORMATTABLE.TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_FORMATTABLESTRING_.CTOR_OFFSET))(nullptr);
		}

	};
}

