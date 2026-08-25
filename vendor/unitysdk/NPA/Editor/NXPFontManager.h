#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPFontData; }

#define NPA_EDITOR_NXPFONTMANAGER_GETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0x9DA2CC0)
#define NPA_EDITOR_NXPFONTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA31E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPFontManager_TypeDefinitionIndex = 26357;

	class NXPFontManager : public Il2CppObject
	{
	public:
		::System::String* baseFontPath; // 0x0
		::System::String* currentFontGroup; // 0x0
		::NPA::Editor::NXPFontData* fontData; // 0x8

		::NPA::Editor::NXPFontData* GetDefaultFont()
		{
			return (return (::NPA::Editor::NXPFontData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFONTMANAGER_GETDEFAULTFONT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPFONTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

