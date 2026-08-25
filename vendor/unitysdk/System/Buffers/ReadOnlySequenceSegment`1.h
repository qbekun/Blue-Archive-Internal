#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_MEMORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_RUNNINGINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_RUNNINGINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequenceSegment`1_TypeDefinitionIndex = 25209;

	class ReadOnlySequenceSegment`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _Memory_k__BackingField; // 0x0
		Il2CppObject* _Next_k__BackingField; // 0x0
		::System::Int64 _RunningIndex_k__BackingField; // 0x0

		Il2CppObject* get_Memory()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_MEMORY_OFFSET))(nullptr);
		}

		::System::Void set_Memory(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_MEMORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_NEXT_OFFSET))(nullptr);
		}

		::System::Void set_Next(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RunningIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_GET_RUNNINGINDEX_OFFSET))(nullptr);
		}

		::System::Void set_RunningIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_SET_RUNNINGINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCESEGMENT`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

