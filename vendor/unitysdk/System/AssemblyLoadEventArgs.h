#pragma once
#include "../unitysdk.h"

#define SYSTEM_ASSEMBLYLOADEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278900)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventArgs_TypeDefinitionIndex = 23709;

	class AssemblyLoadEventArgs : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* _LoadedAssembly_k__BackingField; // 0x10

		::System::Void .ctor(::System::Reflection::Assembly* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

