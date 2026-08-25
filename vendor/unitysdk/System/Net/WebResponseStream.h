#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBRESPONSESTREAM_GET_REQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A8BFE0)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A8BFF0)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A8C000)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9A8C020)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9A8C030)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9A8C040)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9A8C050)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9A8C070)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x9A8C080)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A8C0A0)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A8C0B0)
#define SYSTEM_NET_WEBRESPONSESTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A86920)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x9A8C0C0)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x9A8C0D0)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_CHUNKEDREAD_OFFSET UNITYSDK_OFFSET(0x9A8C0E0)
#define SYSTEM_NET_WEBRESPONSESTREAM_SET_CHUNKEDREAD_OFFSET UNITYSDK_OFFSET(0x9A8C0F0)
#define SYSTEM_NET_WEBRESPONSESTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x9A8C100)
#define SYSTEM_NET_WEBRESPONSESTREAM_PROCESSREAD_OFFSET UNITYSDK_OFFSET(0x9A8C270)
#define SYSTEM_NET_WEBRESPONSESTREAM_TRYREADFROMBUFFEREDCONTENT_OFFSET UNITYSDK_OFFSET(0x9A8C510)
#define SYSTEM_NET_WEBRESPONSESTREAM_GET_EXPECTCONTENT_OFFSET UNITYSDK_OFFSET(0x9A8C5C0)
#define SYSTEM_NET_WEBRESPONSESTREAM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A8C650)
#define SYSTEM_NET_WEBRESPONSESTREAM_READALLASYNCINNER_OFFSET UNITYSDK_OFFSET(0x9A8CDB0)
#define SYSTEM_NET_WEBRESPONSESTREAM_READALLASYNC_OFFSET UNITYSDK_OFFSET(0x9A8CED0)
#define SYSTEM_NET_WEBRESPONSESTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x9A8CFE0)
#define SYSTEM_NET_WEBRESPONSESTREAM_CLOSE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x9A8D070)
#define SYSTEM_NET_WEBRESPONSESTREAM_GETREADEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A8D110)
#define SYSTEM_NET_WEBRESPONSESTREAM_INITREADASYNC_OFFSET UNITYSDK_OFFSET(0x9A869C0)
#define SYSTEM_NET_WEBRESPONSESTREAM_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A8D3C0)

namespace System::Net
{
	inline static constexpr unsigned int WebResponseStream_TypeDefinitionIndex = 29833;

	class WebResponseStream : public Il2CppObject
	{
	public:
		::System::Net::WebReadStream* innerStream; // 0x58
		::System::Boolean nextReadCalled; // 0x60
		::System::Boolean bufferedEntireContent; // 0x61
		::System::Net::WebCompletionSource* pendingRead; // 0x68
		::System::Object* locker; // 0x70
		::System::Int32 nestedRead; // 0x78
		::System::Boolean read_eof; // 0x7C
		::System::Net::WebRequestStream* _RequestStream_k__BackingField; // 0x80
		::System::Net::WebHeaderCollection* _Headers_k__BackingField; // 0x88
		::System::Net::HttpStatusCode* _StatusCode_k__BackingField; // 0x90
		::System::String* _StatusDescription_k__BackingField; // 0x98
		::System::Version* _Version_k__BackingField; // 0xA0
		::System::Boolean _KeepAlive_k__BackingField; // 0xA8
		::System::Boolean _ChunkedRead_k__BackingField; // 0xA9

		::System::Net::WebRequestStream* get_RequestStream()
		{
			return (return (::System::Net::WebRequestStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_REQUESTSTREAM_OFFSET))(nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_HEADERS_OFFSET))(arg, nullptr);
		}

		::System::Net::HttpStatusCode* get_StatusCode()
		{
			return (return (::System::Net::HttpStatusCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Void set_StatusCode(::System::Net::HttpStatusCode* arg)
		{
			((::System::Void(*)(::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_StatusDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_STATUSDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_StatusDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_STATUSDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Version* get_Version()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_KeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_KEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void set_KeepAlive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_KEEPALIVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Net::WebRequestStream* arg)
		{
			((::System::Void(*)(::System::Net::WebRequestStream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_CANREAD_OFFSET))(nullptr);
		}

		::System::Boolean get_CanWrite()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_CANWRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_ChunkedRead()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_CHUNKEDREAD_OFFSET))(nullptr);
		}

		::System::Void set_ChunkedRead(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_SET_CHUNKEDREAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_READASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* ProcessRead(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_PROCESSREAD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryReadFromBufferedContent(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_TRYREADFROMBUFFEREDCONTENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_ExpectContent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GET_EXPECTCONTENT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Net::BufferOffsetSize* arg)
		{
			((::System::Void(*)(::System::Net::BufferOffsetSize*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAllAsyncInner(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_READALLASYNCINNER_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadAllAsync(::System::Boolean arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Boolean, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_READALLASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_WRITEASYNC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Close_internal(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_CLOSE_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus* arg, ::System::Exception* arg, ::System::String* str)
		{
			return (return (::System::Net::WebException*(*)(::System::Net::WebExceptionStatus*, ::System::Exception*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GETREADEXCEPTION_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_INITREADASYNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetResponse(::System::Net::BufferOffsetSize* arg, int32_t&* arg, ::System::Net::ReadState&* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::BufferOffsetSize*, int32_t&*, ::System::Net::ReadState&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBRESPONSESTREAM_GETRESPONSE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

