#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D10F0)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_GETSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x91D2310)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SETCLIENTPROXY_OFFSET UNITYSDK_OFFSET(0x91D2320)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET UNITYSDK_OFFSET(0x91D2330)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2380)
#define SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2490)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ClientActivatedIdentity_TypeDefinitionIndex = 24448;

	class ClientActivatedIdentity : public Il2CppObject
	{
	public:
		::System::MarshalByRefObject* _targetThis; // 0x70

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::MarshalByRefObject* GetServerObject()
		{
			return (return (::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_GETSERVEROBJECT_OFFSET))(nullptr);
		}

		::System::Void SetClientProxy(::System::MarshalByRefObject* arg)
		{
			((::System::Void(*)(::System::MarshalByRefObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SETCLIENTPROXY_OFFSET))(arg, nullptr);
		}

		::System::Void OnLifetimeExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ONLIFETIMEEXPIRED_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CLIENTACTIVATEDIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

