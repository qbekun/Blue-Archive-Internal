#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_MEMORYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DBF10)
#define SYSTEM_BUFFERS_MEMORYHANDLE_GET_POINTER_OFFSET UNITYSDK_OFFSET(0x92DBF30)
#define SYSTEM_BUFFERS_MEMORYHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92DBF40)

namespace System::Buffers
{
	inline static constexpr unsigned int MemoryHandle_TypeDefinitionIndex = 25193;

	class MemoryHandle : public Il2CppObject
	{
	public:
		::System::Object** _pointer; // 0x10
		::System::Runtime::InteropServices::GCHandle* _handle; // 0x18
		::System::Buffers::IPinnable* _pinnable; // 0x20

		::System::Void .ctor(::System::Object** arg, ::System::Runtime::InteropServices::GCHandle* arg, ::System::Buffers::IPinnable* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Runtime::InteropServices::GCHandle*, ::System::Buffers::IPinnable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYHANDLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object** get_Pointer()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYHANDLE_GET_POINTER_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_MEMORYHANDLE_DISPOSE_OFFSET))(nullptr);
		}

	};
}

