#pragma once
#include "../unitysdk.h"

#define SQLITE_COLUMNATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA212E0)
#define SQLITE_COLUMNATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA21310)
#define SQLITE_COLUMNATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA21320)

namespace SQLite
{
	inline static constexpr unsigned int ColumnAttribute_TypeDefinitionIndex = 36595;

	class ColumnAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_COLUMNATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

	};
}

