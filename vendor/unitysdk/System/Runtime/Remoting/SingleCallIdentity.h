#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D11C0)
#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2980)
#define SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2BB0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SingleCallIdentity_TypeDefinitionIndex = 24450;

	class SingleCallIdentity : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::Contexts::Context* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::Contexts::Context*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_SYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SINGLECALLIDENTITY_ASYNCOBJECTPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

