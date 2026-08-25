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

#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GET_UNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA3CBE30)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA3CBE40)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SHOWBORDER_OFFSET UNITYSDK_OFFSET(0xA3CBE70)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SELECTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA3CBEA0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET UNITYSDK_OFFSET(0xA3CBED0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CBF00)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xA3CC4F0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REBUILD_OFFSET UNITYSDK_OFFSET(0xA3CC650)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA3CC6F0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GETALLITEMS_OFFSET UNITYSDK_OFFSET(0xA3CC730)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA3CC800)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_LISTVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xA3CC620)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONITEMSCHOSEN_OFFSET UNITYSDK_OFFSET(0xA3CCF70)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA3CD390)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONTREEVIEWMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA3CD820)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONITEMMOUSEUP_OFFSET UNITYSDK_OFFSET(0xA3CD870)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_MAKETREEITEM_OFFSET UNITYSDK_OFFSET(0xA3CE110)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_UNBINDTREEITEM_OFFSET UNITYSDK_OFFSET(0xA3CE610)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_BINDTREEITEM_OFFSET UNITYSDK_OFFSET(0xA3CE750)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GETITEMID_OFFSET UNITYSDK_OFFSET(0xA3CEAF0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ISEXPANDEDBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3CC8A0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_COLLAPSEITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3CCD00)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_EXPANDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3CC9B0)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_TOGGLEEXPANDEDSTATE_OFFSET UNITYSDK_OFFSET(0xA3CF200)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_CREATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA3CEC80)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REGENERATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA3CC590)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0xA3CF390)
#define UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3CF500)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int InternalTreeView_TypeDefinitionIndex = 30417;

	class InternalTreeView : public Il2CppObject
	{
	public:
		::System::String* s_ListViewName; // 0x0
		::System::String* s_ItemToggleName; // 0x8
		::System::String* s_ItemIndentsContainerName; // 0x10
		::System::String* s_ItemIndentName; // 0x18
		::System::String* s_ItemContentContainerName; // 0x20
		::System::String* itemUssClassName; // 0x28
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
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GET_UNBINDITEM_OFFSET))(nullptr);
		}

		::System::Void set_itemHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_ITEMHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_showBorder(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SHOWBORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_selectionType(::UnityEngine::UIElements::SelectionType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::SelectionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SELECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AlternatingRowBackground*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REBUILD_OFFSET))(nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllItems(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GETALLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ListViewRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_LISTVIEWREFRESH_OFFSET))(nullptr);
		}

		::System::Void OnItemsChosen(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONITEMSCHOSEN_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelectionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONSELECTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTreeViewMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONTREEVIEWMOUSEUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemMouseUp(::UnityEngine::UIElements::MouseUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::MouseUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONITEMMOUSEUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* MakeTreeItem()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_MAKETREEITEM_OFFSET))(nullptr);
		}

		::System::Void UnbindTreeItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_UNBINDTREEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BindTreeItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_BINDTREEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetItemId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_GETITEMID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpandedByIndex(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ISEXPANDEDBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void CollapseItemByIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_COLLAPSEITEMBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandItemByIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_EXPANDITEMBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ToggleExpandedState(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_TOGGLEEXPANDEDSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateWrappers(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_CREATEWRAPPERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegenerateWrappers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_REGENERATEWRAPPERS_OFFSET))(nullptr);
		}

		::System::Void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_ONCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_INTERNALTREEVIEW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

