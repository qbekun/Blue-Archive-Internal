#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x92DC090)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x92DC0A0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x92DC0B0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x92DC0C0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x92DC0D0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x92DC0E0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET UNITYSDK_OFFSET(0x92DC0F0)
#define SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET UNITYSDK_OFFSET(0x92DC100)

namespace System::Buffers
{
	inline static constexpr unsigned int ReadOnlySequence_TypeDefinitionIndex = 25207;

	class ReadOnlySequence : public Il2CppObject
	{
	public:
		::System::Int32 SegmentToSequenceStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 SegmentToSequenceEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_SEGMENTTOSEQUENCEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 ArrayToSequenceStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 ArrayToSequenceEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_ARRAYTOSEQUENCEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 MemoryManagerToSequenceStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 MemoryManagerToSequenceEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_MEMORYMANAGERTOSEQUENCEEND_OFFSET))(arg, nullptr);
		}

		::System::Int32 StringToSequenceStart(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCESTART_OFFSET))(arg, nullptr);
		}

		::System::Int32 StringToSequenceEnd(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_READONLYSEQUENCE_STRINGTOSEQUENCEEND_OFFSET))(arg, nullptr);
		}

	};
}

