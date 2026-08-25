#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPVirtualKeyboardTextInputLineMode; }

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPVirtualKeyboardTextInputLineMode_TypeDefinitionIndex = 26859;

	class NXPVirtualKeyboardTextInputLineMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputLineMode* SingleLine; // 0x0
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputLineMode* MultipleLines; // 0x0

	};
}

