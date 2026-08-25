#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET UNITYSDK_OFFSET(0x91DF480)
#define SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DF470)

namespace System::Runtime::Remoting::Contexts
{
	inline static constexpr unsigned int ContextCallbackObject_TypeDefinitionIndex = 24476;

	class ContextCallbackObject : public Il2CppObject
	{
	public:
		::System::Void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Contexts::CrossContextDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_DOCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXTCALLBACKOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

