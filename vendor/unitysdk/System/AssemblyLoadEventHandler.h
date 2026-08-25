#pragma once
#include "../unitysdk.h"

#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278960)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9278A70)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventHandler_TypeDefinitionIndex = 23710;

	class AssemblyLoadEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::AssemblyLoadEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::AssemblyLoadEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

