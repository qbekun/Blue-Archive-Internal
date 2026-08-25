#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTESERVERCONTEXTSINK_GETSERVERCONTEXTSINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContributeServerContextSink_TypeDefinitionIndex = 24486;

	class IContributeServerContextSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTESERVERCONTEXTSINK_GETSERVERCONTEXTSINK_OFFSET))(arg, nullptr);
		}

	};
}

