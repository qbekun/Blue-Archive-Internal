#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTECLIENTCONTEXTSINK_GETCLIENTCONTEXTSINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContributeClientContextSink_TypeDefinitionIndex = 24482;

	class IContributeClientContextSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSink(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTECLIENTCONTEXTSINK_GETCLIENTCONTEXTSINK_OFFSET))(arg, nullptr);
		}

	};
}

