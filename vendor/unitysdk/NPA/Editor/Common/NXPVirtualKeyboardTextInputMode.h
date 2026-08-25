#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPVirtualKeyboardTextInputMode; }

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPVirtualKeyboardTextInputMode_TypeDefinitionIndex = 26858;

	class NXPVirtualKeyboardTextInputMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputMode* Normal; // 0x0
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputMode* Password; // 0x0

	};
}

