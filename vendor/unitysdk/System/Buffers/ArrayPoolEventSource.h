#pragma once
#include "../../unitysdk.h"

#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92DBAD0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET UNITYSDK_OFFSET(0x92DBB80)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x92DBC80)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET UNITYSDK_OFFSET(0x92DBDA0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERTRIMMED_OFFSET UNITYSDK_OFFSET(0x92DBDC0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERTRIMPOLL_OFFSET UNITYSDK_OFFSET(0x92DBDE0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92DBE00)

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_TypeDefinitionIndex = 25191;

	class ArrayPoolEventSource : public Il2CppObject
	{
	public:
		::System::Buffers::ArrayPoolEventSource* Log; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BufferRented(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRENTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BufferAllocated(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, BufferAllocatedReason* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, BufferAllocatedReason*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERALLOCATED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void BufferReturned(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERRETURNED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BufferTrimmed(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERTRIMMED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BufferTrimPoll(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_BUFFERTRIMPOLL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

