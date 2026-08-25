#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyNameFlags_TypeDefinitionIndex = 24840;

	class AssemblyNameFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::AssemblyNameFlags* None; // 0x0
		::System::Reflection::AssemblyNameFlags* PublicKey; // 0x0
		::System::Reflection::AssemblyNameFlags* EnableJITcompileOptimizer; // 0x0
		::System::Reflection::AssemblyNameFlags* EnableJITcompileTracking; // 0x0
		::System::Reflection::AssemblyNameFlags* Retargetable; // 0x0

	};
}

