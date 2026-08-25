#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }
namespace NPA::Editor::Network { class NXPBasePlateRecipeInfo; }

#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9BE6980)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETPLATEINFO_OFFSET UNITYSDK_OFFSET(0x9BE6990)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BE69A0)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9BE69B0)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_CREATESELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9BE7410)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x9BE7630)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x9BE7770)
#define NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE78A0)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPPlateView_TypeDefinitionIndex = 26464;

	class NXPPlateView : public Il2CppObject
	{
	public:
		::System::String* plateImageBaseUrl; // 0x48
		::System::String* plateViewPrefabUrl; // 0x50
		::System::String* plateItemPrefabUrl; // 0x58
		::System::String* plateHeaderBasePath; // 0x0
		::System::String* plateContentsBasePath; // 0x0
		::System::String* title; // 0x60
		Il2CppObject* recipeInfos; // 0x68
		Il2CppObject* clickCallback; // 0x70

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetPlateInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETPLATEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SETONCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void CreateSelectionGroup(::UnityEngine::GameObject* arg, ::UnityEngine::UI::Selectable* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::UI::Selectable*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_CREATESELECTIONGROUP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_SHOW_OFFSET))(nullptr);
		}

		::System::Void OnItemClick(::NPA::Editor::Network::NXPBasePlateRecipeInfo* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPBasePlateRecipeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_ONITEMCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPPLATEVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

