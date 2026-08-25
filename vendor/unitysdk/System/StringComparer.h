#pragma once
#include "../unitysdk.h"

#define SYSTEM_STRINGCOMPARER_GET_INVARIANTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x9377CC0)
#define SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET UNITYSDK_OFFSET(0x9377D10)
#define SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET UNITYSDK_OFFSET(0x9377E50)
#define SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x9377EA0)
#define SYSTEM_STRINGCOMPARER_CREATE_OFFSET UNITYSDK_OFFSET(0x9377EF0)
#define SYSTEM_STRINGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9377FD0)
#define SYSTEM_STRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378160)
#define SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378220)
#define SYSTEM_STRINGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_STRINGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_STRINGCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93782F0)
#define SYSTEM_STRINGCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9378300)

namespace System
{
	inline static constexpr unsigned int StringComparer_TypeDefinitionIndex = 23833;

	class StringComparer : public Il2CppObject
	{
	public:
		::System::CultureAwareComparer* s_invariantCulture; // 0x0
		::System::CultureAwareComparer* s_invariantCultureIgnoreCase; // 0x8
		::System::OrdinalCaseSensitiveComparer* s_ordinal; // 0x10
		::System::OrdinalIgnoreCaseComparer* s_ordinalIgnoreCase; // 0x18

		::System::StringComparer* get_InvariantCultureIgnoreCase()
		{
			return (return (::System::StringComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_INVARIANTCULTUREIGNORECASE_OFFSET))(nullptr);
		}

		::System::StringComparer* get_CurrentCultureIgnoreCase()
		{
			return (return (::System::StringComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_CURRENTCULTUREIGNORECASE_OFFSET))(nullptr);
		}

		::System::StringComparer* get_Ordinal()
		{
			return (return (::System::StringComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_ORDINAL_OFFSET))(nullptr);
		}

		::System::StringComparer* get_OrdinalIgnoreCase()
		{
			return (return (::System::StringComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GET_ORDINALIGNORECASE_OFFSET))(nullptr);
		}

		::System::StringComparer* Create(::System::Globalization::CultureInfo* arg, ::System::Boolean arg)
		{
			return (return (::System::StringComparer*(*)(::System::Globalization::CultureInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

