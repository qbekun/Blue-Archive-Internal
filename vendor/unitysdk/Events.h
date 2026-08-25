#pragma once
#include "unitysdk.h"

#define EVENTS_MEMORYSTREAMCREATED_OFFSET UNITYSDK_OFFSET(0x90E6890)
#define EVENTS_MEMORYSTREAMDISPOSED_OFFSET UNITYSDK_OFFSET(0x90E6D50)
#define EVENTS_MEMORYSTREAMDOUBLEDISPOSE_OFFSET UNITYSDK_OFFSET(0x90E72A0)
#define EVENTS_MEMORYSTREAMFINALIZED_OFFSET UNITYSDK_OFFSET(0x90E7850)
#define EVENTS_MEMORYSTREAMTOARRAY_OFFSET UNITYSDK_OFFSET(0x90E7DE0)
#define EVENTS_MEMORYSTREAMMANAGERINITIALIZED_OFFSET UNITYSDK_OFFSET(0x90E4580)
#define EVENTS_MEMORYSTREAMNEWBLOCKCREATED_OFFSET UNITYSDK_OFFSET(0x90E5D80)
#define EVENTS_MEMORYSTREAMNEWLARGEBUFFERCREATED_OFFSET UNITYSDK_OFFSET(0x90E5E30)
#define EVENTS_MEMORYSTREAMNONPOOLEDLARGEBUFFERCREATED_OFFSET UNITYSDK_OFFSET(0x90E5E80)
#define EVENTS_MEMORYSTREAMDISCARDBUFFER_OFFSET UNITYSDK_OFFSET(0x90E61E0)
#define EVENTS_MEMORYSTREAMOVERCAPACITY_OFFSET UNITYSDK_OFFSET(0x90E82D0)
#define EVENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E8A10)
#define EVENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90E8A20)

	inline static constexpr unsigned int Events_TypeDefinitionIndex = 37220;

	class Events : public Il2CppObject
	{
	public:
		Events* Writer; // 0x0

		::System::Void MemoryStreamCreated(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMCREATED_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void MemoryStreamDisposed(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMDISPOSED_OFFSET))(arg, str, arg, str, str, nullptr);
		}

		::System::Void MemoryStreamDoubleDispose(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMDOUBLEDISPOSE_OFFSET))(arg, str, str, str, str, nullptr);
		}

		::System::Void MemoryStreamFinalized(::System::Guid* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMFINALIZED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void MemoryStreamToArray(::System::Guid* arg, ::System::String* str, ::System::String* str, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMTOARRAY_OFFSET))(arg, str, str, arg, nullptr);
		}

		::System::Void MemoryStreamManagerInitialized(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMMANAGERINITIALIZED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MemoryStreamNewBlockCreated(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMNEWBLOCKCREATED_OFFSET))(arg, nullptr);
		}

		::System::Void MemoryStreamNewLargeBufferCreated(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMNEWLARGEBUFFERCREATED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MemoryStreamNonPooledLargeBufferCreated(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMNONPOOLEDLARGEBUFFERCREATED_OFFSET))(arg, str, arg, str, nullptr);
		}

		::System::Void MemoryStreamDiscardBuffer(::System::Guid* arg, ::System::String* str, MemoryStreamBufferType* arg, MemoryStreamDiscardReason* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, MemoryStreamBufferType*, MemoryStreamDiscardReason*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMDISCARDBUFFER_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MemoryStreamOverCapacity(::System::Guid* arg, ::System::String* str, ::System::Int64 arg, ::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Guid*, ::System::String*, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTS_MEMORYSTREAMOVERCAPACITY_OFFSET))(arg, str, arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTS_.CCTOR_OFFSET))(nullptr);
		}

	};

