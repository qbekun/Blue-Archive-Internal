#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E6E60)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x91E6E90)
#define SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x91E6EA0)

namespace System::Runtime::Remoting::Activation
{
	inline static constexpr unsigned int RemoteActivationAttribute_TypeDefinitionIndex = 24511;

	class RemoteActivationAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Collections::IList* _contextProperties; // 0x10

		::System::Void .ctor(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContextOK(::System::Runtime::Remoting::Contexts::Context* arg, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_ISCONTEXTOK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ACTIVATION_REMOTEACTIVATIONATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET))(arg, nullptr);
		}

	};
}

