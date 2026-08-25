#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEENVOYSINK_GETENVOYSINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContributeEnvoySink_TypeDefinitionIndex = 24484;

	class IContributeEnvoySink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* GetEnvoySink(::System::MarshalByRefObject* arg, ::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::System::MarshalByRefObject*, ::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEENVOYSINK_GETENVOYSINK_OFFSET))(arg, arg, nullptr);
		}

	};
}

