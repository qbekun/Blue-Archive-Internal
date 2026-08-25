#pragma once
#include "../unitysdk.h"

#define SQLITE_TABLEATTRIBUTE_GET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0xA21270)
#define SQLITE_TABLEATTRIBUTE_SET_WITHOUTROWID_OFFSET UNITYSDK_OFFSET(0xA21280)
#define SQLITE_TABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21290)
#define SQLITE_TABLEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA212C0)
#define SQLITE_TABLEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA212D0)

namespace SQLite
{
	inline static constexpr unsigned int TableAttribute_TypeDefinitionIndex = 36594;

	class TableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _WithoutRowId_k__BackingField; // 0x18

		::System::Boolean get_WithoutRowId()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_GET_WITHOUTROWID_OFFSET))(nullptr);
		}

		::System::Void set_WithoutRowId(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_SET_WITHOUTROWID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_TABLEATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

	};
}

