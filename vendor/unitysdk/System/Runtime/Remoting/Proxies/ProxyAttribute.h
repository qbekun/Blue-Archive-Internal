#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x91D5170)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x91D5340)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x91D53A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x91D53B0)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int ProxyAttribute_TypeDefinitionIndex = 24461;

	class ProxyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::MarshalByRefObject* CreateInstance(::System::Type* arg)
		{
			return (return (::System::MarshalByRefObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* arg, ::System::Type* arg, ::System::Object* arg, ::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Runtime::Remoting::Proxies::RealProxy*(*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::System::Object*, ::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_CREATEPROXY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContextOK(::System::Runtime::Remoting::Contexts::Context* arg, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_PROXYATTRIBUTE_ISCONTEXTOK_OFFSET))(arg, arg, nullptr);
		}

	};
}

