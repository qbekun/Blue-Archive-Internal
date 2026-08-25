#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_SELECTIONGROUPEXTENSION_HIDEBORDER_OFFSET UNITYSDK_OFFSET(0x9D9E860)
#define NPA_EDITOR_SELECTIONGROUPEXTENSION_SHOWBORDER_OFFSET UNITYSDK_OFFSET(0x9D9E980)

namespace NPA::Editor
{
	inline static constexpr unsigned int SelectionGroupExtension_TypeDefinitionIndex = 26340;

	class SelectionGroupExtension : public Il2CppObject
	{
	public:
		::System::Void HideBorder(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SELECTIONGROUPEXTENSION_HIDEBORDER_OFFSET))(arg, nullptr);
		}

		::System::Void ShowBorder(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SELECTIONGROUPEXTENSION_SHOWBORDER_OFFSET))(arg, nullptr);
		}

	};
}

