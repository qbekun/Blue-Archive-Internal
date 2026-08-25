#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Selectable; }
namespace NPA::Editor { class NXPSelectionGroupManager; }
namespace NPA { class UINavigationFeatureActivationStatusType; }
namespace NPA::Editor { class NXPSelectionGroup; }
namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_ISINPUTMANAGERENABLED_OFFSET UNITYSDK_OFFSET(0x9D9EAA0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SET_ISINPUTMANAGERENABLED_OFFSET UNITYSDK_OFFSET(0x9D9EAF0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x9D95190)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_CURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D9EB40)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SET_CURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x9D98C20)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDPREVIOUSSELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D9EB50)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVEPREVIOUSSELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D9EC80)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_RESTOREPREVIOUSSELECTABLES_OFFSET UNITYSDK_OFFSET(0x9D9A850)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDSELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D99690)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D9ACE0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDPREVGROUP_OFFSET UNITYSDK_OFFSET(0x9D9ED00)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVEPREVGROUP_OFFSET UNITYSDK_OFFSET(0x9D9AA40)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_LASTPREVGROUP_OFFSET UNITYSDK_OFFSET(0x9D9AAD0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9D94FA0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D9EF60)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9D9F150)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ISINPUTMANAGERACTIVATEDBYREFLECTION_OFFSET UNITYSDK_OFFSET(0x9D9F230)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_CHECKFORINPUTSYSTEMPACKAGE_OFFSET UNITYSDK_OFFSET(0x9D9F070)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9D9F400)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SETSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x9D9F590)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GETCURRENTSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x9D9F720)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SETFIRSTSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x9D9F7D0)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D95240)
#define NPA_EDITOR_NXPSELECTIONGROUPMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D9F890)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPSelectionGroupManager_TypeDefinitionIndex = 26341;

	class NXPSelectionGroupManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* assemblies; // 0x0
		::System::Boolean hasInputSystemPackage; // 0x8
		::System::Boolean _IsInputManagerEnabled_k__BackingField; // 0x9
		::UnityEngine::UI::Selectable* currentSelection; // 0x10
		Il2CppObject* previousSelectables; // 0x18
		Il2CppObject* currentGroups; // 0x20
		Il2CppObject* prevGroups; // 0x28
		::System::Object* syncObject; // 0x10
		::NPA::Editor::NXPSelectionGroupManager* instance; // 0x18

		::System::Boolean get_IsInputManagerEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_ISINPUTMANAGERENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IsInputManagerEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SET_ISINPUTMANAGERENABLED_OFFSET))(arg, nullptr);
		}

		::NPA::UINavigationFeatureActivationStatusType* get_UINavigationFeatureActivationStatus()
		{
			return (return (::NPA::UINavigationFeatureActivationStatusType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_UINAVIGATIONFEATUREACTIVATIONSTATUS_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* get_CurrentSelection()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_CURRENTSELECTION_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSelection(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SET_CURRENTSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddPreviousSelectables(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDPREVIOUSSELECTABLES_OFFSET))(arg, nullptr);
		}

		::System::Void RemovePreviousSelectables(::UnityEngine::UI::Selectable* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Selectable*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVEPREVIOUSSELECTABLES_OFFSET))(arg, nullptr);
		}

		::System::Void RestorePreviousSelectables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_RESTOREPREVIOUSSELECTABLES_OFFSET))(nullptr);
		}

		::System::Void AddSelectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDSELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveSelectionGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVESELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void AddPrevGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ADDPREVGROUP_OFFSET))(nullptr);
		}

		::System::Void RemovePrevGroup(::NPA::Editor::NXPSelectionGroup* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPSelectionGroup*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_REMOVEPREVGROUP_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPSelectionGroup* LastPrevGroup()
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_LASTPREVGROUP_OFFSET))(nullptr);
		}

		::NPA::Editor::NXPSelectionGroupManager* get_Instance()
		{
			return (return (::NPA::Editor::NXPSelectionGroupManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnSubsystemRegistration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ONSUBSYSTEMREGISTRATION_OFFSET))(nullptr);
		}

		::System::Boolean IsInputManagerActivatedByReflection(::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_ISINPUTMANAGERACTIVATEDBYREFLECTION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckForInputSystemPackage()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_CHECKFORINPUTSYSTEMPACKAGE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void SetSelectedGameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SETSELECTEDGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetCurrentSelectedObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_GETCURRENTSELECTEDOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetFirstSelectedObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_SETFIRSTSELECTEDOBJECT_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::NXPSelectionGroup* CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::NPA::Editor::NXPSelectionGroup*(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPSELECTIONGROUPMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

