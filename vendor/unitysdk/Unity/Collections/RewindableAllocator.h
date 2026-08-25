#pragma once
#include "../../unitysdk.h"

namespace Unity::Collections { class Spinner; }

#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_REWIND_OFFSET UNITYSDK_OFFSET(0x9E38B40)
#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E38D10)
#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E38E30)
#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E38AF0)
#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9E39420)
#define UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E39430)

namespace Unity::Collections
{
	inline static constexpr unsigned int RewindableAllocator_TypeDefinitionIndex = 37047;

	class RewindableAllocator : public Il2CppObject
	{
	public:
		::Unity::Collections::Spinner* m_spinner; // 0x10
		AllocatorHandle* m_handle; // 0x14
		Il2CppObject* m_block; // 0x18
		::System::Int32 m_best; // 0x28
		::System::Int32 m_last; // 0x2C
		::System::Int32 m_used; // 0x30
		::System::Boolean m_enableBlockFree; // 0x34

		::System::Void Rewind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_REWIND_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Try(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY_OFFSET))(arg, arg, nullptr);
		}

		AllocatorHandle* get_Handle()
		{
			return (return (AllocatorHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 Try$BurstManaged(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_REWINDABLEALLOCATOR_TRY$BURSTMANAGED_OFFSET))(arg, arg, nullptr);
		}

	};
}

