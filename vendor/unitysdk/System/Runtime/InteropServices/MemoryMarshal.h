#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASBYTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASMEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETNONNULLPINNABLEREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETNONNULLPINNABLEREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_CREATESPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_CREATEREADONLYSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETMEMORYMANAGER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET UNITYSDK_OFFSET(0x9221ED0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MemoryMarshal_TypeDefinitionIndex = 24681;

	class MemoryMarshal : public Il2CppObject
	{
	public:
		Il2CppObject* AsBytes(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASBYTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsBytes(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASBYTES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsMemory(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_ASMEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* GetReference(Il2CppObject* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* GetReference(Il2CppObject* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* GetNonNullPinnableReference(Il2CppObject* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETNONNULLPINNABLEREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* GetNonNullPinnableReference(Il2CppObject* arg)
		{
			return (return (Il2CppObject&*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_GETNONNULLPINNABLEREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateSpan(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_CREATESPAN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateReadOnlySpan(Il2CppObject&* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_CREATEREADONLYSPAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetArray(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMemoryManager(Il2CppObject* arg, Il2CppObject&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETMEMORYMANAGER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetString(Il2CppObject* arg, ::System::String&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::String&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYGETSTRING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Write(Il2CppObject* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_WRITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryWrite(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MEMORYMARSHAL_TRYWRITE_OFFSET))(arg, arg, nullptr);
		}

	};
}

