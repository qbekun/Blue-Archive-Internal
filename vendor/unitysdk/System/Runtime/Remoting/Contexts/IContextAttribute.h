#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_ISCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContextAttribute_TypeDefinitionIndex = 24480;

	class IContextAttribute : public Il2CppObject
	{
	public:
		::System::Void GetPropertiesForNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_GETPROPERTIESFORNEWCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContextOK(::System::Runtime::Remoting::Contexts::Context* arg, ::System::Runtime::Remoting::Activation::IConstructionCallMessage* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::Context*, ::System::Runtime::Remoting::Activation::IConstructionCallMessage*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_ISCONTEXTOK_OFFSET))(arg, arg, nullptr);
		}

	};
}

