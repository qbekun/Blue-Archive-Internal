#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPConsoleVirtualKeyboardTextInputLineMode; }
namespace NPA { class NXPConsoleVirtualKeyboardTextInputMode; }

namespace NPA
{
	inline static constexpr unsigned int NXPConsoleVirtualKeyboardOption_TypeDefinitionIndex = 25506;

	class NXPConsoleVirtualKeyboardOption : public Il2CppObject
	{
	public:
		::System::String* dialogDescription; // 0x10
		::NPA::NXPConsoleVirtualKeyboardTextInputLineMode* textInputLineMode; // 0x18
		::NPA::NXPConsoleVirtualKeyboardTextInputMode* textInputMode; // 0x1C
		::System::UInt32 maxInputLength; // 0x20
		::System::String* existingText; // 0x28

	};
}

