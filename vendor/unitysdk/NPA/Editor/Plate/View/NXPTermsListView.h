#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9BE79F0)
#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9BE7A00)
#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9BE7A10)
#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9BE7A20)
#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_ONCLICK_OFFSET UNITYSDK_OFFSET(0x9BE8450)
#define NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE84D0)

namespace NPA::Editor::Plate::View
{
	inline static constexpr unsigned int NXPTermsListView_TypeDefinitionIndex = 26466;

	class NXPTermsListView : public Il2CppObject
	{
	public:
		::System::String* termsListViewPrefabUrl; // 0x48
		::System::String* termsListItemPrefabUrl; // 0x50
		::System::String* termsListHeaderBasePath; // 0x58
		::System::String* termsListContentsBasePath; // 0x60
		::System::String* title; // 0x68
		Il2CppObject* termsList; // 0x70
		Il2CppObject* clickCallback; // 0x78

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetClickCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_SETCLICKCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void OnClick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_ONCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATE_VIEW_NXPTERMSLISTVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

