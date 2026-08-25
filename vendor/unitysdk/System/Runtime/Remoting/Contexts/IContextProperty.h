#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_FREEZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_ISNEWCONTEXTOK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int IContextProperty_TypeDefinitionIndex = 24481;

	class IContextProperty : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void Freeze(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_FREEZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNewContextOK(::System::Runtime::Remoting::Contexts::Context* arg)
		{
			return (return (::System::Boolean(*)(::System::Runtime::Remoting::Contexts::Context*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_ISNEWCONTEXTOK_OFFSET))(arg, nullptr);
		}

	};
}

