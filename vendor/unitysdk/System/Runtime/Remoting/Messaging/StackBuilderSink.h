#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DE630)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F68A0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F6DC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x91F6F00)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET UNITYSDK_OFFSET(0x91F6960)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0x91F7130)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int StackBuilderSink_TypeDefinitionIndex = 24565;

	class StackBuilderSink : public Il2CppObject
	{
	public:
		::System::MarshalByRefObject* _target; // 0x10
		::System::Runtime::Remoting::Proxies::RealProxy* _rp; // 0x18

		::System::Void .ctor(::System::MarshalByRefObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::MarshalByRefObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteAsyncMessage(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_EXECUTEASYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK_CHECKPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void _AsyncProcessMessage_b__4_0(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_STACKBUILDERSINK__ASYNCPROCESSMESSAGE_B__4_0_OFFSET))(arg, nullptr);
		}

	};
}

