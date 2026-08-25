#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class ByteBuffer; }

#define FLATBUFFERS_TABLE___OFFSET_OFFSET UNITYSDK_OFFSET(0x28A2130)
#define FLATBUFFERS_TABLE___INDIRECT_OFFSET UNITYSDK_OFFSET(0x28A21A0)
#define FLATBUFFERS_TABLE___STRING_OFFSET UNITYSDK_OFFSET(0x28A21D0)
#define FLATBUFFERS_TABLE___VECTOR_LEN_OFFSET UNITYSDK_OFFSET(0x28A2260)
#define FLATBUFFERS_TABLE___VECTOR_OFFSET UNITYSDK_OFFSET(0x28A22B0)
#define FLATBUFFERS_TABLE___VECTOR_AS_ARRAYSEGMENT_OFFSET UNITYSDK_OFFSET(0x28A22F0)

namespace FlatBuffers
{
	inline static constexpr unsigned int Table_TypeDefinitionIndex = 38042;

	class Table : public Il2CppObject
	{
	public:
		::System::Int32 bb_pos; // 0x10
		::FlatBuffers::ByteBuffer* bb; // 0x18

		::System::Int32 __offset(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___OFFSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 __indirect(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___INDIRECT_OFFSET))(arg, nullptr);
		}

		::System::String* __string(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___STRING_OFFSET))(arg, nullptr);
		}

		::System::Int32 __vector_len(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___VECTOR_LEN_OFFSET))(arg, nullptr);
		}

		::System::Int32 __vector(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___VECTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* __vector_as_arraysegment(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_TABLE___VECTOR_AS_ARRAYSEGMENT_OFFSET))(arg, nullptr);
		}

	};
}

