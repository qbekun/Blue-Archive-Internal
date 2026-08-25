#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x980FA20)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_LOADEDBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x9814300)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x98125C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x9814370)
#define SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x9814400)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9814480)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98144A0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x98144C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x98124E0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x98144D0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x98145C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x9814820)
#define SYSTEM_NET_HTTP_HTTPCONTENT_SERIALIZETOSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HTTPCONTENT_TRYCOMPUTELENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTP_HTTPCONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9812C90)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent_TypeDefinitionIndex = 36658;

	class HttpContent : public Il2CppObject
	{
	public:
		FixedMemoryStream* buffer; // 0x10
		::System::Boolean disposed; // 0x18
		::System::Net::Http::Headers::HttpContentHeaders* headers; // 0x20

		::System::Net::Http::Headers::HttpContentHeaders* get_Headers()
		{
			return (return (::System::Net::Http::Headers::HttpContentHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GET_HEADERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_LoadedBufferLength()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GET_LOADEDBUFFERLENGTH_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* arg, ::System::Net::TransportContext* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Net::TransportContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET))(arg, arg, nullptr);
		}

		FixedMemoryStream* CreateFixedMemoryStream(::System::Int64 arg)
		{
			return (return (FixedMemoryStream*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync(::System::Int64 arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAsStringAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET))(nullptr);
		}

		::System::Text::Encoding* GetEncodingFromBuffer(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Text::Encoding*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 StartsWith(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* arg, ::System::Net::TransportContext* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Net::TransportContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_SERIALIZETOSTREAMASYNC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryComputeLength(int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_TRYCOMPUTELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

