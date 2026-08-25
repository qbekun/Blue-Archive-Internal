#pragma once
#include "../unitysdk.h"

#define SQLITE_INDEXEDATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA21350)
#define SQLITE_INDEXEDATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA21360)
#define SQLITE_INDEXEDATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xA21370)
#define SQLITE_INDEXEDATTRIBUTE_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xA21380)
#define SQLITE_INDEXEDATTRIBUTE_GET_UNIQUE_OFFSET UNITYSDK_OFFSET(0xA21390)
#define SQLITE_INDEXEDATTRIBUTE_SET_UNIQUE_OFFSET UNITYSDK_OFFSET(0xA213A0)
#define SQLITE_INDEXEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA213B0)
#define SQLITE_INDEXEDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA213C0)

namespace SQLite
{
	inline static constexpr unsigned int IndexedAttribute_TypeDefinitionIndex = 36598;

	class IndexedAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _Order_k__BackingField; // 0x18
		::System::Boolean _Unique_k__BackingField; // 0x1C

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_Order(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Unique()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_GET_UNIQUE_OFFSET))(nullptr);
		}

		::System::Void set_Unique(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_SET_UNIQUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_INDEXEDATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

