#pragma once
#include "../unitysdk.h"

namespace System
{
	inline static constexpr unsigned int PlatformID_TypeDefinitionIndex = 23986;

	class PlatformID : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::PlatformID* Win32S; // 0x0
		::System::PlatformID* Win32Windows; // 0x0
		::System::PlatformID* Win32NT; // 0x0
		::System::PlatformID* WinCE; // 0x0
		::System::PlatformID* Unix; // 0x0
		::System::PlatformID* Xbox; // 0x0
		::System::PlatformID* MacOSX; // 0x0

	};
}

