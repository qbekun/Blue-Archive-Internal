#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E5F00)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91E6AE0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x91E6AF0)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ContextLevelActivator_TypeDefinitionIndex = 24507;

	class ContextLevelActivator : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* m_NextActivator; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Activation::IActivator* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IActivator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONTEXTLEVELACTIVATOR_ACTIVATE_OFFSET))(arg, nullptr);
		}

	};
}

