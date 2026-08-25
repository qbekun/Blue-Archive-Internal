#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9BE8640)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETUSERCONSENTLIST_OFFSET UNITYSDK_OFFSET(0x9BE8650)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BE8660)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9BE8670)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9BE9720)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9BE9950)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETUSERCONSENTITEMTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x9BE9970)
#define NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE9A30)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPUserConsentListView_TypeDefinitionIndex = 26469;

	class NXPUserConsentListView : public Il2CppObject
	{
	public:
		::System::String* userConsentListViewPrefabUrl; // 0x48
		::System::String* userConsentListItemViewPrefabUrl; // 0x50
		::System::String* userConsentListHeaderBasePath; // 0x58
		::System::String* userConsentListContentsBasePath; // 0x60
		::System::String* title; // 0x68
		Il2CppObject* userConsentList; // 0x70
		Il2CppObject* activeToggleDictionary; // 0x78
		Il2CppObject* clickCallback; // 0x80

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetUserConsentList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETUSERCONSENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnClick(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_ONCLICK_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetUserConsentItemToggleState(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_SETUSERCONSENTITEMTOGGLESTATE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPUSERCONSENTLISTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

