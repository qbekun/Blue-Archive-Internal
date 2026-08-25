#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression { class GZipDecompressor; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_SET_ISCOMPRESSED_OFFSET UNITYSDK_OFFSET(0x91A360)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x91A370)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_ADDHEADERS_OFFSET UNITYSDK_OFFSET(0x91A850)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_GET_EXPECTEDCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x91AD30)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_PROCESSDATA_OFFSET UNITYSDK_OFFSET(0x91AD40)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_SET_EXPECTEDCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x91AE80)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91AE90)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_GET_ISCOMPRESSED_OFFSET UNITYSDK_OFFSET(0x91AEE0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AEF0)
#define BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_FINISHPROCESSDATA_OFFSET UNITYSDK_OFFSET(0x91AF60)

namespace BestHTTP::Connections::HTTP2
{
	inline static constexpr unsigned int HTTP2Response_TypeDefinitionIndex = 23461;

	class HTTP2Response : public Il2CppObject
	{
	public:
		::System::Int32 _ExpectedContentLength_k__BackingField; // 0xB8
		::System::Boolean _IsCompressed_k__BackingField; // 0xBC
		::System::Boolean isPrepared; // 0xBD
		::BestHTTP::Decompression::GZipDecompressor* decompressor; // 0xC0

		::System::Void set_IsCompressed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_SET_ISCOMPRESSED_OFFSET))(arg, nullptr);
		}

		::System::Void AddData(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_ADDDATA_OFFSET))(arg, nullptr);
		}

		::System::Void AddHeaders(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_ADDHEADERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ExpectedContentLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_GET_EXPECTEDCONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void ProcessData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_PROCESSDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_ExpectedContentLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_SET_EXPECTEDCONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompressed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_GET_ISCOMPRESSED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishProcessData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CONNECTIONS_HTTP2_HTTP2RESPONSE_FINISHPROCESSDATA_OFFSET))(nullptr);
		}

	};
}

