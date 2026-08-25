#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Win32ProcessInformation_TypeDefinitionIndex = 26598;

	class Win32ProcessInformation : public Il2CppObject
	{
	public:
		::System::Int32 hProcess; // 0x10
		::System::Int32 hThread; // 0x18
		::System::UInt32 dwProcessId; // 0x20
		::System::UInt32 dwThreadId; // 0x24

	};
}

