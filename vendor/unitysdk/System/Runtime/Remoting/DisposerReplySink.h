#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x91D2D90)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2DE0)
#define SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x91D2F00)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int DisposerReplySink_TypeDefinitionIndex = 24451;

	class DisposerReplySink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x10
		::System::IDisposable* _disposable; // 0x18

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessageSink* arg, ::System::IDisposable* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::System::IDisposable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_SYNCPROCESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageCtrl*(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_DISPOSERREPLYSINK_ASYNCPROCESSMESSAGE_OFFSET))(arg, arg, nullptr);
		}

	};
}

