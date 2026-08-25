#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D82C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D52C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x91D8E90)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET UNITYSDK_OFFSET(0x91D9920)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET UNITYSDK_OFFSET(0x91D6F60)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x91DA200)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x91DA360)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x91DA5A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91DA6E0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int RemotingProxy_TypeDefinitionIndex = 24464;

	class RemotingProxy : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _cache_GetTypeMethod; // 0x0
		::System::Reflection::MethodInfo* _cache_GetHashCodeMethod; // 0x8
		::System::Runtime::Remoting::Messaging::IMessageSink* _sink; // 0x50
		::System::Boolean _hasEnvoySink; // 0x58
		::System::Runtime::Remoting::Messaging::ConstructionCall* _ctorCall; // 0x60

		::System::Void .ctor(::System::Type* arg, ::System::Runtime::Remoting::ClientIdentity* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Runtime::Remoting::ClientIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* Invoke(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void AttachIdentity(::System::Runtime::Remoting::Identity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Identity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ATTACHIDENTITY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* ActivateRemoteObject(::System::Runtime::Remoting::Messaging::IMethodMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMethodMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_ACTIVATEREMOTEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean CanCastTo(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_CANCASTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_REMOTINGPROXY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

