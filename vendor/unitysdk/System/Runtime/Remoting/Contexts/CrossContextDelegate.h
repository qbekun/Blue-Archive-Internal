#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E0950)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x91E0A10)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int CrossContextDelegate_TypeDefinitionIndex = 24479;

	class CrossContextDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CROSSCONTEXTDELEGATE_INVOKE_OFFSET))(nullptr);
		}

	};
}

