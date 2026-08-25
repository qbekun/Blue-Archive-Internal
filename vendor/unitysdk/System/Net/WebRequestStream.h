#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBREQUESTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A87EF0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_INNERSTREAM_OFFSET UNITYSDK_OFFSET(0x9A880A0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A880B0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9A880C0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9A880D0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_HASWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x9A880E0)
#define SYSTEM_NET_WEBREQUESTSTREAM_GET_WRITEBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x9A88110)
#define SYSTEM_NET_WEBREQUESTSTREAM_GETWRITEBUFFER_OFFSET UNITYSDK_OFFSET(0x9A88160)
#define SYSTEM_NET_WEBREQUESTSTREAM_FINISHWRITING_OFFSET UNITYSDK_OFFSET(0x9A88240)
#define SYSTEM_NET_WEBREQUESTSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9A88320)
#define SYSTEM_NET_WEBREQUESTSTREAM_WRITEASYNCINNER_OFFSET UNITYSDK_OFFSET(0x9A885D0)
#define SYSTEM_NET_WEBREQUESTSTREAM_PROCESSWRITE_OFFSET UNITYSDK_OFFSET(0x9A88720)
#define SYSTEM_NET_WEBREQUESTSTREAM_CHECKWRITEOVERFLOW_OFFSET UNITYSDK_OFFSET(0x9A88850)
#define SYSTEM_NET_WEBREQUESTSTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A86820)
#define SYSTEM_NET_WEBREQUESTSTREAM_SETHEADERSASYNC_OFFSET UNITYSDK_OFFSET(0x9A88920)
#define SYSTEM_NET_WEBREQUESTSTREAM_WRITEREQUESTASYNC_OFFSET UNITYSDK_OFFSET(0x9A88A20)
#define SYSTEM_NET_WEBREQUESTSTREAM_WRITECHUNKTRAILER_INNER_OFFSET UNITYSDK_OFFSET(0x9A88B10)
#define SYSTEM_NET_WEBREQUESTSTREAM_WRITECHUNKTRAILER_OFFSET UNITYSDK_OFFSET(0x9A88BF0)
#define SYSTEM_NET_WEBREQUESTSTREAM_KILLBUFFER_OFFSET UNITYSDK_OFFSET(0x9A88900)
#define SYSTEM_NET_WEBREQUESTSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9A88CE0)
#define SYSTEM_NET_WEBREQUESTSTREAM_TRYREADFROMBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x9A88D80)
#define SYSTEM_NET_WEBREQUESTSTREAM_CLOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9A88DD0)
#define SYSTEM_NET_WEBREQUESTSTREAM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A88FA0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequestStream_TypeDefinitionIndex = 29827;

	class WebRequestStream : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* crlf; // 0x0
		::System::IO::MemoryStream* writeBuffer; // 0x58
		::System::Boolean requestWritten; // 0x60
		::System::Boolean allowBuffering; // 0x61
		::System::Boolean sendChunked; // 0x62
		::System::Net::WebCompletionSource* pendingWrite; // 0x68
		::System::Int64 totalWritten; // 0x70
		::Il2CppArray<::System::Object*>* headers; // 0x78
		::System::Boolean headersSent; // 0x80
		::System::Int32 completeRequestWritten; // 0x84
		::System::Int32 chunkTrailerWritten; // 0x88
		::System::IO::Stream* _InnerStream_k__BackingField; // 0x90
		::System::Boolean _KeepAlive_k__BackingField; // 0x98

		::System::Void .ctor(::System::Net::WebConnection* arg, ::System::Net::WebOperation* arg, ::System::IO::Stream* arg, ::System::Net::WebConnectionTunnel* arg)
		{
			((::System::Void(*)(::System::Net::WebConnection*, ::System::Net::WebOperation*, ::System::IO::Stream*, ::System::Net::WebConnectionTunnel*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IO::Stream* get_InnerStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_INNERSTREAM_OFFSET))(nullptr);
		}

		::System::Boolean get_KeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_KEEPALIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasWriteBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_HASWRITEBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_WriteBufferLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GET_WRITEBUFFERLENGTH_OFFSET))(nullptr);
		}

		::System::Net::BufferOffsetSize* GetWriteBuffer()
		{
			return (return (::System::Net::BufferOffsetSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_GETWRITEBUFFER_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* FinishWriting(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_FINISHWRITING_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsyncInner(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Net::WebCompletionSource* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Net::WebCompletionSource*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_WRITEASYNCINNER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ProcessWrite(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_PROCESSWRITE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckWriteOverflow(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_CHECKWRITEOVERFLOW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* Initialize(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* SetHeadersAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_SETHEADERSASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteRequestAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_WRITEREQUESTASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteChunkTrailer_inner(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_WRITECHUNKTRAILER_INNER_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteChunkTrailer()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_WRITECHUNKTRAILER_OFFSET))(nullptr);
		}

		::System::Void KillBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_KILLBUFFER_OFFSET))(nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryReadFromBufferedContent(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_TRYREADFROMBUFFEREDCONTENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Close_internal(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_CLOSE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUESTSTREAM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

