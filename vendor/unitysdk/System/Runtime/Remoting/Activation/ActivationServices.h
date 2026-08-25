#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET UNITYSDK_OFFSET(0x91E5C00)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x91D9FB0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET UNITYSDK_OFFSET(0x91E5CC0)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET UNITYSDK_OFFSET(0x91D8360)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET UNITYSDK_OFFSET(0x91E5F30)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET UNITYSDK_OFFSET(0x91E6370)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x91E6360)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET UNITYSDK_OFFSET(0x91E6490)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int ActivationServices_TypeDefinitionIndex = 24504;

	class ActivationServices : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Activation::IActivator* _constructionActivator; // 0x0

		::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_GET_CONSTRUCTIONACTIVATOR_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* arg, ::System::Runtime::Remoting::Messaging::ConstructionCall* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ACTIVATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_REMOTEACTIVATE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::ConstructionCall*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATECONSTRUCTIONCALL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessage*(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEINSTANCEFROMMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Object* CreateProxyForType(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_CREATEPROXYFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* AllocateUninitializedClassInstance(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ALLOCATEUNINITIALIZEDCLASSINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void EnableProxyActivation(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATIONSERVICES_ENABLEPROXYACTIVATION_OFFSET))(arg, arg, nullptr);
		}

	};
}

