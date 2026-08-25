#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class NXPVirtualKeyboardTextInputLineMode; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardTextInputMode; }
namespace NPA::Editor::Common { class NXPVirtualKeyboardOption; }
namespace NPA { class NXPConsoleVirtualKeyboardOption; }

#define NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDOPTION_FROMPUBLICMODEL_OFFSET UNITYSDK_OFFSET(0x9C49BA0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPVirtualKeyboardOption_TypeDefinitionIndex = 26860;

	class NXPVirtualKeyboardOption : public Il2CppObject
	{
	public:
		::System::String* dialogDescription; // 0x10
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputLineMode* textInputLineMode; // 0x18
		::NPA::Editor::Common::NXPVirtualKeyboardTextInputMode* textInputMode; // 0x1C
		::System::UInt32 maxInputLength; // 0x20
		::System::String* existingText; // 0x28

		::NPA::Editor::Common::NXPVirtualKeyboardOption* FromPublicModel(::NPA::NXPConsoleVirtualKeyboardOption* arg)
		{
			return (return (::NPA::Editor::Common::NXPVirtualKeyboardOption*(*)(::NPA::NXPConsoleVirtualKeyboardOption*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDOPTION_FROMPUBLICMODEL_OFFSET))(arg, nullptr);
		}

	};
}

