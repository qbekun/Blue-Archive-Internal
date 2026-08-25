#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x906E000)
#define MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETFILLEDBUFFER_OFFSET UNITYSDK_OFFSET(0x906E010)
#define MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x906E0A0)
#define MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x906E180)
#define MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x906E2B0)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int FixedArrayBufferWriter_TypeDefinitionIndex = 35445;

	class FixedArrayBufferWriter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::Int32 written; // 0x18

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_ADVANCE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFilledBuffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETFILLEDBUFFER_OFFSET))(nullptr);
		}

		Il2CppObject* GetMemory(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETMEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSpan(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_GETSPAN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_FIXEDARRAYBUFFERWRITER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

