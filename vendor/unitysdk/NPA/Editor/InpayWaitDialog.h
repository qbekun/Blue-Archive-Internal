#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class InpayWaitDialogObject; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_INPAYWAITDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9D96260)
#define NPA_EDITOR_INPAYWAITDIALOG_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D96610)
#define NPA_EDITOR_INPAYWAITDIALOG_SELECTIONGROUPBACK_OFFSET UNITYSDK_OFFSET(0x9D96920)
#define NPA_EDITOR_INPAYWAITDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9D96930)
#define NPA_EDITOR_INPAYWAITDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D969E0)

namespace NPA::Editor
{
	inline static constexpr unsigned int InpayWaitDialog_TypeDefinitionIndex = 26322;

	class InpayWaitDialog : public Il2CppObject
	{
	public:
		::System::String* DialogTag; // 0x0
		::System::String* _activityID; // 0x10
		::NPA::Editor::InpayWaitDialogObject* waitDialogObject; // 0x18
		::NPA::Editor::NXPSelectionGroup* selectionGroup; // 0x20
		::UnityEngine::GameObject* gameObject; // 0x28

		::System::Void Show(::System::Action* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOG_SHOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOG_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SelectionGroupBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOG_SELECTIONGROUPBACK_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INPAYWAITDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

