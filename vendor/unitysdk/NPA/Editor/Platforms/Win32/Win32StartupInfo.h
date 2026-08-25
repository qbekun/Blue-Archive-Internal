#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Win32StartupInfo_TypeDefinitionIndex = 26599;

	class Win32StartupInfo : public Il2CppObject
	{
	public:
		::System::UInt32 cb; // 0x10
		::System::Int32 lpReserved; // 0x18
		::System::Int32 lpDesktop; // 0x20
		::System::Int32 lpTitle; // 0x28
		::System::UInt32 dwX; // 0x30
		::System::UInt32 dwY; // 0x34
		::System::UInt32 dwXSize; // 0x38
		::System::UInt32 dwYSize; // 0x3C
		::System::UInt32 dwXCountChars; // 0x40
		::System::UInt32 dwYCountChars; // 0x44
		::System::UInt32 dwFillAttribute; // 0x48
		::System::UInt32 dwFlags; // 0x4C
		::System::UInt16 wShowWindow; // 0x50
		::System::UInt16 cbReserved2; // 0x52
		::System::Int32 lpReserved2; // 0x58
		::System::Int32 hStdInput; // 0x60
		::System::Int32 hStdOutput; // 0x68
		::System::Int32 hStdError; // 0x70

	};
}

