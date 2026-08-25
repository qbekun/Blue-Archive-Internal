#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x9A4B4A0)
#define SYSTEM_NET_WEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x9A4B5C0)
#define SYSTEM_NET_WEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x9A4BA60)
#define SYSTEM_NET_WEBREQUEST_CREATE_OFFSET UNITYSDK_OFFSET(0x9A4BB40)
#define SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET UNITYSDK_OFFSET(0x9A4B870)
#define SYSTEM_NET_WEBREQUEST_POPULATEPREFIXLIST_OFFSET UNITYSDK_OFFSET(0x9A4BC10)
#define SYSTEM_NET_WEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4BE40)
#define SYSTEM_NET_WEBREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4BE70)
#define SYSTEM_NET_WEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A4BE80)
#define SYSTEM_NET_WEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A4BEB0)
#define SYSTEM_NET_WEBREQUEST_GET_DEFAULTCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9A4BEC0)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9A4BF40)
#define SYSTEM_NET_WEBREQUEST_INTERNALSETCACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x9A4BF50)
#define SYSTEM_NET_WEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A4C030)
#define SYSTEM_NET_WEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x9A4C060)
#define SYSTEM_NET_WEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x9A4C090)
#define SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x9A4C0C0)
#define SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A4C0F0)
#define SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A4C120)
#define SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x9A4C150)
#define SYSTEM_NET_WEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A4C180)
#define SYSTEM_NET_WEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A4C1B0)
#define SYSTEM_NET_WEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A4C1E0)
#define SYSTEM_NET_WEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A4C210)
#define SYSTEM_NET_WEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x9A4C240)
#define SYSTEM_NET_WEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x9A4C270)
#define SYSTEM_NET_WEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A4C2A0)
#define SYSTEM_NET_WEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x9A4C2D0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A4C300)
#define SYSTEM_NET_WEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A4C330)
#define SYSTEM_NET_WEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x9A4C360)
#define SYSTEM_NET_WEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A4C390)
#define SYSTEM_NET_WEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x9A4C3C0)
#define SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET UNITYSDK_OFFSET(0x9A4C3F0)
#define SYSTEM_NET_WEBREQUEST_GETRESPONSEASYNC_OFFSET UNITYSDK_OFFSET(0x9A4C770)
#define SYSTEM_NET_WEBREQUEST_SAFECAPTUREIDENITY_OFFSET UNITYSDK_OFFSET(0x9A4C710)
#define SYSTEM_NET_WEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x9A4CA90)
#define SYSTEM_NET_WEBREQUEST_GET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9A4CAC0)
#define SYSTEM_NET_WEBREQUEST_SET_CACHEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x9A4CAD0)
#define SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET UNITYSDK_OFFSET(0x9A4CAE0)
#define SYSTEM_NET_WEBREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A4CD20)
#define SYSTEM_NET_WEBREQUEST__GETREQUESTSTREAMASYNC_B__78_0_OFFSET UNITYSDK_OFFSET(0x9A4D0D0)
#define SYSTEM_NET_WEBREQUEST__GETRESPONSEASYNC_B__79_0_OFFSET UNITYSDK_OFFSET(0x9A4D1C0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_TypeDefinitionIndex = 29706;

	class WebRequest : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* s_PrefixList; // 0x0
		::System::Object* s_InternalSyncObject; // 0x8
		Queue* s_DefaultTimerQueue; // 0x10
		::System::Net::Security::AuthenticationLevel* m_AuthenticationLevel; // 0x18
		::System::Security::Principal::TokenImpersonationLevel* m_ImpersonationLevel; // 0x1C
		::System::Net::Cache::RequestCachePolicy* m_CachePolicy; // 0x20
		::System::Net::Cache::RequestCacheProtocol* m_CacheProtocol; // 0x28
		::System::Net::Cache::RequestCacheBinding* m_CacheBinding; // 0x30
		DesignerWebRequestCreate* webRequestCreate; // 0x18
		::System::Net::IWebProxy* s_DefaultWebProxy; // 0x20
		::System::Boolean s_DefaultWebProxyInitialized; // 0x28

		::System::Object* get_InternalSyncObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALSYNCOBJECT_OFFSET))(nullptr);
		}

		::System::Net::WebRequest* Create(::System::Uri* arg, ::System::Boolean arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebRequest* Create(::System::String* str)
		{
			return (return (::System::Net::WebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_OFFSET))(str, nullptr);
		}

		::System::Net::WebRequest* Create(::System::Uri* arg)
		{
			return (return (::System::Net::WebRequest*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::ArrayList* get_PrefixList()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PREFIXLIST_OFFSET))(nullptr);
		}

		::System::Collections::ArrayList* PopulatePrefixList()
		{
			return (return (::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_POPULATEPREFIXLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::Cache::RequestCachePolicy* get_DefaultCachePolicy()
		{
			return (return (::System::Net::Cache::RequestCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_DEFAULTCACHEPOLICY_OFFSET))(nullptr);
		}

		::System::Void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CACHEPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSetCachePolicy(::System::Net::Cache::RequestCachePolicy* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCachePolicy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_INTERNALSETCACHEPOLICY_OFFSET))(arg, nullptr);
		}

		::System::String* get_Method()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_METHOD_OFFSET))(nullptr);
		}

		::System::Void set_Method(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_METHOD_OFFSET))(str, nullptr);
		}

		::System::Uri* get_RequestUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_REQUESTURI_OFFSET))(nullptr);
		}

		::System::Void set_ConnectionGroupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(str, nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Int64 get_ContentLength()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CONTENTLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_ContentLength(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CONTENTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* arg)
		{
			((::System::Void(*)(::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_PROXY_OFFSET))(nullptr);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* arg)
		{
			((::System::Void(*)(::System::Net::IWebProxy*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_PROXY_OFFSET))(arg, nullptr);
		}

		::System::Void set_PreAuthenticate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Timeout()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return (return (::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETRESPONSE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_BEGINGETRESPONSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* arg)
		{
			return (return (::System::Net::WebResponse*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ENDGETRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(arg, arg, nullptr);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRequestStreamAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETREQUESTSTREAMASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* GetResponseAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GETRESPONSEASYNC_OFFSET))(nullptr);
		}

		::System::Security::Principal::WindowsIdentity* SafeCaptureIdenity()
		{
			return (return (::System::Security::Principal::WindowsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SAFECAPTUREIDENITY_OFFSET))(nullptr);
		}

		::System::Void Abort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_ABORT_OFFSET))(nullptr);
		}

		::System::Net::Cache::RequestCacheProtocol* get_CacheProtocol()
		{
			return (return (::System::Net::Cache::RequestCacheProtocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_CACHEPROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CacheProtocol(::System::Net::Cache::RequestCacheProtocol* arg)
		{
			((::System::Void(*)(::System::Net::Cache::RequestCacheProtocol*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_SET_CACHEPROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::Net::IWebProxy* get_InternalDefaultWebProxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_GET_INTERNALDEFAULTWEBPROXY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _GetRequestStreamAsync_b__78_0()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__GETREQUESTSTREAMASYNC_B__78_0_OFFSET))(nullptr);
		}

		Il2CppObject* _GetResponseAsync_b__79_0()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST__GETRESPONSEASYNC_B__79_0_OFFSET))(nullptr);
		}

	};
}

