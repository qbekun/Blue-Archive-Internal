#pragma once
#include "../../../unitysdk.h"

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DllImportSearchPath_TypeDefinitionIndex = 24705;

	class DllImportSearchPath : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::InteropServices::DllImportSearchPath* UseDllDirectoryForDependencies; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* ApplicationDirectory; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* UserDirectories; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* System32; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* SafeDirectories; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* AssemblyDirectory; // 0x0
		::System::Runtime::InteropServices::DllImportSearchPath* LegacyBehavior; // 0x0

	};
}

