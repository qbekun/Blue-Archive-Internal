#pragma once
#include "unitysdk.h"

#define STREAMOVERCAPACITYEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E85D0)

	inline static constexpr unsigned int StreamOverCapacityEventArgs_TypeDefinitionIndex = 37212;

	class StreamOverCapacityEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::String* _AllocationStack_k__BackingField; // 0x28
		::System::Int64 _RequestedCapacity_k__BackingField; // 0x30
		::System::Int64 _MaximumCapacity_k__BackingField; // 0x38

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STREAMOVERCAPACITYEVENTARGS_.CTOR_OFFSET))(arg, str, arg, arg, str, nullptr);
		}

	};

