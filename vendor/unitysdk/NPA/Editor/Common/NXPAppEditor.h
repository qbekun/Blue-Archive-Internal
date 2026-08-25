#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXPAPPEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C44620)
#define NPA_EDITOR_COMMON_NXPAPPEDITOR_GETEDITORHWID_OFFSET UNITYSDK_OFFSET(0x9C447A0)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppEditor_TypeDefinitionIndex = 26839;

	class NXPAppEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPEDITOR_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetEditorHwid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPEDITOR_GETEDITORHWID_OFFSET))(nullptr);
		}

	};
}

