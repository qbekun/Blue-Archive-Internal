#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D1FE0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_OBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x91D2040)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET UNITYSDK_OFFSET(0x91CF520)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x91D2050)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET UNITYSDK_OFFSET(0x91D2100)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x91D1150)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_LEASE_OFFSET UNITYSDK_OFFSET(0x91D22E0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x91D22F0)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x91D2300)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x91D2060)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ServerIdentity_TypeDefinitionIndex = 24447;

	class ServerIdentity : public Il2CppObject
	{
	public:
		::System::Type* _objectType; // 0x48
		::System::MarshalByRefObject* _serverObject; // 0x50
		::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink; // 0x58
		::System::Runtime::Remoting::Contexts::Context* _context; // 0x60
		::System::Runtime::Remoting::Lifetime::Lease* _lease; // 0x68

		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::Contexts::Context* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Type* get_ObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_OBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void StartTrackingLifetime(::System::Runtime::Remoting::Lifetime::ILease* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Lifetime::ILease*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_STARTTRACKINGLIFETIME_OFFSET))(arg, nullptr);
		}

		::System::Void OnLifetimeExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::ObjRef* CreateObjRef(::System::Type* arg)
		{
			return (return (::System::Runtime::Remoting::ObjRef*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_CREATEOBJREF_OFFSET))(arg, nullptr);
		}

		::System::Void AttachServerObject(::System::MarshalByRefObject* arg, ::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ATTACHSERVEROBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Lifetime::Lease* get_Lease()
		{
			return (return (::System::Runtime::Remoting::Lifetime::Lease*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_LEASE_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Contexts::Context* get_Context()
		{
			return (return (::System::Runtime::Remoting::Contexts::Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_GET_CONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_Context(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SET_CONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisposeServerObject()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVERIDENTITY_DISPOSESERVEROBJECT_OFFSET))(nullptr);
		}

	};
}

