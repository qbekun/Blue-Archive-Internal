#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Win32ProcessEntry32_TypeDefinitionIndex = 26600;

	class Win32ProcessEntry32 : public Il2CppObject
	{
	public:
		::System::UInt32 dwSize; // 0x10
		::System::UInt32 cntUsage; // 0x14
		::System::UInt32 th32ProcessID; // 0x18
		::System::Int32 th32DefaultHeapID; // 0x20
		::System::UInt32 th32ModuleID; // 0x28
		::System::UInt32 cntThreads; // 0x2C
		::System::UInt32 th32ParentProcessID; // 0x30
		::System::Int32 pcPriClassBase; // 0x34
		::System::UInt32 dwFlags; // 0x38
		::System::String* szExeFile; // 0x40

	};
}

