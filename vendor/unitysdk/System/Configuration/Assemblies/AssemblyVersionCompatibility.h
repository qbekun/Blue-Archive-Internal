#pragma once
#include "../../../unitysdk.h"

namespace System::Configuration::Assemblies
{
	inline static constexpr unsigned int AssemblyVersionCompatibility_TypeDefinitionIndex = 25048;

	class AssemblyVersionCompatibility : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Configuration::Assemblies::AssemblyVersionCompatibility* SameMachine; // 0x0
		::System::Configuration::Assemblies::AssemblyVersionCompatibility* SameProcess; // 0x0
		::System::Configuration::Assemblies::AssemblyVersionCompatibility* SameDomain; // 0x0

	};
}

