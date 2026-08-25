#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPConsoleVirtualKeyboardTextInputMode; }

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleVirtualKeyboardTextInputMode_TypeDefinitionIndex = 25502;

	class NXPConsoleVirtualKeyboardTextInputMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPConsoleVirtualKeyboardTextInputMode* Normal; // 0x0
		::NPA::NXPConsoleVirtualKeyboardTextInputMode* Password; // 0x0

	};
}

