#pragma once
#include "unitysdk.h"

#define BUFFERDISCARDEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E6680)

	inline static constexpr unsigned int BufferDiscardedEventArgs_TypeDefinitionIndex = 37215;

	class BufferDiscardedEventArgs : public Il2CppObject
	{
	public:
		::System::Guid* _Id_k__BackingField; // 0x10
		::System::String* _Tag_k__BackingField; // 0x20
		MemoryStreamBufferType* _BufferType_k__BackingField; // 0x28
		MemoryStreamDiscardReason* _Reason_k__BackingField; // 0x2C

		::System::Void .ctor(::System::Guid* arg, ::System::String* str, MemoryStreamBufferType* arg, MemoryStreamDiscardReason* arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, MemoryStreamBufferType*, MemoryStreamDiscardReason*, ::PVOID))((::PBYTE)hIl2Cpp + BUFFERDISCARDEDEVENTARGS_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};

