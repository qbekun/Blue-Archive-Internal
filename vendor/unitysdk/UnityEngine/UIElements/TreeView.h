#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ListView; }
namespace UnityEngine::UIElements { class ScrollView; }
namespace UnityEngine::UIElements { class SelectionType; }
namespace UnityEngine::UIElements { class AlternatingRowBackground; }
namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine::UIElements { class MouseUpEvent; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }

#define UNITYENGINE_UIELEMENTS_TREEVIEW_GET_UNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA3C3B50)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_SET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3C3B60)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SHOWBORDER_OFFSET UNITYSDK_OFFSET(0xA3C3B90)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SELECTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA3C3BC0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET UNITYSDK_OFFSET(0xA3C3BF0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C3C20)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xA3C4210)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_REBUILD_OFFSET UNITYSDK_OFFSET(0xA3C4370)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA3C4410)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_GETALLITEMS_OFFSET UNITYSDK_OFFSET(0xA3C4450)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA3C4520)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_LISTVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xA3C4340)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONITEMSCHOSEN_OFFSET UNITYSDK_OFFSET(0xA3C4C90)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA3C50B0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONTREEVIEWMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA3C5540)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONITEMMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA3C5590)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_MAKETREEITEM_OFFSET UNITYSDK_OFFSET(0xA3C5E40)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_UNBINDTREEITEM_OFFSET UNITYSDK_OFFSET(0xA3C6340)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_BINDTREEITEM_OFFSET UNITYSDK_OFFSET(0xA3C6460)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_GETITEMID_OFFSET UNITYSDK_OFFSET(0xA3C6800)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ISEXPANDEDBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3C45D0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_COLLAPSEITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3C4A30)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_EXPANDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3C46E0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_TOGGLEEXPANDEDSTATE_OFFSET UNITYSDK_OFFSET(0xA3C6F10)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_CREATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA3C6990)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_REGENERATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA3C42B0)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_ONCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0xA3C7090)
#define UNITYENGINE_UIELEMENTS_TREEVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C7200)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TreeView_TypeDefinitionIndex = 30405;

	class TreeView : public Il2CppObject
	{
	public:
		::System::String* s_ListViewName; // 0x0
		::System::String* s_ItemName; // 0x8
		::System::String* s_ItemToggleName; // 0x10
		::System::String* s_ItemIndentsContainerName; // 0x18
		::System::String* s_ItemIndentName; // 0x20
		::System::String* s_ItemContentContainerName; // 0x28
		Il2CppObject* m_MakeItem; // 0x3B0
		Il2CppObject* onItemsChosen; // 0x3B8
		Il2CppObject* onSelectionChange; // 0x3C0
		Il2CppObject* m_SelectedItems; // 0x3C8
		Il2CppObject* m_BindItem; // 0x3D0
		Il2CppObject* _unbindItem_k__BackingField; // 0x3D8
		Il2CppObject* m_RootItems; // 0x3E0
		Il2CppObject* m_ExpandedItemIds; // 0x3E8
		Il2CppObject* m_ItemWrappers; // 0x3F0
		::UnityEngine::UIElements::ListView* m_ListView; // 0x3F8
		::UnityEngine::UIElements::ScrollView* m_ScrollView; // 0x400

		Il2CppObject* get_unbindItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_GET_UNBINDITEM_OFFSET))(nullptr);
		}

		::System::Void set_itemHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_SET_ITEMHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_showBorder(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SHOWBORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_selectionType(::UnityEngine::UIElements::SelectionType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::SelectionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SELECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AlternatingRowBackground*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_REBUILD_OFFSET))(nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllItems(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_GETALLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ListViewRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_LISTVIEWREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnItemsChosen(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONITEMSCHOSEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONSELECTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTreeViewMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONTREEVIEWMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONITEMMOUSEUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* MakeTreeItem()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_MAKETREEITEM_OFFSET))(nullptr);
		}

		::System::Void UnbindTreeItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_UNBINDTREEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BindTreeItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_BINDTREEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetItemId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_GETITEMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpandedByIndex(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ISEXPANDEDBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void CollapseItemByIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_COLLAPSEITEMBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandItemByIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_EXPANDITEMBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleExpandedState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_TOGGLEEXPANDEDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateWrappers(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_CREATEWRAPPERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegenerateWrappers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_REGENERATEWRAPPERS_OFFSET))(nullptr);
		}

		::System::Void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_ONCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

