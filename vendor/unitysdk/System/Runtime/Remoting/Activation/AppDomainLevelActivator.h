#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E5EB0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91E64A0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x91E64B0)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int AppDomainLevelActivator_TypeDefinitionIndex = 24505;

	class AppDomainLevelActivator : public Il2CppObject
	{
	public:
		::System::String* _activationUrl; // 0x10
		::System::Runtime::Remoting::Activation::IActivator* _next; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Runtime::Remoting::Activation::IActivator* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Runtime::Remoting::Activation::IActivator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_NextActivator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_GET_NEXTACTIVATOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Activation::IConstructionReturnMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_APPDOMAINLEVELACTIVATOR_ACTIVATE_OFFSET))(arg, nullptr);
		}

	};
}

