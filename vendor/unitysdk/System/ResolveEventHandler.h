#pragma once
#include "../unitysdk.h"

#define SYSTEM_RESOLVEEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9371A30)
#define SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9371B40)

namespace System
{
	inline static constexpr unsigned int ResolveEventHandler_TypeDefinitionIndex = 23825;

	class ResolveEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::Assembly* Invoke(::System::Object* arg, ::System::ResolveEventArgs* arg)
		{
			return (return (::System::Reflection::Assembly*(*)(::System::Object*, ::System::ResolveEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

