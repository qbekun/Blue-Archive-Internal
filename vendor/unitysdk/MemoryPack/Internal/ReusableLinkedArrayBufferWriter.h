#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Internal { class BufferSegment; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x906E8D0)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_WRITETOANDRESET_OFFSET UNITYSDK_OFFSET(0x906E920)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x906F4D0)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_DANGEROUSGETFIRSTBUFFER_OFFSET UNITYSDK_OFFSET(0x906FA50)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_WRITETOANDRESETASYNC_OFFSET UNITYSDK_OFFSET(0x906AF00)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_RESETCORE_OFFSET UNITYSDK_OFFSET(0x906FA60)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_TOARRAYANDRESET_OFFSET UNITYSDK_OFFSET(0x9066820)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x906FAD0)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x906FAF0)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GET_TOTALWRITTEN_OFFSET UNITYSDK_OFFSET(0x906FB70)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_RESET_OFFSET UNITYSDK_OFFSET(0x906FB80)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9070050)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x906A690)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GET_USEFIRSTBUFFER_OFFSET UNITYSDK_OFFSET(0x906F3C0)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int ReusableLinkedArrayBufferWriter_TypeDefinitionIndex = 35453;

	class ReusableLinkedArrayBufferWriter : public Il2CppObject
	{
	public:
		::System::Int32 InitialBufferSize; // 0x0
		::Il2CppArray<::System::Object*>* noUseFirstBufferSentinel; // 0x0
		Il2CppObject* buffers; // 0x10
		::Il2CppArray<::System::Object*>* firstBuffer; // 0x18
		::System::Int32 firstBufferWritten; // 0x20
		::MemoryPack::Internal::BufferSegment* current; // 0x28
		::System::Int32 nextBufferSize; // 0x38
		::System::Int32 totalWritten; // 0x3C

		Il2CppObject* GetMemory(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteToAndReset(::MemoryPack::MemoryPackWriter&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_WRITETOANDRESET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETSPAN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DangerousGetFirstBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_DANGEROUSGETFIRSTBUFFER_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::ValueTask* WriteToAndResetAsync(::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::ValueTask*(*)(::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_WRITETOANDRESETASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetCore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_RESETCORE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArrayAndReset()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_TOARRAYANDRESET_OFFSET))(nullptr);
		}

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_ADVANCE_OFFSET))(arg, nullptr);
		}

		Enumerator* GetEnumerator()
		{
			return (return (Enumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalWritten()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GET_TOTALWRITTEN_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_RESET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_UseFirstBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITER_GET_USEFIRSTBUFFER_OFFSET))(nullptr);
		}

	};
}

