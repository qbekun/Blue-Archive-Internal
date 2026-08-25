#pragma once
#include "unitysdk.h"

#define COLUMNINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA20010)
#define COLUMNINFO_SET_NOTNULL_OFFSET UNITYSDK_OFFSET(0xA20020)
#define COLUMNINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA20030)
#define COLUMNINFO_GET_NOTNULL_OFFSET UNITYSDK_OFFSET(0xA20040)
#define COLUMNINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA20050)
#define COLUMNINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA20060)

	inline static constexpr unsigned int ColumnInfo_TypeDefinitionIndex = 36583;

	class ColumnInfo : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _notnull_k__BackingField; // 0x18

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void set_notnull(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_SET_NOTNULL_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_notnull()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_GET_NOTNULL_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLUMNINFO_.CTOR_OFFSET))(nullptr);
		}

	};

