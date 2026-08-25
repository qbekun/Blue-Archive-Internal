#pragma once
#include "../unitysdk.h"

#define SQLITE_COLLATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21490)
#define SQLITE_COLLATIONATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA214C0)
#define SQLITE_COLLATIONATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA214D0)

namespace SQLite
{
	inline static constexpr unsigned int CollationAttribute_TypeDefinitionIndex = 36603;

	class CollationAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Value_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLLATIONATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

