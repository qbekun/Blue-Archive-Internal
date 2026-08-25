#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_PROCESSMESSAGEFINISH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_PROCESSMESSAGESTART_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IDynamicMessageSink_TypeDefinitionIndex = 24487;

	class IDynamicMessageSink : public Il2CppObject
	{
	public:
		::System::Void ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_PROCESSMESSAGEFINISH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICMESSAGESINK_PROCESSMESSAGESTART_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

