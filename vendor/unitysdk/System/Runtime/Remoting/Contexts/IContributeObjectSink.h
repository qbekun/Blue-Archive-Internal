#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEOBJECTSINK_GETOBJECTSINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContributeObjectSink_TypeDefinitionIndex = 24485;

	class IContributeObjectSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* GetObjectSink(::System::MarshalByRefObject* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEOBJECTSINK_GETOBJECTSINK_OFFSET))(arg, arg, nullptr);
		}

	};
}

