#pragma once
#include "../../../unitysdk.h"

namespace NPA { class NXPConsoleVirtualKeyboardDismissedResult; }

#define NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDDISMISSEDRESULT_TOPUBLICMODEL_OFFSET UNITYSDK_OFFSET(0x9C49AC0)
#define NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDDISMISSEDRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C49B50)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPVirtualKeyboardDismissedResult_TypeDefinitionIndex = 26857;

	class NXPVirtualKeyboardDismissedResult : public Il2CppObject
	{
	public:
		::System::Boolean submitted; // 0x20
		::System::String* submittedText; // 0x28

		::NPA::NXPConsoleVirtualKeyboardDismissedResult* ToPublicModel()
		{
			return (return (::NPA::NXPConsoleVirtualKeyboardDismissedResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDDISMISSEDRESULT_TOPUBLICMODEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPVIRTUALKEYBOARDDISMISSEDRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

