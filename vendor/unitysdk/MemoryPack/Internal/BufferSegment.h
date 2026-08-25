#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENBUFFER_OFFSET UNITYSDK_OFFSET(0x906F420)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x906F8A0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_FREEBUFFER_OFFSET UNITYSDK_OFFSET(0x906F7F0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x906F4C0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x90716F0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_ADVANCE_OFFSET UNITYSDK_OFFSET(0x90718A0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENMEMORY_OFFSET UNITYSDK_OFFSET(0x90703B0)
#define MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x90718B0)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int BufferSegment_TypeDefinitionIndex = 35454;

	class BufferSegment : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* buffer; // 0x10
		::System::Int32 written; // 0x18

		Il2CppObject* get_WrittenBuffer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENBUFFER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FreeBuffer()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_FREEBUFFER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_ISNULL_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Advance(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_ADVANCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WrittenMemory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENMEMORY_OFFSET))(nullptr);
		}

		::System::Int32 get_WrittenCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_BUFFERSEGMENT_GET_WRITTENCOUNT_OFFSET))(nullptr);
		}

	};
}

