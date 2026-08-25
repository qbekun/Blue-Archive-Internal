#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPConsoleVirtualKeyboardTextInputLineMode; }

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleVirtualKeyboardTextInputLineMode_TypeDefinitionIndex = 25503;

	class NXPConsoleVirtualKeyboardTextInputLineMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPConsoleVirtualKeyboardTextInputLineMode* SingleLine; // 0x0
		::NPA::NXPConsoleVirtualKeyboardTextInputLineMode* MultipleLines; // 0x0

	};
}

