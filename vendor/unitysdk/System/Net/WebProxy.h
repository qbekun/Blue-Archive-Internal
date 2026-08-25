#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A635F0)
#define SYSTEM_NET_WEBPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A63660)
#define SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A639A0)
#define SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A639B0)
#define SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x9A63A20)
#define SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET UNITYSDK_OFFSET(0x9A63AA0)
#define SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET UNITYSDK_OFFSET(0x9A63720)
#define SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET UNITYSDK_OFFSET(0x9A63DA0)
#define SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET UNITYSDK_OFFSET(0x9A63F40)
#define SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET UNITYSDK_OFFSET(0x9A640B0)
#define SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x9A641A0)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET UNITYSDK_OFFSET(0x9A63CF0)
#define SYSTEM_NET_WEBPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A642E0)
#define SYSTEM_NET_WEBPROXY_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A646F0)
#define SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9A64720)
#define SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET UNITYSDK_OFFSET(0x9A64870)
#define SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET UNITYSDK_OFFSET(0x9A64880)
#define SYSTEM_NET_WEBPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A648E0)
#define SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x9A646E0)
#define SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET UNITYSDK_OFFSET(0x9A63C80)
#define SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET UNITYSDK_OFFSET(0x9A64290)
#define SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET UNITYSDK_OFFSET(0x9A64920)
#define SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET UNITYSDK_OFFSET(0x9A64C10)

namespace System::Net
{
	inline static constexpr unsigned int WebProxy_TypeDefinitionIndex = 29746;

	class WebProxy : public Il2CppObject
	{
	public:
		::System::Boolean _UseRegistry; // 0x10
		::System::Boolean _BypassOnLocal; // 0x11
		::System::Boolean m_EnableAutoproxy; // 0x12
		::System::Uri* _ProxyAddress; // 0x18
		::System::Collections::ArrayList* _BypassList; // 0x20
		::System::Net::ICredentials* _Credentials; // 0x28
		::Il2CppArray<::System::Object*>* _RegExBypassList; // 0x30
		::System::Collections::Hashtable* _ProxyHostAddresses; // 0x38
		::System::Net::AutoWebProxyScriptEngine* m_ScriptEngine; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Net::ICredentials* arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Net::ICredentials*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return (return (::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_CREDENTIALS_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_USEDEFAULTCREDENTIALS_OFFSET))(nullptr);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SET_USEDEFAULTCREDENTIALS_OFFSET))(arg, nullptr);
		}

		::System::Uri* GetProxy(::System::Uri* arg)
		{
			return (return (::System::Uri*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateRegExList(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UPDATEREGEXLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMatchInBypassList(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISMATCHINBYPASSLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLocal(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLocalInProxyHash(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISLOCALINPROXYHASH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBypassed(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBypassedManual(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDMANUAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Runtime.Serialization.ISerializable.GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_SYSTEM.RUNTIME.SERIALIZATION.ISERIALIZABLE.GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Net::AutoWebProxyScriptEngine* get_ScriptEngine()
		{
			return (return (::System::Net::AutoWebProxyScriptEngine*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GET_SCRIPTENGINE_OFFSET))(nullptr);
		}

		::System::Net::IWebProxy* CreateDefaultProxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_CREATEDEFAULTPROXY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void UnsafeUpdateFromRegistry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_UNSAFEUPDATEFROMREGISTRY_OFFSET))(nullptr);
		}

		::System::Boolean GetProxyAuto(::System::Uri* arg, ::System::Uri&* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Uri&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_GETPROXYAUTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsBypassedAuto(::System::Uri* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_ISBYPASSEDAUTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreAllBypassed(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_AREALLBYPASSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Uri* ProxyUri(::System::String* str)
		{
			return (return (::System::Uri*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPROXY_PROXYURI_OFFSET))(str, nullptr);
		}

	};
}

