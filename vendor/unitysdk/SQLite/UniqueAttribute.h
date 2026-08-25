#pragma once
#include "../unitysdk.h"

#define SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0xA21410)
#define SQLITE_UNIQUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21420)
#define SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0xA21430)

namespace SQLite
{
	inline static constexpr unsigned int UniqueAttribute_TypeDefinitionIndex = 36600;

	class UniqueAttribute : public Il2CppObject
	{
	public:
		::System::Boolean get_Unique()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_GET_UNIQUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Unique(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_UNIQUEATTRIBUTE_SET_UNIQUE_OFFSET))(arg, nullptr);
		}

	};
}

