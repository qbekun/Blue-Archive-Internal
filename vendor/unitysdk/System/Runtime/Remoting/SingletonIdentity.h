#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D1220)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_GETSERVEROBJECT_OFFSET UNITYSDK_OFFSET(0x91D25A0)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D27B0)
#define SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2890)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SingletonIdentity_TypeDefinitionIndex = 24449;

	class SingletonIdentity : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::Contexts::Context* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::MarshalByRefObject* GetServerObject()
		{
			return (return (::System::MarshalByRefObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_GETSERVEROBJECT_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLETONIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

