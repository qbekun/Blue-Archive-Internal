#pragma once
#include "../unitysdk.h"

namespace BestHTTP::Connections::HTTP2 { class HTTP2PluginSettings; }
namespace BestHTTP { class Proxy; }
namespace BestHTTP::Extensions { class HeartbeatManager; }
namespace BestHTTP::Logger { class ILogger; }
namespace BestHTTP { class TlsClientFactoryDelegate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class ICertificateVerifyer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class IClientCredentialsProvider; }
namespace BestHTTP::PlatformSupport::FileSystem { class IIOService; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { class AbstractTlsClient; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class OnRequestFinishedDelegate; }
namespace BestHTTP { class HTTPMethods; }

#define BESTHTTP_HTTPMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D8A80)
#define BESTHTTP_HTTPMANAGER_GET_MAXCONNECTIONPERSERVER_OFFSET UNITYSDK_OFFSET(0x4D9190)
#define BESTHTTP_HTTPMANAGER_SET_MAXCONNECTIONPERSERVER_OFFSET UNITYSDK_OFFSET(0x4D90A0)
#define BESTHTTP_HTTPMANAGER_GET_KEEPALIVEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x4D91E0)
#define BESTHTTP_HTTPMANAGER_SET_KEEPALIVEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x4D9230)
#define BESTHTTP_HTTPMANAGER_GET_ISCACHINGDISABLED_OFFSET UNITYSDK_OFFSET(0x4D9280)
#define BESTHTTP_HTTPMANAGER_SET_ISCACHINGDISABLED_OFFSET UNITYSDK_OFFSET(0x4D92D0)
#define BESTHTTP_HTTPMANAGER_GET_MAXCONNECTIONIDLETIME_OFFSET UNITYSDK_OFFSET(0x4D9320)
#define BESTHTTP_HTTPMANAGER_SET_MAXCONNECTIONIDLETIME_OFFSET UNITYSDK_OFFSET(0x4D9370)
#define BESTHTTP_HTTPMANAGER_GET_ISCOOKIESENABLED_OFFSET UNITYSDK_OFFSET(0x4D93D0)
#define BESTHTTP_HTTPMANAGER_SET_ISCOOKIESENABLED_OFFSET UNITYSDK_OFFSET(0x4D9420)
#define BESTHTTP_HTTPMANAGER_GET_COOKIEJARSIZE_OFFSET UNITYSDK_OFFSET(0x4D9470)
#define BESTHTTP_HTTPMANAGER_SET_COOKIEJARSIZE_OFFSET UNITYSDK_OFFSET(0x4D94C0)
#define BESTHTTP_HTTPMANAGER_GET_ENABLEPRIVATEBROWSING_OFFSET UNITYSDK_OFFSET(0x4D9510)
#define BESTHTTP_HTTPMANAGER_SET_ENABLEPRIVATEBROWSING_OFFSET UNITYSDK_OFFSET(0x4D9560)
#define BESTHTTP_HTTPMANAGER_GET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4D95B0)
#define BESTHTTP_HTTPMANAGER_SET_CONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4D9600)
#define BESTHTTP_HTTPMANAGER_GET_REQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4D9660)
#define BESTHTTP_HTTPMANAGER_SET_REQUESTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x4D96B0)
#define BESTHTTP_HTTPMANAGER_GET_ROOTCACHEFOLDERPROVIDER_OFFSET UNITYSDK_OFFSET(0x4D9710)
#define BESTHTTP_HTTPMANAGER_SET_ROOTCACHEFOLDERPROVIDER_OFFSET UNITYSDK_OFFSET(0x4D9760)
#define BESTHTTP_HTTPMANAGER_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x4D97D0)
#define BESTHTTP_HTTPMANAGER_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x4D9820)
#define BESTHTTP_HTTPMANAGER_GET_HEARTBEATS_OFFSET UNITYSDK_OFFSET(0x4D9890)
#define BESTHTTP_HTTPMANAGER_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x4D7960)
#define BESTHTTP_HTTPMANAGER_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x4D99B0)
#define BESTHTTP_HTTPMANAGER_DEFAULTTLSCLIENTFACTORY_OFFSET UNITYSDK_OFFSET(0x4D9A20)
#define BESTHTTP_HTTPMANAGER_GET_DEFAULTCERTIFICATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x4D9C70)
#define BESTHTTP_HTTPMANAGER_SET_DEFAULTCERTIFICATEVERIFYER_OFFSET UNITYSDK_OFFSET(0x4D9CC0)
#define BESTHTTP_HTTPMANAGER_GET_DEFAULTCLIENTCREDENTIALSPROVIDER_OFFSET UNITYSDK_OFFSET(0x4D9D30)
#define BESTHTTP_HTTPMANAGER_SET_DEFAULTCLIENTCREDENTIALSPROVIDER_OFFSET UNITYSDK_OFFSET(0x4D9D80)
#define BESTHTTP_HTTPMANAGER_GET_USEALTERNATESSLDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x4D9DF0)
#define BESTHTTP_HTTPMANAGER_SET_USEALTERNATESSLDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x4D9E40)
#define BESTHTTP_HTTPMANAGER_GET_DEFAULTCERTIFICATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x4D9E90)
#define BESTHTTP_HTTPMANAGER_SET_DEFAULTCERTIFICATIONVALIDATOR_OFFSET UNITYSDK_OFFSET(0x4D9EE0)
#define BESTHTTP_HTTPMANAGER_GET_MAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x4D9F50)
#define BESTHTTP_HTTPMANAGER_SET_MAXPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x4D9FA0)
#define BESTHTTP_HTTPMANAGER_GET_ISQUITTING_OFFSET UNITYSDK_OFFSET(0x4DA000)
#define BESTHTTP_HTTPMANAGER_SET_ISQUITTING_OFFSET UNITYSDK_OFFSET(0x4DA050)
#define BESTHTTP_HTTPMANAGER_SETUP_OFFSET UNITYSDK_OFFSET(0x4DA0B0)
#define BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x4DA8C0)
#define BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x4DAE10)
#define BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x4DAED0)
#define BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x4DB0F0)
#define BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0x4DAB30)
#define BESTHTTP_HTTPMANAGER_GETROOTCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x4DB880)
#define BESTHTTP_HTTPMANAGER_RESETSETUP_OFFSET UNITYSDK_OFFSET(0x4DBAC0)
#define BESTHTTP_HTTPMANAGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x4DBBD0)
#define BESTHTTP_HTTPMANAGER_ONQUIT_OFFSET UNITYSDK_OFFSET(0x4DBD70)
#define BESTHTTP_HTTPMANAGER_ABORTALL_OFFSET UNITYSDK_OFFSET(0x4DBF70)

namespace BestHTTP
{
	inline static constexpr unsigned int HTTPManager_TypeDefinitionIndex = 21299;

	class HTTPManager : public Il2CppObject
	{
	public:
		::BestHTTP::Connections::HTTP2::HTTP2PluginSettings* HTTP2Settings; // 0x0
		::System::Byte maxConnectionPerServer; // 0x8
		::System::Boolean _KeepAliveDefaultValue_k__BackingField; // 0x9
		::System::Boolean _IsCachingDisabled_k__BackingField; // 0xA
		::System::TimeSpan* _MaxConnectionIdleTime_k__BackingField; // 0x10
		::System::Boolean _IsCookiesEnabled_k__BackingField; // 0x18
		::System::UInt32 _CookieJarSize_k__BackingField; // 0x1C
		::System::Boolean _EnablePrivateBrowsing_k__BackingField; // 0x20
		::System::TimeSpan* _ConnectTimeout_k__BackingField; // 0x28
		::System::TimeSpan* _RequestTimeout_k__BackingField; // 0x30
		Il2CppObject* _RootCacheFolderProvider_k__BackingField; // 0x38
		::BestHTTP::Proxy* _Proxy_k__BackingField; // 0x40
		::BestHTTP::Extensions::HeartbeatManager* heartbeats; // 0x48
		::BestHTTP::Logger::ILogger* logger; // 0x50
		::BestHTTP::TlsClientFactoryDelegate* TlsClientFactory; // 0x58
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* _DefaultCertificateVerifyer_k__BackingField; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* _DefaultClientCredentialsProvider_k__BackingField; // 0x68
		::System::Boolean _UseAlternateSSLDefaultValue_k__BackingField; // 0x70
		Il2CppObject* _DefaultCertificationValidator_k__BackingField; // 0x78
		::System::Int32 SendBufferSize; // 0x80
		::System::Int32 ReceiveBufferSize; // 0x84
		::BestHTTP::PlatformSupport::FileSystem::IIOService* IOService; // 0x88
		::System::Int32 _MaxPathLength_k__BackingField; // 0x90
		::System::String* UserAgent; // 0x98
		::System::Boolean _IsQuitting_k__BackingField; // 0xA0
		::System::Boolean IsSetupCalled; // 0xA1

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Byte get_MaxConnectionPerServer()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_MAXCONNECTIONPERSERVER_OFFSET))(nullptr);
		}

		::System::Void set_MaxConnectionPerServer(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_MAXCONNECTIONPERSERVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_KeepAliveDefaultValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_KEEPALIVEDEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_KeepAliveDefaultValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_KEEPALIVEDEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCachingDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_ISCACHINGDISABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsCachingDisabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_ISCACHINGDISABLED_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_MaxConnectionIdleTime()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_MAXCONNECTIONIDLETIME_OFFSET))(nullptr);
		}

		::System::Void set_MaxConnectionIdleTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_MAXCONNECTIONIDLETIME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCookiesEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_ISCOOKIESENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsCookiesEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_ISCOOKIESENABLED_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_CookieJarSize()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_COOKIEJARSIZE_OFFSET))(nullptr);
		}

		::System::Void set_CookieJarSize(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_COOKIEJARSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EnablePrivateBrowsing()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_ENABLEPRIVATEBROWSING_OFFSET))(nullptr);
		}

		::System::Void set_EnablePrivateBrowsing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_ENABLEPRIVATEBROWSING_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_ConnectTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_CONNECTTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_ConnectTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_CONNECTTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_RequestTimeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_REQUESTTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_RequestTimeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_REQUESTTIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RootCacheFolderProvider()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_ROOTCACHEFOLDERPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_RootCacheFolderProvider(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_ROOTCACHEFOLDERPROVIDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Proxy* get_Proxy()
		{
			return (return (::BestHTTP::Proxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::BestHTTP::Proxy* arg)
		{
			((::System::Void(*)(::BestHTTP::Proxy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Extensions::HeartbeatManager* get_Heartbeats()
		{
			return (return (::BestHTTP::Extensions::HeartbeatManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_HEARTBEATS_OFFSET))(nullptr);
		}

		::BestHTTP::Logger::ILogger* get_Logger()
		{
			return (return (::BestHTTP::Logger::ILogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_LOGGER_OFFSET))(nullptr);
		}

		::System::Void set_Logger(::BestHTTP::Logger::ILogger* arg)
		{
			((::System::Void(*)(::BestHTTP::Logger::ILogger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_LOGGER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient* DefaultTlsClientFactory(::BestHTTP::HTTPRequest* arg, Il2CppObject* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient*(*)(::BestHTTP::HTTPRequest*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_DEFAULTTLSCLIENTFACTORY_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* get_DefaultCertificateVerifyer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_DEFAULTCERTIFICATEVERIFYER_OFFSET))(nullptr);
		}

		::System::Void set_DefaultCertificateVerifyer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::ICertificateVerifyer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_DEFAULTCERTIFICATEVERIFYER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* get_DefaultClientCredentialsProvider()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_DEFAULTCLIENTCREDENTIALSPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_DefaultClientCredentialsProvider(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::IClientCredentialsProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_DEFAULTCLIENTCREDENTIALSPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseAlternateSSLDefaultValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_USEALTERNATESSLDEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_UseAlternateSSLDefaultValue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_USEALTERNATESSLDEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultCertificationValidator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_DEFAULTCERTIFICATIONVALIDATOR_OFFSET))(nullptr);
		}

		::System::Void set_DefaultCertificationValidator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_DEFAULTCERTIFICATIONVALIDATOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_MAXPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_MaxPathLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_MAXPATHLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsQuitting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GET_ISQUITTING_OFFSET))(nullptr);
		}

		::System::Void set_IsQuitting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SET_ISQUITTING_OFFSET))(arg, nullptr);
		}

		::System::Void Setup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SETUP_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequest* SendRequest(::System::String* str, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::System::String*, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* SendRequest(::System::String* str, ::BestHTTP::HTTPMethods* arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::System::String*, ::BestHTTP::HTTPMethods*, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* SendRequest(::System::String* str, ::BestHTTP::HTTPMethods* arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::System::String*, ::BestHTTP::HTTPMethods*, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* SendRequest(::System::String* str, ::BestHTTP::HTTPMethods* arg, ::System::Boolean arg, ::System::Boolean arg, ::BestHTTP::OnRequestFinishedDelegate* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::System::String*, ::BestHTTP::HTTPMethods*, ::System::Boolean, ::System::Boolean, ::BestHTTP::OnRequestFinishedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::HTTPRequest* SendRequest(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::HTTPRequest*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_SENDREQUEST_OFFSET))(arg, nullptr);
		}

		::System::String* GetRootCacheFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_GETROOTCACHEFOLDER_OFFSET))(nullptr);
		}

		::System::Void ResetSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_RESETSETUP_OFFSET))(nullptr);
		}

		::System::Void OnUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_ONQUIT_OFFSET))(nullptr);
		}

		::System::Void AbortAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_HTTPMANAGER_ABORTALL_OFFSET))(nullptr);
		}

	};
}

