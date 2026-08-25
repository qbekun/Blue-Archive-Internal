#pragma once
#include "unitysdk.h"

#define UNMANAGEDMEMORY_GET_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x9E6A8D0)
#define UNMANAGEDMEMORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E61710)
#define UNMANAGEDMEMORY_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9E6A8E0)
#define UNMANAGEDMEMORY_CLONE_OFFSET UNITYSDK_OFFSET(0x9E61920)
#define UNMANAGEDMEMORY_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9E6AA40)
#define UNMANAGEDMEMORY_COPYDATAFROM_OFFSET UNITYSDK_OFFSET(0x9E6AA90)

	inline static constexpr unsigned int UnmanagedMemory_TypeDefinitionIndex = 28424;

	class UnmanagedMemory : public Il2CppObject
	{
	public:
		::System::Object** basePtr; // 0x10
		::System::Int32 mapCount; // 0x18
		::System::Int32 actionCount; // 0x1C
		::System::Int32 interactionCount; // 0x20
		::System::Int32 bindingCount; // 0x24
		::System::Int32 controlCount; // 0x28
		::System::Int32 compositeCount; // 0x2C
		::System::Object** actionStates; // 0x30
		::System::Object** bindingStates; // 0x38
		::System::Object** interactionStates; // 0x40
		::System::Object** controlMagnitudes; // 0x48
		::System::Object** compositeMagnitudes; // 0x50
		::System::Object** enabledControls; // 0x58
		::System::Object** actionBindingIndicesAndCounts; // 0x60
		::System::Object** actionBindingIndices; // 0x68
		::System::Object** controlIndexToBindingIndex; // 0x70
		::System::Object** controlGroupingAndComplexity; // 0x78
		::System::Boolean controlGroupingInitialized; // 0x80
		::System::Object** mapIndices; // 0x88

		::System::Boolean get_isAllocated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_GET_ISALLOCATED_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Allocate(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_ALLOCATE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		UnmanagedMemory* Clone()
		{
			return (return (UnmanagedMemory*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_sizeInBytes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_GET_SIZEINBYTES_OFFSET))(nullptr);
		}

		::System::Void CopyDataFrom(UnmanagedMemory* arg)
		{
			((::System::Void(*)(UnmanagedMemory*, ::PVOID))((::PBYTE)hIl2Cpp + UNMANAGEDMEMORY_COPYDATAFROM_OFFSET))(arg, nullptr);
		}

	};

