#pragma once
#include "../../unitysdk.h"

namespace ToyWebViewShared::SharedMemory { class NXPSharedMemoryStream; }
namespace ToyWebViewShared::SharedMemory { class NXPSharedMemoryStream&; }
namespace ToyWebViewShared::Messages { class Message; }

#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_GET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9BAD940)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SET_BUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9BAD9A0)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_GET_INITIALSHMSIZE_OFFSET UNITYSDK_OFFSET(0x9BADA00)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SET_INITIALSHMSIZE_OFFSET UNITYSDK_OFFSET(0x9BADA50)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SETBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x9BADAB0)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_CALCULATERECOMMENDEDSHMSIZE_OFFSET UNITYSDK_OFFSET(0x9BADE00)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BADE40)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_CREATESHAREDMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x9BADF80)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x9BAE410)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_STOP_OFFSET UNITYSDK_OFFSET(0x9BAE530)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_DESTROYSTREAM_OFFSET UNITYSDK_OFFSET(0x9BAE790)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SEND_OFFSET UNITYSDK_OFFSET(0x9BAEB60)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BAED90)

namespace ToyWebViewShared::SharedMemory
{
	inline static constexpr unsigned int NXPSharedMemory_TypeDefinitionIndex = 25407;

	class NXPSharedMemory : public Il2CppObject
	{
	public:
		::System::Int32 MIN_BUFFER_SIZE; // 0x0
		::System::Int32 _bufferSize; // 0x0
		::System::UInt64 _InitialShmSize_k__BackingField; // 0x8
		::System::String* namePrefix; // 0x10
		::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* sender; // 0x18
		::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream* receiver; // 0x20
		::System::Action* onDisconnected; // 0x28
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x30
		::System::Object* _locker; // 0x38
		::System::Boolean _isDisposing; // 0x40

		::System::Int32 get_BufferSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_GET_BUFFERSIZE_OFFSET))(nullptr);
		}

		::System::Void set_BufferSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SET_BUFFERSIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_InitialShmSize()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_GET_INITIALSHMSIZE_OFFSET))(nullptr);
		}

		::System::Void set_InitialShmSize(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SET_INITIALSHMSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetBufferSize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SETBUFFERSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 CalculateRecommendedShmSize(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt64(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_CALCULATERECOMMENDEDSHMSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void CreateSharedMemoryStream(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_CREATESHAREDMEMORYSTREAM_OFFSET))(str, str, str, nullptr);
		}

		::System::Boolean IsRunning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_ISRUNNING_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_STOP_OFFSET))(nullptr);
		}

		::System::Void DestroyStream(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream&* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::SharedMemory::NXPSharedMemoryStream&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_DESTROYSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void Send(::ToyWebViewShared::Messages::Message* arg)
		{
			((::System::Void(*)(::ToyWebViewShared::Messages::Message*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_SEND_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

