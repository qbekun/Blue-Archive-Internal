#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E4800)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET UNITYSDK_OFFSET(0x91E4420)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GET_TARGETDOMAINID_OFFSET UNITYSDK_OFFSET(0x91E4820)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET UNITYSDK_OFFSET(0x91E4830)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E4B00)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E5520)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E5640)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91E5750)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET UNITYSDK_OFFSET(0x91E5860)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainSink_TypeDefinitionIndex = 24493;

	class CrossAppDomainSink : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* s_sinks; // 0x0
		::System::Reflection::MethodInfo* processMessageMethod; // 0x8
		::System::Int32 _domainID; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(::System::Int32 arg)
		{
			return (return (::System::Runtime::Remoting::Channels::CrossAppDomainSink*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GETSINK_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TargetDomainId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_GET_TARGETDOMAINID_OFFSET))(nullptr);
		}

		ProcessMessageRes* ProcessMessageInDomain(::Il2CppArray<::System::Object*>* arg, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* arg)
		{
			return (return (ProcessMessageRes*(*)(::Il2CppArray<::System::Object*>*, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_PROCESSMESSAGEINDOMAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SendAsyncMessage(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_SENDASYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _AsyncProcessMessage_b__10_0(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINSINK__ASYNCPROCESSMESSAGE_B__10_0_OFFSET))(arg, nullptr);
		}

	};
}

