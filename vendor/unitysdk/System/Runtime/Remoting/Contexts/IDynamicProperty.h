#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IDynamicProperty_TypeDefinitionIndex = 24488;

	class IDynamicProperty : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

	};
}

