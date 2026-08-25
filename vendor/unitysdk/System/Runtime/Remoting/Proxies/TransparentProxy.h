#pragma once
#include "../../../../unitysdk.h"

namespace Mono { class RuntimeRemoteClassHandle; }

#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GETPROXYTYPE_OFFSET UNITYSDK_OFFSET(0x91D53C0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_ISCONTEXTBOUNDOBJECT_OFFSET UNITYSDK_OFFSET(0x91D5480)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_TARGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x91D54B0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_INCURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x91D54D0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET UNITYSDK_OFFSET(0x91D5520)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET UNITYSDK_OFFSET(0x91D66A0)
#define SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D6A00)

namespace System::Runtime::Remoting::Proxies
{
	inline static constexpr unsigned int TransparentProxy_TypeDefinitionIndex = 24462;

	class TransparentProxy : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x10
		::Mono::RuntimeRemoteClassHandle* _class; // 0x18
		::System::Boolean _custom_type_info; // 0x20

		::System::RuntimeType* GetProxyType()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GETPROXYTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContextBoundObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_ISCONTEXTBOUNDOBJECT_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* get_TargetContext()
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_GET_TARGETCONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean InCurrentContext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_INCURRENTCONTEXT_OFFSET))(nullptr);
		}

		::System::Object* LoadRemoteFieldNew(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_LOADREMOTEFIELDNEW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StoreRemoteField(::System::Int32 arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_STOREREMOTEFIELD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROXIES_TRANSPARENTPROXY_.CTOR_OFFSET))(nullptr);
		}

	};
}

