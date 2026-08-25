#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D6A10)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D6A20)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D6BA0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D6A70)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x91D6C10)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET UNITYSDK_OFFSET(0x91D6C20)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x91D6CC0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D6D50)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D6D60)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET UNITYSDK_OFFSET(0x91D59B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x91D7F20)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET UNITYSDK_OFFSET(0x91D7F30)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET UNITYSDK_OFFSET(0x91D80B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET UNITYSDK_OFFSET(0x91D80C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET UNITYSDK_OFFSET(0x91D80D0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET UNITYSDK_OFFSET(0x91D76F0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RealProxy_TypeDefinitionIndex = 24463;

	class RealProxy : public Il2CppObject
	{
	public:
		::System::Type* class_to_proxy; // 0x10
		::System::Runtime::Remoting::Contexts::Context* _targetContext; // 0x18
		::System::MarshalByRefObject* _server; // 0x20
		::System::Int32 _targetDomainId; // 0x28
		::System::String* _targetUri; // 0x30
		::System::Runtime::Remoting::Identity* _objectIdentity; // 0x38
		::System::Object* _objTP; // 0x40
		::System::Object* _stubData; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Remoting::ClientIdentity* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Type* InternalGetProxyType(::System::Object* arg)
		{
			return (return (::System::Type*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETPROXYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetProxiedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETPROXIEDTYPE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Identity* get_ObjectIdentity()
		{
			return (return (::System::Runtime::Remoting::Identity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GET_OBJECTIDENTITY_OFFSET))(nullptr);
		}

		::System::Void set_ObjectIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SET_OBJECTIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* PrivateInvoke(::System::Runtime::Remoting::Proxies::RealProxy* arg, ::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Exception&* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Remoting::Proxies::RealProxy*, ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Exception&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PRIVATEINVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* InternalGetTransparentProxy(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_INTERNALGETTRANSPARENTPROXY_OFFSET))(str, nullptr);
		}

		::System::Object* GetTransparentProxy()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETTRANSPARENTPROXY_OFFSET))(nullptr);
		}

		::System::Void AttachServer(::System::MarshalByRefObject* arg)
		{
			((::System::Void(*)(::System::MarshalByRefObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_ATTACHSERVER_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetDomain(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_SETTARGETDOMAIN_OFFSET))(arg, nullptr);
		}

		::System::Object* GetAppDomainTarget()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_GETAPPDOMAINTARGET_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessResponse(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* arg, ::System::Runtime::Remoting::Messaging::MonoMethodMessage* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*, ::System::Runtime::Remoting::Messaging::MonoMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REALPROXY_PROCESSRESPONSE_OFFSET))(arg, arg, nullptr);
		}

	};
}

