#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_UNMANAGEDARRAY`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_UNMANAGEDARRAY`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int UnmanagedArray`1_TypeDefinitionIndex = 37043;

	class UnmanagedArray`1 : public Il2CppObject
	{
	public:
		::System::Int32 m_pointer; // 0x0
		::System::Int32 m_length; // 0x0
		AllocatorHandle* m_allocator; // 0x0

		Il2CppObject&* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_UNMANAGEDARRAY`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_UNMANAGEDARRAY`1_DISPOSE_OFFSET))(nullptr);
		}

	};
}

