#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_INSIGNLOGINWAITDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9D96A60)
#define NPA_EDITOR_INSIGNLOGINWAITDIALOG_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D96DD0)
#define NPA_EDITOR_INSIGNLOGINWAITDIALOG_SELECTIONGROUPBACK_OFFSET UNITYSDK_OFFSET(0x9D97030)
#define NPA_EDITOR_INSIGNLOGINWAITDIALOG_DISMISS_OFFSET UNITYSDK_OFFSET(0x9D97040)
#define NPA_EDITOR_INSIGNLOGINWAITDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D970F0)

namespace NPA::Editor
{
	inline static constexpr unsigned int InsignLoginWaitDialog_TypeDefinitionIndex = 26324;

	class InsignLoginWaitDialog : public Il2CppObject
	{
	public:
		::System::String* DialogTag; // 0x0
		::System::String* _activityID; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::NPA::Editor::NXPSelectionGroup* selectionGroup; // 0x20

		::System::Void Show(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INSIGNLOGINWAITDIALOG_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INSIGNLOGINWAITDIALOG_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SelectionGroupBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INSIGNLOGINWAITDIALOG_SELECTIONGROUPBACK_OFFSET))(nullptr);
		}

		::System::Void Dismiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INSIGNLOGINWAITDIALOG_DISMISS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_INSIGNLOGINWAITDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

