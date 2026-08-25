#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEDYNAMICSINK_GETDYNAMICSINK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContributeDynamicSink_TypeDefinitionIndex = 24483;

	class IContributeDynamicSink : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Contexts::IDynamicMessageSink* GetDynamicSink()
		{
			return (return (::System::Runtime::Remoting::Contexts::IDynamicMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTRIBUTEDYNAMICSINK_GETDYNAMICSINK_OFFSET))(nullptr);
		}

	};
}

