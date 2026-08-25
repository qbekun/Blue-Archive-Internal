#pragma once
#include "../../unitysdk.h"

namespace Mono::Net::Security { class MobileTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define SYSTEM_NET_HTTPWEBREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A6CDB0)
#define SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6CAC0)
#define SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6CF40)
#define SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A6CF90)
#define SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x9A6CE60)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x9A6D170)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET UNITYSDK_OFFSET(0x9A6D180)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x9A6D190)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x9A6D1A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x9A6D1B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x9A6D1C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET UNITYSDK_OFFSET(0x9A6D2A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET UNITYSDK_OFFSET(0x9A6D2B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET UNITYSDK_OFFSET(0x9A6D390)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET UNITYSDK_OFFSET(0x9A6D3A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9A6D3B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x9A6D420)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A6D430)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A6D440)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A6D520)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x9A6D530)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x9A6D540)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x9A6D550)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A6D560)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A6D570)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET UNITYSDK_OFFSET(0x9A6D580)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A6D5D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET UNITYSDK_OFFSET(0x9A6D5E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET UNITYSDK_OFFSET(0x9A6D720)
#define SYSTEM_NET_HTTPWEBREQUEST_TRYGETHOSTURI_OFFSET UNITYSDK_OFFSET(0x9A6D920)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A6D9E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x9A6D9F0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x9A6DA00)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET UNITYSDK_OFFSET(0x9A6DA80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A6DAD0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A6DAE0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A6DAF0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A6DD30)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x9A6DD40)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x9A6DD50)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A6DE70)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A6DE80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x9A6E0B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x9A6E0C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x9A6E0D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A6E140)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET UNITYSDK_OFFSET(0x9A6E150)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A6E160)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A6E170)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x9A6E1E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A6E230)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x9A6E2A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x9A6E2B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x9A6E2C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET UNITYSDK_OFFSET(0x9A6E2D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET UNITYSDK_OFFSET(0x9A6E2E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A6E310)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A6E320)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9A6E340)
#define SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x9A6DF20)
#define SYSTEM_NET_HTTPWEBREQUEST_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x9A6EB10)
#define SYSTEM_NET_HTTPWEBREQUEST_MYGETREQUESTSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x9A6EF80)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A6F4B0)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A6F560)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x9A6F710)
#define SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUTWORKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTPWEBREQUEST_MYGETRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x9A6F7A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSEFROMDATA_OFFSET UNITYSDK_OFFSET(0x9A6F8F0)
#define SYSTEM_NET_HTTPWEBREQUEST_FLATTENEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A6FA40)
#define SYSTEM_NET_HTTPWEBREQUEST_GETWEBEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A6F6A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETWEBEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A6FAF0)
#define SYSTEM_NET_HTTPWEBREQUEST_CREATEREQUESTABORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9A6F410)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A6FCD0)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A6FE80)
#define SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A6FFC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x9A700D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x9A6F3E0)
#define SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x9A700E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A70220)
#define SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A70270)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x9A6D230)
#define SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x9A702C0)
#define SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET UNITYSDK_OFFSET(0x9A702E0)
#define SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET UNITYSDK_OFFSET(0x9A70360)
#define SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x9A70910)
#define SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A710E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x9A71310)
#define SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET UNITYSDK_OFFSET(0x9A716E0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x9A719A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREWRITEHANDLER_OFFSET UNITYSDK_OFFSET(0x9A71D10)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET UNITYSDK_OFFSET(0x9A71EF0)
#define SYSTEM_NET_HTTPWEBREQUEST__RUNWITHTIMEOUT_B__242_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_NET_HTTPWEBREQUEST__GETREWRITEHANDLER_B__271_0_OFFSET UNITYSDK_OFFSET(0x9A72600)
#define SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A72700)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_TypeDefinitionIndex = 29779;

	class HttpWebRequest : public Il2CppObject
	{
	public:
		::System::Uri* requestUri; // 0x38
		::System::Uri* actualUri; // 0x40
		::System::Boolean hostChanged; // 0x48
		::System::Boolean allowAutoRedirect; // 0x49
		::System::Boolean allowBuffering; // 0x4A
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x50
		::System::String* connectionGroup; // 0x58
		::System::Boolean haveContentLength; // 0x60
		::System::Int64 contentLength; // 0x68
		::System::Net::HttpContinueDelegate* continueDelegate; // 0x70
		::System::Net::CookieContainer* cookieContainer; // 0x78
		::System::Net::ICredentials* credentials; // 0x80
		::System::Boolean haveResponse; // 0x88
		::System::Boolean requestSent; // 0x89
		::System::Net::WebHeaderCollection* webHeaders; // 0x90
		::System::Boolean keepAlive; // 0x98
		::System::Int32 maxAutoRedirect; // 0x9C
		::System::String* mediaType; // 0xA0
		::System::String* method; // 0xA8
		::System::String* initialMethod; // 0xB0
		::System::Boolean pipelined; // 0xB8
		::System::Boolean preAuthenticate; // 0xB9
		::System::Boolean usedPreAuth; // 0xBA
		::System::Version* version; // 0xC0
		::System::Boolean force_version; // 0xC8
		::System::Version* actualVersion; // 0xD0
		::System::Net::IWebProxy* proxy; // 0xD8
		::System::Boolean sendChunked; // 0xE0
		::System::Net::ServicePoint* servicePoint; // 0xE8
		::System::Int32 timeout; // 0xF0
		::System::Int32 continueTimeout; // 0xF4
		::System::Net::WebRequestStream* writeStream; // 0xF8
		::System::Net::HttpWebResponse* webResponse; // 0x100
		::System::Net::WebCompletionSource* responseTask; // 0x108
		::System::Net::WebOperation* currentOperation; // 0x110
		::System::Int32 aborted; // 0x118
		::System::Boolean gotRequestStream; // 0x11C
		::System::Int32 redirects; // 0x120
		::System::Boolean expectContinue; // 0x124
		::System::Boolean getResponseCalled; // 0x125
		::System::Object* locker; // 0x128
		::System::Boolean finished_reading; // 0x130
		::System::Net::DecompressionMethods* auto_decomp; // 0x134
		::System::Int32 defaultMaxResponseHeadersLength; // 0x0
		::System::Int32 defaultMaximumErrorResponseLength; // 0x4
		::System::Net::Cache::RequestCachePolicy* defaultCachePolicy; // 0x8
		::System::Int32 readWriteTimeout; // 0x138
		::Mono::Net::Security::MobileTlsProvider* tlsProvider; // 0x140
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0x148
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x150
		::System::Boolean hostHasPort; // 0x158
		::System::Uri* hostUri; // 0x160
		AuthorizationState* auth_state; // 0x168
		AuthorizationState* proxy_auth_state; // 0x178
		Il2CppObject* ResendContentFactory; // 0x188
		::System::Boolean _ThrowOnError_k__BackingField; // 0x190
		::System::Boolean unsafe_auth_blah; // 0x191

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::Mono::Net::Security::MobileTlsProvider* arg, ::Mono::Security::Interface::MonoTlsSettings* arg)
		{
			((::System::Void(*)(::System::Uri*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetAuthorization()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET))(nullptr);
		}

		::System::Uri* get_Address()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET))(nullptr);
		}

		::System::Void set_AllowAutoRedirect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowWriteStreamBuffering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET))(nullptr);
		}

		::System::Void set_AllowWriteStreamBuffering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET))(arg, nullptr);
		}

		::System::Net::DecompressionMethods* get_AutomaticDecompression()
		{
			return (return (::System::Net::DecompressionMethods*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET))(nullptr);
		}

		::System::Void set_AutomaticDecompression(::System::Net::DecompressionMethods* arg)
		{
			((::System::Void(*)(::System::Net::DecompressionMethods*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InternalAllowBuffering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET))(nullptr);
		}

		::System::Boolean get_MethodWithBuffer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET))(nullptr);
		}

		::Mono::Net::Security::MobileTlsProvider* get_TlsProvider()
		{
			return (return (::Mono::Net::Security::MobileTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET))(nullptr);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings()
		{
			return (return (::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return (return (::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionGroupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(str, nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_InternalContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ThrowOnError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET))(nullptr);
		}

		::System::Void set_ThrowOnError(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET))(arg, nullptr);
		}

		::System::Void set_CookieContainer(::System::Net::CookieContainer* arg)
		{
			((::System::Void(*)(::System::Net::CookieContainer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* arg)
		{
			((::System::Void(*)(::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DefaultMaximumErrorResponseLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET))(nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::String* get_Host()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET))(nullptr);
		}

		::System::Void set_Host(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetHostUri(::System::String* str, ::System::Uri&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Uri&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_TRYGETHOSTURI_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_KeepAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET))(nullptr);
		}

		::System::Void set_KeepAlive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MaximumAutomaticRedirections(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DefaultMaximumResponseHeadersLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET))(str, nullptr);
		}

		::System::Void set_PreAuthenticate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(arg, nullptr);
		}

		::System::Version* get_ProtocolVersion()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ProtocolVersion(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET))(arg, nullptr);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* arg)
		{
			((::System::Void(*)(::System::Net::IWebProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_RequestUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET))(nullptr);
		}

		::System::Boolean get_SendChunked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET))(nullptr);
		}

		::System::Void set_SendChunked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET))(arg, nullptr);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Net::ServicePoint* get_ServicePointNoLock()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET))(nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::String* get_TransferEncoding()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(nullptr);
		}

		::System::Boolean get_ExpectContinue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET))(nullptr);
		}

		::System::Void set_ExpectContinue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Uri* get_AuthUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET))(nullptr);
		}

		::System::Boolean get_ProxyQuery()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET))(nullptr);
		}

		::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return (return (::System::Net::ServerCertValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback()
		{
			return (return (::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* arg)
		{
			((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Net::ServicePoint* GetServicePoint()
		{
			return (return (::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET))(nullptr);
		}

		::System::Net::WebOperation* SendRequest(::System::Boolean arg, ::System::Net::BufferOffsetSize* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Net::WebOperation*(*)(::System::Boolean, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SENDREQUEST_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* MyGetRequestStreamAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_MYGETREQUESTSTREAMASYNC_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRequestStreamAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* RunWithTimeout(Il2CppObject* arg, ::System::Int32 arg, ::System::Action* arg, Il2CppObject* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Action*, Il2CppObject*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* RunWithTimeoutWorker(Il2CppObject* arg, ::System::Int32 arg, ::System::Action* arg, Il2CppObject* arg, ::System::Threading::CancellationTokenSource* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::System::Action*, Il2CppObject*, ::System::Threading::CancellationTokenSource*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUTWORKER_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* RunWithTimeout(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RUNWITHTIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* MyGetResponseAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_MYGETRESPONSEASYNC_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetResponseFromData(::System::Net::WebResponseStream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebResponseStream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSEFROMDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* FlattenException(::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_FLATTENEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Net::WebException* GetWebException(::System::Exception* arg)
		{
			return (return (::System::Net::WebException*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETWEBEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Net::WebException* GetWebException(::System::Exception* arg, ::System::Boolean arg)
		{
			return (return (::System::Net::WebException*(*)(::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETWEBEXCEPTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebException* CreateRequestAbortedException()
		{
			return (return (::System::Net::WebException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CREATEREQUESTABORTEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* arg)
		{
			return (return (::System::Net::WebResponse*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return (return (::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_FinishedReading(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Aborted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckRequestStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET))(nullptr);
		}

		::System::Void DoContinueDelegate(::System::Int32 arg, ::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RewriteRedirectToGet()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET))(nullptr);
		}

		::System::Boolean Redirect(::System::Net::HttpStatusCode* arg, ::System::Net::WebResponse* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::HttpStatusCode*, ::System::Net::WebResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetHeaders()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET))(nullptr);
		}

		::System::Void DoPreAuthenticate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetRequestHeaders()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET))(nullptr);
		}

		Il2CppObject* HandleNtlmAuth(::System::Net::WebResponseStream* arg, ::System::Net::HttpWebResponse* arg, ::System::Net::BufferOffsetSize* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::WebResponseStream*, ::System::Net::HttpWebResponse*, ::System::Net::BufferOffsetSize*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* arg, ::System::Net::HttpStatusCode* arg)
		{
			return (return (::System::Boolean(*)(::System::Net::WebResponse*, ::System::Net::HttpStatusCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetRewriteHandler(::System::Net::HttpWebResponse* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::HttpWebResponse*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREWRITEHANDLER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CheckFinalStatus(::System::Net::HttpWebResponse* arg)
		{
			return (return (Il2CppObject*(*)(::System::Net::HttpWebResponse*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean _RunWithTimeout_b__242_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__RUNWITHTIMEOUT_B__242_0_OFFSET))(nullptr);
		}

		Il2CppObject* _GetRewriteHandler_b__271_0()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__GETREWRITEHANDLER_B__271_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

