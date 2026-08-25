#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_FTPWEBREQUEST_GET_METHODINFO_OFFSET UNITYSDK_OFFSET(0x9B9DF20)
#define SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9B9DF30)
#define SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9B9DF50)
#define SYSTEM_NET_FTPWEBREQUEST_GET_RENAMETO_OFFSET UNITYSDK_OFFSET(0x9B9E140)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9B9E150)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9B9E160)
#define SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x9B9E2E0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9E2F0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9E300)
#define SYSTEM_NET_FTPWEBREQUEST_GET_REMAININGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9E3F0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9B9E400)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x9B9E410)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B9E420)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9B9E430)
#define SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9B9E440)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x9B9E450)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x9B9E4C0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x9B9E540)
#define SYSTEM_NET_FTPWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B9E550)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9B9EA60)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BA0CC0)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BA15A0)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9BA1A20)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9BA2100)
#define SYSTEM_NET_FTPWEBREQUEST_SUBMITREQUEST_OFFSET UNITYSDK_OFFSET(0x9B9FA30)
#define SYSTEM_NET_FTPWEBREQUEST_TRANSLATECONNECTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BA32C0)
#define SYSTEM_NET_FTPWEBREQUEST_CREATECONNECTIONASYNC_OFFSET UNITYSDK_OFFSET(0x9BA26E0)
#define SYSTEM_NET_FTPWEBREQUEST_CREATECONNECTION_OFFSET UNITYSDK_OFFSET(0x9BA27A0)
#define SYSTEM_NET_FTPWEBREQUEST_TIMEDSUBMITREQUESTHELPER_OFFSET UNITYSDK_OFFSET(0x9BA29F0)
#define SYSTEM_NET_FTPWEBREQUEST_TIMERCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BA34C0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_TIMERQUEUE_OFFSET UNITYSDK_OFFSET(0x9BA3440)
#define SYSTEM_NET_FTPWEBREQUEST_ATTEMPTEDRECOVERY_OFFSET UNITYSDK_OFFSET(0x9BA3070)
#define SYSTEM_NET_FTPWEBREQUEST_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9BA0780)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x9B9F370)
#define SYSTEM_NET_FTPWEBREQUEST_REQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B93AE0)
#define SYSTEM_NET_FTPWEBREQUEST_SYNCREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BA44B0)
#define SYSTEM_NET_FTPWEBREQUEST_ASYNCREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BA37D0)
#define SYSTEM_NET_FTPWEBREQUEST_FINISHREQUESTSTAGE_OFFSET UNITYSDK_OFFSET(0x9B9F400)
#define SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x9BA4A40)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9BA4FC0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEBINARY_OFFSET UNITYSDK_OFFSET(0x9BA5030)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEPASSIVE_OFFSET UNITYSDK_OFFSET(0x9BA5040)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9B97370)
#define SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x9BA5050)
#define SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9BA5060)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9BA50E0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9BA5180)
#define SYSTEM_NET_FTPWEBREQUEST_GET_INUSE_OFFSET UNITYSDK_OFFSET(0x9B9E130)
#define SYSTEM_NET_FTPWEBREQUEST_ENSUREFTPWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BA0020)
#define SYSTEM_NET_FTPWEBREQUEST_DATASTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x9BA5460)
#define SYSTEM_NET_FTPWEBREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BA5500)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequest_TypeDefinitionIndex = 29666;

	class FtpWebRequest : public Il2CppObject
	{
	public:
		::System::Object* _syncObject; // 0x38
		::System::Net::ICredentials* _authInfo; // 0x40
		::System::Uri* _uri; // 0x48
		::System::Net::FtpMethodInfo* _methodInfo; // 0x50
		::System::String* _renameTo; // 0x58
		::System::Boolean _getRequestStreamStarted; // 0x60
		::System::Boolean _getResponseStarted; // 0x61
		::System::DateTime* _startTime; // 0x68
		::System::Int32 _timeout; // 0x70
		::System::Int32 _remainingTimeout; // 0x74
		::System::Int64 _contentLength; // 0x78
		::System::Int64 _contentOffset; // 0x80
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* _clientCertificates; // 0x88
		::System::Boolean _passive; // 0x90
		::System::Boolean _binary; // 0x91
		::System::String* _connectionGroupName; // 0x98
		::System::Boolean _async; // 0xA0
		::System::Boolean _aborted; // 0xA1
		::System::Boolean _timedOut; // 0xA2
		::System::Exception* _exception; // 0xA8
		Queue* _timerQueue; // 0xB0
		Callback* _timerCallback; // 0xB8
		::System::Boolean _enableSsl; // 0xC0
		::System::Net::FtpControlStream* _connection; // 0xC8
		::System::IO::Stream* _stream; // 0xD0
		RequestStage* _requestStage; // 0xD8
		::System::Boolean _onceFailed; // 0xDC
		::System::Net::WebHeaderCollection* _ftpRequestHeaders; // 0xE0
		::System::Net::FtpWebResponse* _ftpWebResponse; // 0xE8
		::System::Int32 _readWriteTimeout; // 0xF0
		::System::Net::ContextAwareResult* _writeAsyncResult; // 0xF8
		::System::Net::LazyAsyncResult* _readAsyncResult; // 0x100
		::System::Net::LazyAsyncResult* _requestCompleteAsyncResult; // 0x108
		::System::Net::NetworkCredential* s_defaultFtpNetworkCredential; // 0x0
		Queue* s_DefaultTimerQueue; // 0x8

		::System::Net::FtpMethodInfo* get_MethodInfo()
		{
			return (return (::System::Net::FtpMethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_METHODINFO_OFFSET))(nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET))(str, nullptr);
		}

		::System::String* get_RenameTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_RENAMETO_OFFSET))(nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* arg)
		{
			((::System::Void(*)(::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_RequestUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET))(nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RemainingTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_REMAININGTIMEOUT_OFFSET))(nullptr);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_ContentOffset()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTOFFSET_OFFSET))(nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* arg)
		{
			((::System::Void(*)(::System::Net::IWebProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConnectionGroupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_Aborted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_ABORTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return (return (::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* arg)
		{
			return (return (::System::Net::WebResponse*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void SubmitRequest(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SUBMITREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Exception* TranslateConnectException(::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_TRANSLATECONNECTEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void CreateConnectionAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CREATECONNECTIONASYNC_OFFSET))(nullptr);
		}

		::System::Net::FtpControlStream* CreateConnection()
		{
			return (return (::System::Net::FtpControlStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CREATECONNECTION_OFFSET))(nullptr);
		}

		::System::IO::Stream* TimedSubmitRequestHelper(::System::Boolean arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_TIMEDSUBMITREQUESTHELPER_OFFSET))(arg, nullptr);
		}

		::System::Void TimerCallback(Timer* arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(Timer*, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_TIMERCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		Queue* get_TimerQueue()
		{
			return (return (Queue*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_TIMERQUEUE_OFFSET))(nullptr);
		}

		::System::Boolean AttemptedRecovery(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ATTEMPTEDRECOVERY_OFFSET))(arg, nullptr);
		}

		::System::Void SetException(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHECKERROR_OFFSET))(nullptr);
		}

		::System::Void RequestCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_REQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SyncRequestCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SYNCREQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void AsyncRequestCallback(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ASYNCREQUESTCALLBACK_OFFSET))(arg, nullptr);
		}

		RequestStage* FinishRequestStage(RequestStage* arg)
		{
			return (return (RequestStage*(*)(RequestStage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_FINISHREQUESTSTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET))(nullptr);
		}

		::System::Void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CACHEPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseBinary()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEBINARY_OFFSET))(nullptr);
		}

		::System::Boolean get_UsePassive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEPASSIVE_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Boolean get_EnableSsl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET))(nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_PreAuthenticate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_INUSE_OFFSET))(nullptr);
		}

		::System::Void EnsureFtpWebResponse(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENSUREFTPWEBRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void DataStreamClosed(::System::Net::CloseExState* arg)
		{
			((::System::Void(*)(::System::Net::CloseExState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_DATASTREAMCLOSED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

