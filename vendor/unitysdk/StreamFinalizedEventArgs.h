#pragma once
#include "unitysdk.h"

#define STREAMFINALIZEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E7A90)

	inline static constexpr unsigned int StreamFinalizedEventArgs_TypeDefinitionIndex = 37210;

	class StreamFinalizedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		::System::String* _AllocationStack_k__BackingField; // 0x28

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STREAMFINALIZEDEVENTARGS_.CTOR_OFFSET))(arg, str, str, nullptr);
		}

	};

