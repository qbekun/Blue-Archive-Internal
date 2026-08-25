#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Button; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace NPA::Editor { class NXPToyAlertDialog; }
namespace NPA::Editor { class NXPToyAlertDialogData; }

#define NPA_EDITOR_NXPTOYALERTDIALOG_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D93980)
#define NPA_EDITOR_NXPTOYALERTDIALOG_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D93990)
#define NPA_EDITOR_NXPTOYALERTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x9D939A0)
#define NPA_EDITOR_NXPTOYALERTDIALOG_SELECTIONGROUPEXIT_OFFSET UNITYSDK_OFFSET(0x9D95510)
#define NPA_EDITOR_NXPTOYALERTDIALOG_UPDATECONTENT_OFFSET UNITYSDK_OFFSET(0x9D943F0)
#define NPA_EDITOR_NXPTOYALERTDIALOG_DISSMISS_OFFSET UNITYSDK_OFFSET(0x9D955B0)
#define NPA_EDITOR_NXPTOYALERTDIALOG_ONPROCESSCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x9D95520)
#define NPA_EDITOR_NXPTOYALERTDIALOG_ONPROCESSCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0x9D95630)
#define NPA_EDITOR_NXPTOYALERTDIALOG_APPLYTHEME_OFFSET UNITYSDK_OFFSET(0x9D945D0)
#define NPA_EDITOR_NXPTOYALERTDIALOG_CREATEBUILDER_OFFSET UNITYSDK_OFFSET(0x9D956C0)
#define NPA_EDITOR_NXPTOYALERTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D95720)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyAlertDialog_TypeDefinitionIndex = 26316;

	class NXPToyAlertDialog : public Il2CppObject
	{
	public:
		::System::String* DialogTag; // 0x0
		::System::String* _activityID; // 0x18
		::UnityEngine::UI::Text* titleLabel; // 0x20
		::UnityEngine::UI::Text* messageLabel; // 0x28
		::UnityEngine::UI::Text* confirmButtonLabel; // 0x30
		::UnityEngine::UI::Button* confirmButton; // 0x38
		::System::Action* confirmButtonAction; // 0x40
		::UnityEngine::UI::Text* cancelButtonLabel; // 0x48
		::UnityEngine::UI::Button* cancelButton; // 0x50
		::System::Action* cancelButtonAction; // 0x58
		::NPA::Editor::NXPSelectionGroup* _selectionGroup_k__BackingField; // 0x60
		AlertTheme* currentTheme; // 0x68

		::NPA::Editor::NXPSelectionGroup* get_selectionGroup()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_selectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPToyAlertDialog* Show(::System::String* str, ::System::String* str, ::NPA::Editor::NXPToyAlertDialogData* arg)
		{
			return (return (::NPA::Editor::NXPToyAlertDialog*(*)(::System::String*, ::System::String*, ::NPA::Editor::NXPToyAlertDialogData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_SHOW_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SelectionGroupExit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_SELECTIONGROUPEXIT_OFFSET))(nullptr);
		}

		::System::Void UpdateContent(::System::String* str, ::System::String* str, ::NPA::Editor::NXPToyAlertDialogData* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::Editor::NXPToyAlertDialogData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_UPDATECONTENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Dissmiss()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_DISSMISS_OFFSET))(nullptr);
		}

		::System::Void OnProcessCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_ONPROCESSCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnProcessConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_ONPROCESSCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void ApplyTheme(AlertTheme* arg)
		{
			((::System::Void(*)(AlertTheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_APPLYTHEME_OFFSET))(arg, nullptr);
		}

		Builder* CreateBuilder()
		{
			return (return (Builder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_CREATEBUILDER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYALERTDIALOG_.CTOR_OFFSET))(nullptr);
		}

	};
}

