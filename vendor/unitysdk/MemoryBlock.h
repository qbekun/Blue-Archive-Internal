#pragma once
#include "unitysdk.h"

#define MEMORYBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E39270)
#define MEMORYBLOCK_REWIND_OFFSET UNITYSDK_OFFSET(0x9E38D00)
#define MEMORYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E38CB0)
#define MEMORYBLOCK_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9E392B0)
#define MEMORYBLOCK_TRYALLOCATE_OFFSET UNITYSDK_OFFSET(0x9E39170)

	inline static constexpr unsigned int MemoryBlock_TypeDefinitionIndex = 37044;

	class MemoryBlock : public Il2CppObject
	{
	public:
		::System::Object** m_pointer; // 0x10
		::System::Int64 m_bytes; // 0x18
		::System::Int64 m_current; // 0x20
		::System::Int64 m_allocations; // 0x28

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYBLOCK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Rewind()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYBLOCK_REWIND_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYBLOCK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYBLOCK_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 TryAllocate(Block&* arg)
		{
			return (return (::System::Int32(*)(Block&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYBLOCK_TRYALLOCATE_OFFSET))(arg, nullptr);
		}

	};

