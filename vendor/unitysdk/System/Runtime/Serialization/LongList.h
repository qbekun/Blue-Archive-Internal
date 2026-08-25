#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9200B40)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9200F20)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET UNITYSDK_OFFSET(0x9200BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9201000)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_STARTENUMERATION_OFFSET UNITYSDK_OFFSET(0x91FE770)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91FE7C0)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91FE780)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET UNITYSDK_OFFSET(0x9200A40)
#define SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET UNITYSDK_OFFSET(0x9200F80)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int LongList_TypeDefinitionIndex = 24597;

	class LongList : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_values; // 0x10
		::System::Int32 m_count; // 0x18
		::System::Int32 m_totalItems; // 0x1C
		::System::Int32 m_currentItem; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void StartEnumeration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_STARTENUMERATION_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Int64 get_Current()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean RemoveElement(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_REMOVEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void EnlargeArray()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_LONGLIST_ENLARGEARRAY_OFFSET))(nullptr);
		}

	};
}

