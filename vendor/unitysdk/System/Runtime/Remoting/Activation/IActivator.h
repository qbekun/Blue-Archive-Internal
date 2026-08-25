#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int IActivator_TypeDefinitionIndex = 24508;

	class IActivator : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_ACTIVATE_OFFSET))(arg, nullptr);
		}

	};
}

