#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class RectTransform; }

#define NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C5CAD0)
#define NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C5CB20)
#define NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C5CC40)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int CloseButtonUpdater_TypeDefinitionIndex = 26904;

	class CloseButtonUpdater : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* _rectTransform; // 0x18
		::System::Action* _onCloseCallback; // 0x20

		::System::Void Initialize(::UnityEngine::RectTransform* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_CLOSEBUTTONUPDATER_.CTOR_OFFSET))(nullptr);
		}

	};
}

