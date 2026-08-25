#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_MEMORYMANAGER`1_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_GETSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_PIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_UNPIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_TRYGETARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_MEMORYMANAGER`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int MemoryManager`1_TypeDefinitionIndex = 25194;

	class MemoryManager`1 : public Il2CppObject
	{
	public:
		Il2CppObject* get_Memory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_GET_MEMORY_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpan()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_GETSPAN_OFFSET))(nullptr);
		}

		::System::Buffers::MemoryHandle* Pin(::System::Int32 arg)
		{
			return (return (::System::Buffers::MemoryHandle*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_PIN_OFFSET))(arg, nullptr);
		}

		::System::Void Unpin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_UNPIN_OFFSET))(nullptr);
		}

		::System::Boolean TryGetArray(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_TRYGETARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYMANAGER`1_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

