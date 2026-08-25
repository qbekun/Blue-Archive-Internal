#pragma once
#include "../unitysdk.h"

namespace BestHTTP { class HTTPMethods; }
namespace BestHTTP { class OnUploadProgressDelegate; }
namespace BestHTTP { class OnRequestFinishedDelegate; }
namespace BestHTTP { class OnStreamingDataDelegate; }
namespace BestHTTP { class OnDownloadProgressDelegate; }
namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::Authentication { class Credentials; }
namespace BestHTTP { class Proxy; }
namespace BestHTTP::Forms { class HTTPFormUsage; }
namespace BestHTTP { class HTTPRequestStates; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ICertificateVerifyer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class IClientCredentialsProvider; }
namespace BestHTTP { class OnBeforeRedirectionDelegate; }
namespace BestHTTP { class OnBeforeHeaderSendDelegate; }
namespace BestHTTP::Logger { class LoggingContext; }
namespace BestHTTP::Timings { class TimingCollector; }
namespace BestHTTP::Connections { class SupportedProtocols; }
namespace BestHTTP::Forms { class HTTPFormBase; }
namespace BestHTTP { class OnHeaderEnumerationDelegate; }
namespace BestHTTP { class HTTPRequest; }

#define BESTHTTP_HTTPREQUEST_GET_URI_OFFSET UNITYSDK_OFFSET(0x4DD020)
#define BESTHTTP_HTTPREQUEST_SET_URI_OFFSET UNITYSDK_OFFSET(0x4DD030)
#define BESTHTTP_HTTPREQUEST_GET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0x4DD040)
#define BESTHTTP_HTTPREQUEST_SET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0x4DD050)
#define BESTHTTP_HTTPREQUEST_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x4DD060)
#define BESTHTTP_HTTPREQUEST_SET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x4DD070)
#define BESTHTTP_HTTPREQUEST_GET_UPLOADSTREAM_OFFSET UNITYSDK_OFFSET(0x4DD080)
#define BESTHTTP_HTTPREQUEST_SET_UPLOADSTREAM_OFFSET UNITYSDK_OFFSET(0x4DD090)
#define BESTHTTP_HTTPREQUEST_GET_DISPOSEUPLOADSTREAM_OFFSET UNITYSDK_OFFSET(0x4DD0A0)
#define BESTHTTP_HTTPREQUEST_SET_DISPOSEUPLOADSTREAM_OFFSET UNITYSDK_OFFSET(0x4DD0B0)
#define BESTHTTP_HTTPREQUEST_GET_USEUPLOADSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x4DD0C0)
#define BESTHTTP_HTTPREQUEST_SET_USEUPLOADSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x4DD0D0)
#define BESTHTTP_HTTPREQUEST_GET_ISKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x4DD0E0)
#define BESTHTTP_HTTPREQUEST_SET_ISKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x4DD0F0)
#define BESTHTTP_HTTPREQUEST_GET_DISABLECACHE_OFFSET UNITYSDK_OFFSET(0x4DD170)
#define BESTHTTP_HTTPREQUEST_SET_DISABLECACHE_OFFSET UNITYSDK_OFFSET(0x4DD180)
#define BESTHTTP_HTTPREQUEST_GET_CACHEONLY_OFFSET UNITYSDK_OFFSET(0x4DD200)
#define BESTHTTP_HTTPREQUEST_SET_CACHEONLY_OFFSET UNITYSDK_OFFSET(0x4DD210)
#define BESTHTTP_HTTPREQUEST_GET_STREAMFRAGMENTSIZE_OFFSET UNITYSDK_OFFSET(0x4DD290)
#define BESTHTTP_HTTPREQUEST_SET_STREAMFRAGMENTSIZE_OFFSET UNITYSDK_OFFSET(0x4DD2A0)
#define BESTHTTP_HTTPREQUEST_GET_STREAMCHUNKSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x4DD360)
#define BESTHTTP_HTTPREQUEST_SET_STREAMCHUNKSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x4DD370)
#define BESTHTTP_HTTPREQUEST_GET_READBUFFERSIZEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x4DD380)
#define BESTHTTP_HTTPREQUEST_SET_READBUFFERSIZEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x4DD390)
#define BESTHTTP_HTTPREQUEST_GET_MAXFRAGMENTQUEUELENGTH_OFFSET UNITYSDK_OFFSET(0x4DD3A0)
#define BESTHTTP_HTTPREQUEST_SET_MAXFRAGMENTQUEUELENGTH_OFFSET UNITYSDK_OFFSET(0x4DD3B0)
#define BESTHTTP_HTTPREQUEST_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x4DD3C0)
#define BESTHTTP_HTTPREQUEST_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x4DD3D0)
#define BESTHTTP_HTTPREQUEST_GET_QUEUEDAT_OFFSET UNITYSDK_OFFSET(0x4DD3E0)
#define BESTHTTP_HTTPREQUEST_SET_QUEUEDAT_OFFSET UNITYSDK_OFFSET(0x4DD3F0)
#define BESTHTTP_HTTPREQUEST_GET_ISCONNECTTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x4DD400)
#define BESTHTTP_HTTPREQUEST_GET_PROCESSINGSTARTED_OFFSET UNITYSDK_OFFSET(0x4DD4E0)
#define BESTHTTP_HTTPREQUEST_SET_PROCESSINGSTARTED_OFFSET UNITYSDK_OFFSET(0x4DD4F0)
#define BESTHTTP_HTTPREQUEST_GET_ISTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x4DD500)
#define BESTHTTP_HTTPREQUEST_GET_RETRIES_OFFSET UNITYSDK_OFFSET(0x4DD630)
#define BESTHTTP_HTTPREQUEST_SET_RETRIES_OFFSET UNITYSDK_OFFSET(0x4DD640)
#define BESTHTTP_HTTPREQUEST_GET_MAXRETRIES_OFFSET UNITYSDK_OFFSET(0x4DD650)
#define BESTHTTP_HTTPREQUEST_SET_MAXRETRIES_OFFSET UNITYSDK_OFFSET(0x4DD660)
#define BESTHTTP_HTTPREQUEST_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x4DD670)
#define BESTHTTP_HTTPREQUEST_SET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x4DD680)
#define BESTHTTP_HTTPREQUEST_GET_ISREDIRECTED_OFFSET UNITYSDK_OFFSET(0x4DD690)
#define BESTHTTP_HTTPREQUEST_SET_ISREDIRECTED_OFFSET UNITYSDK_OFFSET(0x4DD6A0)
#define BESTHTTP_HTTPREQUEST_GET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x4DD6B0)
#define BESTHTTP_HTTPREQUEST_SET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x4DD6C0)
#define BESTHTTP_HTTPREQUEST_GET_CURRENTURI_OFFSET UNITYSDK_OFFSET(0x4D9C50)
#define BESTHTTP_HTTPREQUEST_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x4DD6E0)
#define BESTHTTP_HTTPREQUEST_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x4DD6F0)
#define BESTHTTP_HTTPREQUEST_GET_PROXYRESPONSE_OFFSET UNITYSDK_OFFSET(0x4DD710)
#define BESTHTTP_HTTPREQUEST_SET_PROXYRESPONSE_OFFSET UNITYSDK_OFFSET(0x4DD720)
#define BESTHTTP_HTTPREQUEST_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x4DD740)
#define BESTHTTP_HTTPREQUEST_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x4DD750)
#define BESTHTTP_HTTPREQUEST_GET_TAG_OFFSET UNITYSDK_OFFSET(0x4DD770)
#define BESTHTTP_HTTPREQUEST_SET_TAG_OFFSET UNITYSDK_OFFSET(0x4DD780)
#define BESTHTTP_HTTPREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x4DD7A0)
#define BESTHTTP_HTTPREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x4DD7B0)
#define BESTHTTP_HTTPREQUEST_GET_HASPROXY_OFFSET UNITYSDK_OFFSET(0x4DD7D0)
#define BESTHTTP_HTTPREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x4DD8D0)
#define BESTHTTP_HTTPREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x4DD8E0)
#define BESTHTTP_HTTPREQUEST_GET_MAXREDIRECTS_OFFSET UNITYSDK_OFFSET(0x4DD900)
#define BESTHTTP_HTTPREQUEST_SET_MAXREDIRECTS_OFFSET UNITYSDK_OFFSET(0x4DD910)
#define BESTHTTP_HTTPREQUEST_GET_USEALTERNATESSL_OFFSET UNITYSDK_OFFSET(0x4DD920)
#define BESTHTTP_HTTPREQUEST_SET_USEALTERNATESSL_OFFSET UNITYSDK_OFFSET(0x4DD930)
#define BESTHTTP_HTTPREQUEST_GET_ISCOOKIESENABLED_OFFSET UNITYSDK_OFFSET(0x4DD940)
#define BESTHTTP_HTTPREQUEST_SET_ISCOOKIESENABLED_OFFSET UNITYSDK_OFFSET(0x4DD950)
#define BESTHTTP_HTTPREQUEST_GET_COOKIES_OFFSET UNITYSDK_OFFSET(0x4DD960)
#define BESTHTTP_HTTPREQUEST_SET_COOKIES_OFFSET UNITYSDK_OFFSET(0x4DD9F0)
#define BESTHTTP_HTTPREQUEST_GET_FORMUSAGE_OFFSET UNITYSDK_OFFSET(0x4DDA10)
#define BESTHTTP_HTTPREQUEST_SET_FORMUSAGE_OFFSET UNITYSDK_OFFSET(0x4DDA20)
#define BESTHTTP_HTTPREQUEST_GET_STATE_OFFSET UNITYSDK_OFFSET(0x4D7ED0)
#define BESTHTTP_HTTPREQUEST_SET_STATE_OFFSET UNITYSDK_OFFSET(0x4DB6D0)
#define BESTHTTP_HTTPREQUEST_GET_REDIRECTCOUNT_OFFSET UNITYSDK_OFFSET(0x4DDA30)
#define BESTHTTP_HTTPREQUEST_SET_REDIRECTCOUNT_OFFSET UNITYSDK_OFFSET(0x4DDA40)
#define BESTHTTP_HTTPREQUEST_ADD_CUSTOMCERTIFICATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x4DDA50)
#define BESTHTTP_HTTPREQUEST_REMOVE_CUSTOMCERTIFICATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x4DDAF0)
#define BESTHTTP_HTTPREQUEST_GET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4DDB90)
#define BESTHTTP_HTTPREQUEST_SET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4DDBA0)
#define BESTHTTP_HTTPREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x4DDBB0)
#define BESTHTTP_HTTPREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x4DDBC0)
#define BESTHTTP_HTTPREQUEST_GET_ENABLETIMOUTFORSTREAMING_OFFSET UNITYSDK_OFFSET(0x4DDBD0)
#define BESTHTTP_HTTPREQUEST_SET_ENABLETIMOUTFORSTREAMING_OFFSET UNITYSDK_OFFSET(0x4DDBE0)
#define BESTHTTP_HTTPREQUEST_GET_ENABLESAFEREADONUNKNOWNCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x4DDBF0)
#define BESTHTTP_HTTPREQUEST_SET_ENABLESAFEREADONUNKNOWNCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x4DDC00)
#define BESTHTTP_HTTPREQUEST_GET_CUSTOMCERTIFICATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x4DDC10)
#define BESTHTTP_HTTPREQUEST_SET_CUSTOMCERTIFICATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x4DDC20)
#define BESTHTTP_HTTPREQUEST_GET_CUSTOMCLIENTCREDENTIALSPROVIDER_OFFSET UNITYSDK_OFFSET(0x4DDC40)
#define BESTHTTP_HTTPREQUEST_SET_CUSTOMCLIENTCREDENTIALSPROVIDER_OFFSET UNITYSDK_OFFSET(0x4DDC50)
#define BESTHTTP_HTTPREQUEST_GET_CUSTOMTLSSERVERNAMELIST_OFFSET UNITYSDK_OFFSET(0x4DDC70)
#define BESTHTTP_HTTPREQUEST_SET_CUSTOMTLSSERVERNAMELIST_OFFSET UNITYSDK_OFFSET(0x4DDC80)
#define BESTHTTP_HTTPREQUEST_ADD_ONBEFOREREDIRECTION_OFFSET UNITYSDK_OFFSET(0x4DDCA0)
#define BESTHTTP_HTTPREQUEST_REMOVE_ONBEFOREREDIRECTION_OFFSET UNITYSDK_OFFSET(0x4DDD30)
#define BESTHTTP_HTTPREQUEST_ADD_ONBEFOREHEADERSEND_OFFSET UNITYSDK_OFFSET(0x4DDDC0)
#define BESTHTTP_HTTPREQUEST_REMOVE_ONBEFOREHEADERSEND_OFFSET UNITYSDK_OFFSET(0x4DDE50)
#define BESTHTTP_HTTPREQUEST_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4DDEE0)
#define BESTHTTP_HTTPREQUEST_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x4DDEF0)
#define BESTHTTP_HTTPREQUEST_GET_TIMING_OFFSET UNITYSDK_OFFSET(0x4DDF10)
#define BESTHTTP_HTTPREQUEST_SET_TIMING_OFFSET UNITYSDK_OFFSET(0x4DDF20)
#define BESTHTTP_HTTPREQUEST_GET_PROTOCOLHANDLER_OFFSET UNITYSDK_OFFSET(0x4DDF40)
#define BESTHTTP_HTTPREQUEST_SET_PROTOCOLHANDLER_OFFSET UNITYSDK_OFFSET(0x4DDF50)
#define BESTHTTP_HTTPREQUEST_GET_USESTREAMING_OFFSET UNITYSDK_OFFSET(0x4DD620)
#define BESTHTTP_HTTPREQUEST_GET_UPLOADSTREAMLENGTH_OFFSET UNITYSDK_OFFSET(0x4DDF60)
#define BESTHTTP_HTTPREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x4DE030)
#define BESTHTTP_HTTPREQUEST_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x4DE040)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DE060)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DE1D0)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DE340)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DE430)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DE460)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DA980)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DAFA0)
#define BESTHTTP_HTTPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x4DB1D0)
#define BESTHTTP_HTTPREQUEST_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x4DE610)
#define BESTHTTP_HTTPREQUEST_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x4DE650)
#define BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x4DE700)
#define BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x4DE7E0)
#define BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x4DE720)
#define BESTHTTP_HTTPREQUEST_SETFORM_OFFSET UNITYSDK_OFFSET(0x4DE800)
#define BESTHTTP_HTTPREQUEST_GETFORMFIELDS_OFFSET UNITYSDK_OFFSET(0x4DE820)
#define BESTHTTP_HTTPREQUEST_CLEARFORM_OFFSET UNITYSDK_OFFSET(0x4DE8B0)
#define BESTHTTP_HTTPREQUEST_SELECTFORMIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x4DE900)
#define BESTHTTP_HTTPREQUEST_ADDHEADER_OFFSET UNITYSDK_OFFSET(0x4DEA00)
#define BESTHTTP_HTTPREQUEST_SETHEADER_OFFSET UNITYSDK_OFFSET(0x4DEBC0)
#define BESTHTTP_HTTPREQUEST_REMOVEHEADER_OFFSET UNITYSDK_OFFSET(0x4DEDB0)
#define BESTHTTP_HTTPREQUEST_HASHEADER_OFFSET UNITYSDK_OFFSET(0x4DEE10)
#define BESTHTTP_HTTPREQUEST_GETFIRSTHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x4DEE70)
#define BESTHTTP_HTTPREQUEST_GETHEADERVALUES_OFFSET UNITYSDK_OFFSET(0x4DEF20)
#define BESTHTTP_HTTPREQUEST_REMOVEHEADERS_OFFSET UNITYSDK_OFFSET(0x4DEFB0)
#define BESTHTTP_HTTPREQUEST_SETRANGEHEADER_OFFSET UNITYSDK_OFFSET(0x4DF000)
#define BESTHTTP_HTTPREQUEST_SETRANGEHEADER_OFFSET UNITYSDK_OFFSET(0x4DF090)
#define BESTHTTP_HTTPREQUEST_ENUMERATEHEADERS_OFFSET UNITYSDK_OFFSET(0x4DF140)
#define BESTHTTP_HTTPREQUEST_ENUMERATEHEADERS_OFFSET UNITYSDK_OFFSET(0x4DF150)
#define BESTHTTP_HTTPREQUEST_SENDHEADERS_OFFSET UNITYSDK_OFFSET(0x4E06D0)
#define BESTHTTP_HTTPREQUEST_DUMPHEADERS_OFFSET UNITYSDK_OFFSET(0x4E07B0)
#define BESTHTTP_HTTPREQUEST_GETENTITYBODY_OFFSET UNITYSDK_OFFSET(0x4E0640)
#define BESTHTTP_HTTPREQUEST_GETUPSTREAM_OFFSET UNITYSDK_OFFSET(0x4E0980)
#define BESTHTTP_HTTPREQUEST_SENDOUTTO_OFFSET UNITYSDK_OFFSET(0x4E0B70)
#define BESTHTTP_HTTPREQUEST_UPGRADECALLBACK_OFFSET UNITYSDK_OFFSET(0x4E1800)
#define BESTHTTP_HTTPREQUEST_CALLONBEFOREREDIRECTION_OFFSET UNITYSDK_OFFSET(0x4E1980)
#define BESTHTTP_HTTPREQUEST_PREPARE_OFFSET UNITYSDK_OFFSET(0x4E19C0)
#define BESTHTTP_HTTPREQUEST_CALLCUSTOMCERTIFICATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x4E19D0)
#define BESTHTTP_HTTPREQUEST_SEND_OFFSET UNITYSDK_OFFSET(0x4E1A10)
#define BESTHTTP_HTTPREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x4E1A60)
#define BESTHTTP_HTTPREQUEST_CLEAR_OFFSET UNITYSDK_OFFSET(0x4E1E20)
#define BESTHTTP_HTTPREQUEST_VERBOSELOGGING_OFFSET UNITYSDK_OFFSET(0x4E1D00)
#define BESTHTTP_HTTPREQUEST_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4E1EB0)
#define BESTHTTP_HTTPREQUEST_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4E1EC0)
#define BESTHTTP_HTTPREQUEST_RESET_OFFSET UNITYSDK_OFFSET(0x4E1EE0)
#define BESTHTTP_HTTPREQUEST_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_BESTHTTP.HTTPREQUEST_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4E1F30)
#define BESTHTTP_HTTPREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4E1F40)
#define BESTHTTP_HTTPREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4E2050)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPRequest_TypeDefinitionIndex = 21313;

	class HTTPRequest : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* EOL; // 0x0
		::Il2CppArray<::System::Object*>* MethodNames; // 0x8
		::System::Int32 UploadChunkSize; // 0x10
		::System::Uri* _Uri_k__BackingField; // 0x10
		::BestHTTP::HTTPMethods* _MethodType_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _RawData_k__BackingField; // 0x20
		::System::IO::Stream* _UploadStream_k__BackingField; // 0x28
		::System::Boolean _DisposeUploadStream_k__BackingField; // 0x30
		::System::Boolean _UseUploadStreamLength_k__BackingField; // 0x31
		::BestHTTP::OnUploadProgressDelegate* OnUploadProgress; // 0x38
		::System::Boolean _StreamChunksImmediately_k__BackingField; // 0x40
		::System::Int32 _ReadBufferSizeOverride_k__BackingField; // 0x44
		::System::Int32 _MaxFragmentQueueLength_k__BackingField; // 0x48
		::BestHTTP::OnRequestFinishedDelegate* _Callback_k__BackingField; // 0x50
		::System::DateTime* _QueuedAt_k__BackingField; // 0x58
		::System::DateTime* _ProcessingStarted_k__BackingField; // 0x60
		::BestHTTP::OnStreamingDataDelegate* OnStreamingData; // 0x68
		Il2CppObject* OnHeadersReceived; // 0x70
		::System::Int32 _Retries_k__BackingField; // 0x78
		::System::Int32 _MaxRetries_k__BackingField; // 0x7C
		::System::Boolean _IsCancellationRequested_k__BackingField; // 0x80
		::BestHTTP::OnDownloadProgressDelegate* OnDownloadProgress; // 0x88
		::System::Boolean _IsRedirected_k__BackingField; // 0x90
		::System::Uri* _RedirectUri_k__BackingField; // 0x98
		::BestHTTP::HTTPResponse* _Response_k__BackingField; // 0xA0
		::BestHTTP::HTTPResponse* _ProxyResponse_k__BackingField; // 0xA8
		::System::Exception* _Exception_k__BackingField; // 0xB0
		::System::Object* _Tag_k__BackingField; // 0xB8
		::BestHTTP::Authentication::Credentials* _Credentials_k__BackingField; // 0xC0
		::BestHTTP::Proxy* _Proxy_k__BackingField; // 0xC8
		::System::Int32 _MaxRedirects_k__BackingField; // 0xD0
		::System::Boolean _UseAlternateSSL_k__BackingField; // 0xD4
		::System::Boolean _IsCookiesEnabled_k__BackingField; // 0xD5
		Il2CppObject* customCookies; // 0xD8
		::BestHTTP::Forms::HTTPFormUsage* _FormUsage_k__BackingField; // 0xE0
		::BestHTTP::HTTPRequestStates* _state; // 0xE4
		::System::Int32 _RedirectCount_k__BackingField; // 0xE8
		Il2CppObject* CustomCertificationValidator; // 0xF0
		::System::TimeSpan* _ConnectTimeout_k__BackingField; // 0xF8
		::System::TimeSpan* _Timeout_k__BackingField; // 0x100
		::System::Boolean _EnableTimoutForStreaming_k__BackingField; // 0x108
		::System::Boolean _EnableSafeReadOnUnknownContentLength_k__BackingField; // 0x109
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* _CustomCertificateVerifyer_k__BackingField; // 0x110
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* _CustomClientCredentialsProvider_k__BackingField; // 0x118
		Il2CppObject* _CustomTLSServerNameList_k__BackingField; // 0x120
		::BestHTTP::OnBeforeRedirectionDelegate* onBeforeRedirection; // 0x128
		::BestHTTP::OnBeforeHeaderSendDelegate* _onBeforeHeaderSend; // 0x130
		::BestHTTP::Logger::LoggingContext* _Context_k__BackingField; // 0x138
		::BestHTTP::Timings::TimingCollector* _Timing_k__BackingField; // 0x140
		::BestHTTP::Connections::SupportedProtocols* _ProtocolHandler_k__BackingField; // 0x148
		::BestHTTP::OnRequestFinishedDelegate* OnUpgraded; // 0x150
		Il2CppObject* OnCancellationRequested; // 0x158
		::System::Boolean isKeepAlive; // 0x160
		::System::Boolean disableCache; // 0x161
		::System::Boolean cacheOnly; // 0x162
		::System::Int32 streamFragmentSize; // 0x164
		::System::Boolean useStreaming; // 0x168
		Il2CppObject* _Headers_k__BackingField; // 0x170
		::BestHTTP::Forms::HTTPFormBase* FieldCollector; // 0x178
		::BestHTTP::Forms::HTTPFormBase* FormImpl; // 0x180

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_URI_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPMethods* get_MethodType()
		{
			return (return (::BestHTTP::HTTPMethods*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_METHODTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MethodType(::BestHTTP::HTTPMethods* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPMethods*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_METHODTYPE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RawData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_RAWDATA_OFFSET))(nullptr);
		}

		::System::Void set_RawData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_RAWDATA_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* get_UploadStream()
		{
			return (return (::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_UPLOADSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_UploadStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_UPLOADSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisposeUploadStream()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_DISPOSEUPLOADSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_DisposeUploadStream(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_DISPOSEUPLOADSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseUploadStreamLength()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_USEUPLOADSTREAMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_UseUploadStreamLength(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_USEUPLOADSTREAMLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsKeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISKEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsKeepAlive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ISKEEPALIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisableCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_DISABLECACHE_OFFSET))(nullptr);
		}

		::System::Void set_DisableCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_DISABLECACHE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CacheOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CACHEONLY_OFFSET))(nullptr);
		}

		::System::Void set_CacheOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CACHEONLY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StreamFragmentSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_STREAMFRAGMENTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_StreamFragmentSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_STREAMFRAGMENTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StreamChunksImmediately()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_STREAMCHUNKSIMMEDIATELY_OFFSET))(nullptr);
		}

		::System::Void set_StreamChunksImmediately(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_STREAMCHUNKSIMMEDIATELY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ReadBufferSizeOverride()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_READBUFFERSIZEOVERRIDE_OFFSET))(nullptr);
		}

		::System::Void set_ReadBufferSizeOverride(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_READBUFFERSIZEOVERRIDE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxFragmentQueueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_MAXFRAGMENTQUEUELENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxFragmentQueueLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_MAXFRAGMENTQUEUELENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::OnRequestFinishedDelegate* get_Callback()
		{
			return (return (::BestHTTP::OnRequestFinishedDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_Callback(::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CALLBACK_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_QueuedAt()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_QUEUEDAT_OFFSET))(nullptr);
		}

		::System::Void set_QueuedAt(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_QUEUEDAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsConnectTimedOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISCONNECTTIMEDOUT_OFFSET))(nullptr);
		}

		::System::DateTime* get_ProcessingStarted()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_PROCESSINGSTARTED_OFFSET))(nullptr);
		}

		::System::Void set_ProcessingStarted(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_PROCESSINGSTARTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTimedOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISTIMEDOUT_OFFSET))(nullptr);
		}

		::System::Int32 get_Retries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_RETRIES_OFFSET))(nullptr);
		}

		::System::Void set_Retries(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_RETRIES_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxRetries()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_MAXRETRIES_OFFSET))(nullptr);
		}

		::System::Void set_MaxRetries(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_MAXRETRIES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISCANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Void set_IsCancellationRequested(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ISCANCELLATIONREQUESTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRedirected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISREDIRECTED_OFFSET))(nullptr);
		}

		::System::Void set_IsRedirected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ISREDIRECTED_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_RedirectUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_REDIRECTURI_OFFSET))(nullptr);
		}

		::System::Void set_RedirectUri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_REDIRECTURI_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_CurrentUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CURRENTURI_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPResponse* get_Response()
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_Response(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPResponse* get_ProxyResponse()
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_PROXYRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_ProxyResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_PROXYRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_Exception()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_EXCEPTION_OFFSET))(nullptr);
		}

		::System::Void set_Exception(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_EXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Tag()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_TAG_OFFSET))(nullptr);
		}

		::System::Void set_Tag(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_TAG_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Authentication::Credentials* get_Credentials()
		{
			return (return (::BestHTTP::Authentication::Credentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::BestHTTP::Authentication::Credentials* arg)
		{
			((::System::Void(*)(::BestHTTP::Authentication::Credentials*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasProxy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_HASPROXY_OFFSET))(nullptr);
		}

		::BestHTTP::Proxy* get_Proxy()
		{
			return (return (::BestHTTP::Proxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::BestHTTP::Proxy* arg)
		{
			((::System::Void(*)(::BestHTTP::Proxy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxRedirects()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_MAXREDIRECTS_OFFSET))(nullptr);
		}

		::System::Void set_MaxRedirects(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_MAXREDIRECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseAlternateSSL()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_USEALTERNATESSL_OFFSET))(nullptr);
		}

		::System::Void set_UseAlternateSSL(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_USEALTERNATESSL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCookiesEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ISCOOKIESENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsCookiesEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ISCOOKIESENABLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Cookies()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_COOKIES_OFFSET))(nullptr);
		}

		::System::Void set_Cookies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_COOKIES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Forms::HTTPFormUsage* get_FormUsage()
		{
			return (return (::BestHTTP::Forms::HTTPFormUsage*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_FORMUSAGE_OFFSET))(nullptr);
		}

		::System::Void set_FormUsage(::BestHTTP::Forms::HTTPFormUsage* arg)
		{
			((::System::Void(*)(::BestHTTP::Forms::HTTPFormUsage*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_FORMUSAGE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPRequestStates* get_State()
		{
			return (return (::BestHTTP::HTTPRequestStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::BestHTTP::HTTPRequestStates* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequestStates*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RedirectCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_REDIRECTCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_RedirectCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_REDIRECTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void add_CustomCertificationValidator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADD_CUSTOMCERTIFICATIONVALIDATOR_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CustomCertificationValidator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_REMOVE_CUSTOMCERTIFICATIONVALIDATOR_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_ConnectTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CONNECTTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ConnectTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CONNECTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_Timeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableTimoutForStreaming()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ENABLETIMOUTFORSTREAMING_OFFSET))(nullptr);
		}

		::System::Void set_EnableTimoutForStreaming(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ENABLETIMOUTFORSTREAMING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnableSafeReadOnUnknownContentLength()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_ENABLESAFEREADONUNKNOWNCONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_EnableSafeReadOnUnknownContentLength(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_ENABLESAFEREADONUNKNOWNCONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* get_CustomCertificateVerifyer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CUSTOMCERTIFICATEVERIFYER_OFFSET))(nullptr);
		}

		::System::Void set_CustomCertificateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CUSTOMCERTIFICATEVERIFYER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* get_CustomClientCredentialsProvider()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CUSTOMCLIENTCREDENTIALSPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_CustomClientCredentialsProvider(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CUSTOMCLIENTCREDENTIALSPROVIDER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CustomTLSServerNameList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CUSTOMTLSSERVERNAMELIST_OFFSET))(nullptr);
		}

		::System::Void set_CustomTLSServerNameList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CUSTOMTLSSERVERNAMELIST_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnBeforeRedirection(::BestHTTP::OnBeforeRedirectionDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnBeforeRedirectionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADD_ONBEFOREREDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnBeforeRedirection(::BestHTTP::OnBeforeRedirectionDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnBeforeRedirectionDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_REMOVE_ONBEFOREREDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnBeforeHeaderSend(::BestHTTP::OnBeforeHeaderSendDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnBeforeHeaderSendDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADD_ONBEFOREHEADERSEND_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnBeforeHeaderSend(::BestHTTP::OnBeforeHeaderSendDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnBeforeHeaderSendDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_REMOVE_ONBEFOREHEADERSEND_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Logger::LoggingContext* get_Context()
		{
			return (return (::BestHTTP::Logger::LoggingContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::BestHTTP::Logger::LoggingContext* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::LoggingContext*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Timings::TimingCollector* get_Timing()
		{
			return (return (::BestHTTP::Timings::TimingCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_TIMING_OFFSET))(nullptr);
		}

		::System::Void set_Timing(::BestHTTP::Timings::TimingCollector* arg)
		{
			((::System::Void(*)(::BestHTTP::Timings::TimingCollector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_TIMING_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Connections::SupportedProtocols* get_ProtocolHandler()
		{
			return (return (::BestHTTP::Connections::SupportedProtocols*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_PROTOCOLHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolHandler(::BestHTTP::Connections::SupportedProtocols* arg)
		{
			((::System::Void(*)(::BestHTTP::Connections::SupportedProtocols*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_PROTOCOLHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseStreaming()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_USESTREAMING_OFFSET))(nullptr);
		}

		::System::Int64 get_UploadStreamLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_UPLOADSTREAMLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Void set_Headers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SET_HEADERS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Boolean, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::System::Boolean, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDFIELD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET))(str, arg, str, nullptr);
		}

		::System::Void AddBinaryData(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDBINARYDATA_OFFSET))(str, arg, str, str, nullptr);
		}

		::System::Void SetForm(::BestHTTP::Forms::HTTPFormBase* arg)
		{
			((::System::Void(*)(::BestHTTP::Forms::HTTPFormBase*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SETFORM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFormFields()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GETFORMFIELDS_OFFSET))(nullptr);
		}

		::System::Void ClearForm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_CLEARFORM_OFFSET))(nullptr);
		}

		::BestHTTP::Forms::HTTPFormBase* SelectFormImplementation()
		{
			return (return (::BestHTTP::Forms::HTTPFormBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SELECTFORMIMPLEMENTATION_OFFSET))(nullptr);
		}

		::System::Void AddHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ADDHEADER_OFFSET))(str, str, nullptr);
		}

		::System::Void SetHeader(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SETHEADER_OFFSET))(str, str, nullptr);
		}

		::System::Boolean RemoveHeader(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_REMOVEHEADER_OFFSET))(str, nullptr);
		}

		::System::Boolean HasHeader(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_HASHEADER_OFFSET))(str, nullptr);
		}

		::System::String* GetFirstHeaderValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GETFIRSTHEADERVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetHeaderValues(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GETHEADERVALUES_OFFSET))(str, nullptr);
		}

		::System::Void RemoveHeaders()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_REMOVEHEADERS_OFFSET))(nullptr);
		}

		::System::Void SetRangeHeader(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SETRANGEHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void SetRangeHeader(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SETRANGEHEADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnumerateHeaders(::BestHTTP::OnHeaderEnumerationDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::OnHeaderEnumerationDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ENUMERATEHEADERS_OFFSET))(arg, nullptr);
		}

		::System::Void EnumerateHeaders(::BestHTTP::OnHeaderEnumerationDelegate* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::OnHeaderEnumerationDelegate*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ENUMERATEHEADERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendHeaders(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SENDHEADERS_OFFSET))(arg, nullptr);
		}

		::System::String* DumpHeaders()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_DUMPHEADERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEntityBody()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GETENTITYBODY_OFFSET))(nullptr);
		}

		UploadStreamInfo* GetUpStream()
		{
			return (return (UploadStreamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GETUPSTREAM_OFFSET))(nullptr);
		}

		::System::Void SendOutTo(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SENDOUTTO_OFFSET))(arg, nullptr);
		}

		::System::Void UpgradeCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_UPGRADECALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean CallOnBeforeRedirection(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_CALLONBEFOREREDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_PREPARE_OFFSET))(nullptr);
		}

		::System::Boolean CallCustomCertificationValidator(::System::Security::Cryptography::X509Certificates::X509Certificate* arg, ::System::Security::Cryptography::X509Certificates::X509Chain* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_CALLCUSTOMCERTIFICATIONVALIDATOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* Send()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SEND_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_ABORT_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_CLEAR_OFFSET))(nullptr);
		}

		::System::Void VerboseLogging(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_VERBOSELOGGING_OFFSET))(str, nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_RESET_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequest* System.Collections.Generic.IEnumerator_BestHTTP.HTTPRequest_.get_Current()
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_BESTHTTP.HTTPREQUEST_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPREQUEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

