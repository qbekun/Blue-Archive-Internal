#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATIONTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_SET_ACTIVATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_CONTEXTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int IConstructionCallMessage_TypeDefinitionIndex = 24509;

	class IConstructionCallMessage : public Il2CppObject
	{
	public:
		::System::Type* get_ActivationType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATIONTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ActivationTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATIONTYPENAME_OFFSET))(nullptr);
		}

		::System::Runtime::Remoting::Activation::IActivator* get_Activator()
		{
			return (return (::System::Runtime::Remoting::Activation::IActivator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_ACTIVATOR_OFFSET))(nullptr);
		}

		::System::Void set_Activator(::System::Runtime::Remoting::Activation::IActivator* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IActivator*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_SET_ACTIVATOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_CallSiteActivationAttributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_CALLSITEACTIVATIONATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Collections::IList* get_ContextProperties()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_GET_CONTEXTPROPERTIES_OFFSET))(nullptr);
		}

	};
}

