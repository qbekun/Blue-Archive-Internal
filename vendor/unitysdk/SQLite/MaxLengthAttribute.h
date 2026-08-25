#pragma once
#include "../unitysdk.h"

#define SQLITE_MAXLENGTHATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA21440)
#define SQLITE_MAXLENGTHATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA21450)
#define SQLITE_MAXLENGTHATTRIBUTE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA21470)

namespace SQLite
{
	inline static constexpr unsigned int MaxLengthAttribute_TypeDefinitionIndex = 36601;

	class MaxLengthAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _Value_k__BackingField; // 0x10

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_Value(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_MAXLENGTHATTRIBUTE_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};
}

