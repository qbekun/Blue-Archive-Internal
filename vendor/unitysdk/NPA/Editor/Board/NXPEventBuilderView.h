#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5C500)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_SETVISIBLEFORBACKPRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x9C5C870)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_SETCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9C52900)
#define NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C5CB10)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPEventBuilderView_TypeDefinitionIndex = 26903;

	class NXPEventBuilderView : public Il2CppObject
	{
	public:
		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void SetVisibleForBackPressButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_SETVISIBLEFORBACKPRESSBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetCloseButton(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_SETCLOSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPEVENTBUILDERVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

