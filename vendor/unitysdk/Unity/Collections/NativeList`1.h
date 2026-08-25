#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class NativeArrayOptions; }

#define UNITY_COLLECTIONS_NATIVELIST`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_RESIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITY_COLLECTIONS_NATIVELIST`1_RESIZEUNINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeList`1_TypeDefinitionIndex = 37040;

	class NativeList`1 : public Il2CppObject
	{
	public:
		::System::Object** m_ListData; // 0x0
		AllocatorHandle* m_DeprecatedAllocator; // 0x0

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_T_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_T_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void Resize(::System::Int32 arg, ::Unity::Collections::NativeArrayOptions* arg)
		{
			((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArrayOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResizeUninitialized(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELIST`1_RESIZEUNINITIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

