#pragma once
#include "../../unitysdk.h"

#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BAE210)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_INITIALIZEPINNEDBUFFERS_OFFSET UNITYSDK_OFFSET(0x9BAF350)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_FREEPINNEDBUFFERS_OFFSET UNITYSDK_OFFSET(0x9BAF410)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_TRYBIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9BAEF50)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CREATESHAREDMEMORYOBJECT_OFFSET UNITYSDK_OFFSET(0x9BAF270)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CONNECT_OFFSET UNITYSDK_OFFSET(0x9BAF4C0)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_OPEN_OFFSET UNITYSDK_OFFSET(0x9BAF550)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CONNECTED_OFFSET UNITYSDK_OFFSET(0x9BAF5E0)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x9BAF650)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_RESIZE_OFFSET UNITYSDK_OFFSET(0x9BAF780)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x9BAF900)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x9BAFC20)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_ACQUIREWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x9BB0080)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_COMMITWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x9BB0210)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_ACQUIREREADBUFFER_OFFSET UNITYSDK_OFFSET(0x9BB03A0)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_RELEASEREADBUFFER_OFFSET UNITYSDK_OFFSET(0x9BB0530)
#define TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BAE850)

namespace ToyWebViewShared::SharedMemory
{
	inline static constexpr unsigned int NXPSharedMemoryStream_TypeDefinitionIndex = 25423;

	class NXPSharedMemoryStream : public Il2CppObject
	{
	public:
		::System::Int32 _dllHandle; // 0x10
		::System::Int32 _sharedMemoryHandle; // 0x18
		::System::Boolean _isDisconnected; // 0x20
		::System::Boolean _disposed; // 0x21
		::Il2CppArray<::System::Object*>* _pinnedReadBuffer; // 0x28
		::Il2CppArray<::System::Object*>* _pinnedWriteBuffer; // 0x30
		::System::Runtime::InteropServices::GCHandle* _readBufferHandle; // 0x38
		::System::Runtime::InteropServices::GCHandle* _writeBufferHandle; // 0x40
		::System::Int32 _readBufferPtr; // 0x48
		::System::Int32 _writeBufferPtr; // 0x50
		::System::Int32 _bufferSize; // 0x58
		InitializeSharedMemory* _funcInitializeSharedMemory; // 0x60
		DestroySharedMemory* _funcDestroySharedMemory; // 0x68
		CreateSharedMemory* _funcCreateSharedMemory; // 0x70
		OpenSharedMemory* _funcOpenSharedMemory; // 0x78
		CloseSharedMemory* _funcCloseSharedMemory; // 0x80
		ResizeSharedMemory* _funcResizeSharedMemory; // 0x88
		ReadMessageData* _funcReadMessageData; // 0x90
		WriteMessageData* _funcWriteMessageData; // 0x98
		AcquireWriteBufferDelegate* _funcAcquireWriteBuffer; // 0xA0
		CommitWriteBufferDelegate* _funcCommitWriteBuffer; // 0xA8
		AcquireReadBufferDelegate* _funcAcquireReadBuffer; // 0xB0
		ReleaseReadBufferDelegate* _funcReleaseReadBuffer; // 0xB8
		::System::String* _libName; // 0xC0
		::System::String* _sharedMemoryName; // 0xC8
		::System::UInt64 _initialShmSize; // 0xD0
		::System::Int64 _direction; // 0xD8
		::System::Int32 _type; // 0xE0
		::System::Threading::CancellationToken* _cancellationToken; // 0xE8

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Threading::CancellationToken* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Threading::CancellationToken*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void InitializePinnedBuffers(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_INITIALIZEPINNEDBUFFERS_OFFSET))(arg, nullptr);
		}

		::System::Void FreePinnedBuffers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_FREEPINNEDBUFFERS_OFFSET))(nullptr);
		}

		::System::Void TryBind(::System::String* str, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_TRYBIND_OFFSET))(str, arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void CreateSharedMemoryObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CREATESHAREDMEMORYOBJECT_OFFSET))(nullptr);
		}

		::System::Int32 Connect()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CONNECT_OFFSET))(nullptr);
		}

		::System::Int32 Open()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_OPEN_OFFSET))(nullptr);
		}

		::System::Boolean Connected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_CONNECTED_OFFSET))(nullptr);
		}

		::System::Void Disconnect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_DISCONNECT_OFFSET))(nullptr);
		}

		::System::Int32 Resize(::System::UInt64 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_RESIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_READ_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Write(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_WRITE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 AcquireWriteBuffer(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_ACQUIREWRITEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 CommitWriteBuffer(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_COMMITWRITEBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Int32 AcquireReadBuffer(int32_t&* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_ACQUIREREADBUFFER_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseReadBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_RELEASEREADBUFFER_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_SHAREDMEMORY_NXPSHAREDMEMORYSTREAM_DISPOSE_OFFSET))(nullptr);
		}

	};
}

