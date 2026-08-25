#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C30F0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_CLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91C3230)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_SET_CLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91C32C0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x91C3330)
#define SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_TARGETURI_OFFSET UNITYSDK_OFFSET(0x91C3340)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ClientIdentity_TypeDefinitionIndex = 24436;

	class ClientIdentity : public Il2CppObject
	{
	public:
		::System::WeakReference* _proxyReference; // 0x48

		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::ObjRef* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::ObjRef*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::MarshalByRefObject* get_ClientProxy()
		{
			return (return (::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_CLIENTPROXY_OFFSET))(nullptr);
		}

		::System::Void set_ClientProxy(::System::MarshalByRefObject* arg)
		{
			((::System::Void(*)(::System::MarshalByRefObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_SET_CLIENTPROXY_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_CREATEOBJREF_OFFSET))(arg, nullptr);
		}

		::System::String* get_TargetUri()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTIDENTITY_GET_TARGETURI_OFFSET))(nullptr);
		}

	};
}

