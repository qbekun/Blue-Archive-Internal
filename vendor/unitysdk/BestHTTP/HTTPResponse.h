#pragma once
#include "../unitysdk.h"

namespace BestHTTP::Caching { class HTTPCacheFileInfo; }
namespace UnityEngine { class Texture2D; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPRange; }
namespace BestHTTP::Extensions { class BufferPoolMemoryStream; }

#define BESTHTTP_HTTPRESPONSE_GET_VERSIONMAJOR_OFFSET UNITYSDK_OFFSET(0x4E2B50)
#define BESTHTTP_HTTPRESPONSE_SET_VERSIONMAJOR_OFFSET UNITYSDK_OFFSET(0x4E2B60)
#define BESTHTTP_HTTPRESPONSE_GET_VERSIONMINOR_OFFSET UNITYSDK_OFFSET(0x4E2B70)
#define BESTHTTP_HTTPRESPONSE_SET_VERSIONMINOR_OFFSET UNITYSDK_OFFSET(0x4E2B80)
#define BESTHTTP_HTTPRESPONSE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x4E2B90)
#define BESTHTTP_HTTPRESPONSE_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x4E2BA0)
#define BESTHTTP_HTTPRESPONSE_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x4D8210)
#define BESTHTTP_HTTPRESPONSE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x4E2BB0)
#define BESTHTTP_HTTPRESPONSE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x4E2BC0)
#define BESTHTTP_HTTPRESPONSE_GET_ISSTREAMED_OFFSET UNITYSDK_OFFSET(0x4E2BD0)
#define BESTHTTP_HTTPRESPONSE_SET_ISSTREAMED_OFFSET UNITYSDK_OFFSET(0x4E2BE0)
#define BESTHTTP_HTTPRESPONSE_GET_ISFROMCACHE_OFFSET UNITYSDK_OFFSET(0x4E2BF0)
#define BESTHTTP_HTTPRESPONSE_SET_ISFROMCACHE_OFFSET UNITYSDK_OFFSET(0x4E2C00)
#define BESTHTTP_HTTPRESPONSE_GET_CACHEFILEINFO_OFFSET UNITYSDK_OFFSET(0x4E2C10)
#define BESTHTTP_HTTPRESPONSE_SET_CACHEFILEINFO_OFFSET UNITYSDK_OFFSET(0x4E2C20)
#define BESTHTTP_HTTPRESPONSE_GET_ISCACHEONLY_OFFSET UNITYSDK_OFFSET(0x4E2C30)
#define BESTHTTP_HTTPRESPONSE_SET_ISCACHEONLY_OFFSET UNITYSDK_OFFSET(0x4E2C40)
#define BESTHTTP_HTTPRESPONSE_GET_ISPROXYRESPONSE_OFFSET UNITYSDK_OFFSET(0x4E2C50)
#define BESTHTTP_HTTPRESPONSE_SET_ISPROXYRESPONSE_OFFSET UNITYSDK_OFFSET(0x4E2C60)
#define BESTHTTP_HTTPRESPONSE_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x4E2C70)
#define BESTHTTP_HTTPRESPONSE_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x4E2C80)
#define BESTHTTP_HTTPRESPONSE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x4E2C90)
#define BESTHTTP_HTTPRESPONSE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x4E2CA0)
#define BESTHTTP_HTTPRESPONSE_GET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x4E2CB0)
#define BESTHTTP_HTTPRESPONSE_SET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x4E2CC0)
#define BESTHTTP_HTTPRESPONSE_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x4E2CD0)
#define BESTHTTP_HTTPRESPONSE_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x4E2CE0)
#define BESTHTTP_HTTPRESPONSE_GET_DATAASTEXT_OFFSET UNITYSDK_OFFSET(0x4D7790)
#define BESTHTTP_HTTPRESPONSE_GET_DATAASTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x4D8550)
#define BESTHTTP_HTTPRESPONSE_GET_ISCLOSEDMANUALLY_OFFSET UNITYSDK_OFFSET(0x4E2CF0)
#define BESTHTTP_HTTPRESPONSE_SET_ISCLOSEDMANUALLY_OFFSET UNITYSDK_OFFSET(0x4E2D00)
#define BESTHTTP_HTTPRESPONSE_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4E2D10)
#define BESTHTTP_HTTPRESPONSE_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4E2D20)
#define BESTHTTP_HTTPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E2D30)
#define BESTHTTP_HTTPRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4E2E20)
#define BESTHTTP_HTTPRESPONSE_RECEIVE_OFFSET UNITYSDK_OFFSET(0x4E2FA0)
#define BESTHTTP_HTTPRESPONSE_READPAYLOAD_OFFSET UNITYSDK_OFFSET(0x4E4710)
#define BESTHTTP_HTTPRESPONSE_READHEADERS_OFFSET UNITYSDK_OFFSET(0x4E4410)
#define BESTHTTP_HTTPRESPONSE_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x4E6DA0)
#define BESTHTTP_HTTPRESPONSE_GETHEADERVALUES_OFFSET UNITYSDK_OFFSET(0x4E5EA0)
#define BESTHTTP_HTTPRESPONSE_GETFIRSTHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x4E7090)
#define BESTHTTP_HTTPRESPONSE_HASHEADERWITHVALUE_OFFSET UNITYSDK_OFFSET(0x4E4640)
#define BESTHTTP_HTTPRESPONSE_HASHEADER_OFFSET UNITYSDK_OFFSET(0x4E46F0)
#define BESTHTTP_HTTPRESPONSE_GETRANGE_OFFSET UNITYSDK_OFFSET(0x4E5F40)
#define BESTHTTP_HTTPRESPONSE_READTO_OFFSET UNITYSDK_OFFSET(0x4E3E40)
#define BESTHTTP_HTTPRESPONSE_READTO_OFFSET UNITYSDK_OFFSET(0x4E6A90)
#define BESTHTTP_HTTPRESPONSE_NOTRIMREADTO_OFFSET UNITYSDK_OFFSET(0x4E4150)
#define BESTHTTP_HTTPRESPONSE_READCHUNKLENGTH_OFFSET UNITYSDK_OFFSET(0x4E7140)
#define BESTHTTP_HTTPRESPONSE_READCHUNKED_OFFSET UNITYSDK_OFFSET(0x4E5380)
#define BESTHTTP_HTTPRESPONSE_READRAW_OFFSET UNITYSDK_OFFSET(0x4E4A10)
#define BESTHTTP_HTTPRESPONSE_READUNKNOWNSIZE_OFFSET UNITYSDK_OFFSET(0x4E6190)
#define BESTHTTP_HTTPRESPONSE_DECODESTREAM_OFFSET UNITYSDK_OFFSET(0x4E76F0)
#define BESTHTTP_HTTPRESPONSE_BEGINRECEIVESTREAMFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x4E7250)
#define BESTHTTP_HTTPRESPONSE_FEEDSTREAMFRAGMENT_OFFSET UNITYSDK_OFFSET(0x4E7370)
#define BESTHTTP_HTTPRESPONSE_FLUSHREMAININGFRAGMENTBUFFER_OFFSET UNITYSDK_OFFSET(0x4E75F0)
#define BESTHTTP_HTTPRESPONSE_ADDSTREAMEDFRAGMENT_OFFSET UNITYSDK_OFFSET(0x4E7C40)
#define BESTHTTP_HTTPRESPONSE_FRAGMENTQUEUEISFULL_OFFSET UNITYSDK_OFFSET(0x4E7AB0)
#define BESTHTTP_HTTPRESPONSE_VERBOSELOGGING_OFFSET UNITYSDK_OFFSET(0x4E3C70)
#define BESTHTTP_HTTPRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4E1FF0)
#define BESTHTTP_HTTPRESPONSE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x4E7E80)
#define BESTHTTP_HTTPRESPONSE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4E7F50)
#define BESTHTTP_HTTPRESPONSE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4E8050)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPResponse_TypeDefinitionIndex = 21314;

	class HTTPResponse : public Il2CppObject
	{
	public:
		::System::Byte CR; // 0x0
		::System::Byte LF; // 0x0
		::System::Int32 MinReadBufferSize; // 0x0
		::System::Int32 _VersionMajor_k__BackingField; // 0x10
		::System::Int32 _VersionMinor_k__BackingField; // 0x14
		::System::Int32 _StatusCode_k__BackingField; // 0x18
		::System::String* _Message_k__BackingField; // 0x20
		::System::Boolean _IsStreamed_k__BackingField; // 0x28
		::System::Boolean _IsFromCache_k__BackingField; // 0x29
		::BestHTTP::Caching::HTTPCacheFileInfo* _CacheFileInfo_k__BackingField; // 0x30
		::System::Boolean _IsCacheOnly_k__BackingField; // 0x38
		::System::Boolean _IsProxyResponse_k__BackingField; // 0x39
		Il2CppObject* _Headers_k__BackingField; // 0x40
		::Il2CppArray<::System::Object*>* _Data_k__BackingField; // 0x48
		::System::Boolean _IsUpgraded_k__BackingField; // 0x50
		Il2CppObject* _Cookies_k__BackingField; // 0x58
		::System::String* dataAsText; // 0x60
		::UnityEngine::Texture2D* texture; // 0x68
		::System::Boolean _IsClosedManually_k__BackingField; // 0x70
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x78
		::System::Int64 UnprocessedFragments; // 0x80
		::BestHTTP::HTTPRequest* baseRequest; // 0x88
		::System::IO::Stream* Stream; // 0x90
		::Il2CppArray<::System::Object*>* fragmentBuffer; // 0x98
		::System::Int32 fragmentBufferDataLength; // 0xA0
		::System::IO::Stream* cacheStream; // 0xA8
		::System::Int32 allFragmentSize; // 0xB0

		::System::Int32 get_VersionMajor()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_VERSIONMAJOR_OFFSET))(nullptr);
		}

		::System::Void set_VersionMajor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_VERSIONMAJOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VersionMinor()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_VERSIONMINOR_OFFSET))(nullptr);
		}

		::System::Void set_VersionMinor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_VERSIONMINOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatusCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Void set_StatusCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSuccess()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISSUCCESS_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsStreamed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISSTREAMED_OFFSET))(nullptr);
		}

		::System::Void set_IsStreamed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISSTREAMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFromCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISFROMCACHE_OFFSET))(nullptr);
		}

		::System::Void set_IsFromCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISFROMCACHE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Caching::HTTPCacheFileInfo* get_CacheFileInfo()
		{
			return (return (::BestHTTP::Caching::HTTPCacheFileInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_CACHEFILEINFO_OFFSET))(nullptr);
		}

		::System::Void set_CacheFileInfo(::BestHTTP::Caching::HTTPCacheFileInfo* arg)
		{
			((::System::Void(*)(::BestHTTP::Caching::HTTPCacheFileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_CACHEFILEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCacheOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISCACHEONLY_OFFSET))(nullptr);
		}

		::System::Void set_IsCacheOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISCACHEONLY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsProxyResponse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISPROXYRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_IsProxyResponse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISPROXYRESPONSE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Void set_Headers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_HEADERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUpgraded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISUPGRADED_OFFSET))(nullptr);
		}

		::System::Void set_IsUpgraded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISUPGRADED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Cookies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_COOKIES_OFFSET))(nullptr);
		}

		::System::Void set_Cookies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_COOKIES_OFFSET))(arg, nullptr);
		}

		::System::String* get_DataAsText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_DATAASTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_DataAsTexture2D()
		{
			return (return (::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_DATAASTEXTURE2D_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClosedManually()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_ISCLOSEDMANUALLY_OFFSET))(nullptr);
		}

		::System::Void set_IsClosedManually(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_ISCLOSEDMANUALLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::HTTPRequest* arg, ::System::IO::Stream* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Receive(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_RECEIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ReadPayload(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READPAYLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void ReadHeaders(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READHEADERS_OFFSET))(arg, nullptr);
		}

		::System::Void AddHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_ADDHEADER_OFFSET))(str, str, nullptr);
		}

		Il2CppObject* GetHeaderValues(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GETHEADERVALUES_OFFSET))(str, nullptr);
		}

		::System::String* GetFirstHeaderValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GETFIRSTHEADERVALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean HasHeaderWithValue(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_HASHEADERWITHVALUE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean HasHeader(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_HASHEADER_OFFSET))(str, nullptr);
		}

		::BestHTTP::HTTPRange* GetRange()
		{
			return (return (::BestHTTP::HTTPRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_GETRANGE_OFFSET))(nullptr);
		}

		::System::String* ReadTo(::System::IO::Stream* arg, ::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READTO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ReadTo(::System::IO::Stream* arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* NoTrimReadTo(::System::IO::Stream* arg, ::System::Byte arg, ::System::Byte arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::System::Byte, ::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_NOTRIMREADTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ReadChunkLength(::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READCHUNKLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void ReadChunked(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READCHUNKED_OFFSET))(arg, nullptr);
		}

		::System::Void ReadRaw(::System::IO::Stream* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READRAW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadUnknownSize(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_READUNKNOWNSIZE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeStream(::BestHTTP::Extensions::BufferPoolMemoryStream* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::Extensions::BufferPoolMemoryStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_DECODESTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void BeginReceiveStreamFragments()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_BEGINRECEIVESTREAMFRAGMENTS_OFFSET))(nullptr);
		}

		::System::Void FeedStreamFragment(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_FEEDSTREAMFRAGMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FlushRemainingFragmentBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_FLUSHREMAININGFRAGMENTBUFFER_OFFSET))(nullptr);
		}

		::System::Void AddStreamedFragment(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_ADDSTREAMEDFRAGMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FragmentQueueIsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_FRAGMENTQUEUEISFULL_OFFSET))(nullptr);
		}

		::System::Void VerboseLogging(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_VERBOSELOGGING_OFFSET))(str, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPRESPONSE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

