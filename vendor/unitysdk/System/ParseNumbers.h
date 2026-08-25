#pragma once
#include "../unitysdk.h"

#define SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x936F020)
#define SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET UNITYSDK_OFFSET(0x936F050)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x936F7D0)
#define SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET UNITYSDK_OFFSET(0x936F800)
#define SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET UNITYSDK_OFFSET(0x936FF40)
#define SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET UNITYSDK_OFFSET(0x9370380)
#define SYSTEM_PARSENUMBERS_EATWHITESPACE_OFFSET UNITYSDK_OFFSET(0x936F480)
#define SYSTEM_PARSENUMBERS_GRABLONGS_OFFSET UNITYSDK_OFFSET(0x936F520)
#define SYSTEM_PARSENUMBERS_GRABINTS_OFFSET UNITYSDK_OFFSET(0x936FCA0)
#define SYSTEM_PARSENUMBERS_THROWOVERFLOWINT32EXCEPTION_OFFSET UNITYSDK_OFFSET(0x9370940)
#define SYSTEM_PARSENUMBERS_THROWOVERFLOWINT64EXCEPTION_OFFSET UNITYSDK_OFFSET(0x9370880)
#define SYSTEM_PARSENUMBERS_THROWOVERFLOWUINT32EXCEPTION_OFFSET UNITYSDK_OFFSET(0x93709A0)
#define SYSTEM_PARSENUMBERS_THROWOVERFLOWUINT64EXCEPTION_OFFSET UNITYSDK_OFFSET(0x93708E0)
#define SYSTEM_PARSENUMBERS_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x9370A00)

namespace System
{
	inline static constexpr unsigned int ParseNumbers_TypeDefinitionIndex = 23818;

	class ParseNumbers : public Il2CppObject
	{
	public:
		::System::Int64 StringToLong(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 StringToLong(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOLONG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 StringToInt(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 StringToInt(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_STRINGTOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* IntToString(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_INTTOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* LongToString(::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Char arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::System::Int32, ::System::Int32, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_LONGTOSTRING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EatWhiteSpace(Il2CppObject* arg, int32_t&* arg)
		{
			((::System::Void(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_EATWHITESPACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GrabLongs(::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::Int32, Il2CppObject*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_GRABLONGS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GrabInts(::System::Int32 arg, Il2CppObject* arg, int32_t&* arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Il2CppObject*, int32_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_GRABINTS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ThrowOverflowInt32Exception()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_THROWOVERFLOWINT32EXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowOverflowInt64Exception()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_THROWOVERFLOWINT64EXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowOverflowUInt32Exception()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_THROWOVERFLOWUINT32EXCEPTION_OFFSET))(nullptr);
		}

		::System::Void ThrowOverflowUInt64Exception()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_THROWOVERFLOWUINT64EXCEPTION_OFFSET))(nullptr);
		}

		::System::Boolean IsDigit(::System::Char arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSENUMBERS_ISDIGIT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

