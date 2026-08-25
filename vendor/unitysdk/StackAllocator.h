#pragma once
#include "unitysdk.h"

#define STACKALLOCATOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9E376B0)
#define STACKALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E376C0)
#define STACKALLOCATOR_TRY_OFFSET UNITYSDK_OFFSET(0x9E37660)
#define STACKALLOCATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E37910)
#define STACKALLOCATOR_TRY$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E37920)

	inline static constexpr unsigned int StackAllocator_TypeDefinitionIndex = 37003;

	class StackAllocator : public Il2CppObject
	{
	public:
		AllocatorHandle* m_handle; // 0x10
		Block* m_storage; // 0x18
		::System::Int64 m_top; // 0x38

		AllocatorHandle* get_Handle()
		{
			return (return (AllocatorHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKALLOCATOR_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 Try(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKALLOCATOR_TRY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Try(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKALLOCATOR_TRY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKALLOCATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Int32 Try$BurstManaged(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKALLOCATOR_TRY$BURSTMANAGED_OFFSET))(arg, arg, nullptr);
		}

	};

