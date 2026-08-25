#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91E69D0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x91E69E0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E5CB0)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ConstructionLevelActivator_TypeDefinitionIndex = 24506;

	class ConstructionLevelActivator : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_ACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_CONSTRUCTIONLEVELACTIVATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

