#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Label; }
namespace UnityEngine::UIElements { class Foldout; }
namespace UnityEngine::UIElements { class TextField; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class Button; }
namespace UnityEngine::UIElements { class ListViewController; }
namespace UnityEngine::UIElements { class ListViewReorderMode; }
namespace UnityEngine::UIElements { class ListViewDragger; }
namespace UnityEngine::UIElements { class ICollectionDragAndDropController; }

#define UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWBOUNDCOLLECTIONSIZE_OFFSET UNITYSDK_OFFSET(0xA3AAC90)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWBOUNDCOLLECTIONSIZE_OFFSET UNITYSDK_OFFSET(0xA3AACA0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWFOLDOUTHEADER_OFFSET UNITYSDK_OFFSET(0xA3AB0D0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWFOLDOUTHEADER_OFFSET UNITYSDK_OFFSET(0xA3AB0E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SETUPARRAYSIZEFIELD_OFFSET UNITYSDK_OFFSET(0xA3AACD0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SET_HEADERTITLE_OFFSET UNITYSDK_OFFSET(0xA3ABA00)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWADDREMOVEFOOTER_OFFSET UNITYSDK_OFFSET(0xA3AB4E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWADDREMOVEFOOTER_OFFSET UNITYSDK_OFFSET(0xA3ABA50)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ENABLEFOOTER_OFFSET UNITYSDK_OFFSET(0xA3AB4F0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ADDITEMS_OFFSET UNITYSDK_OFFSET(0xA3ABA60)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONARRAYSIZEFIELDCHANGED_OFFSET UNITYSDK_OFFSET(0xA3ABA90)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_UPDATEARRAYSIZEFIELD_OFFSET UNITYSDK_OFFSET(0xA3AB950)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_UPDATEEMPTY_OFFSET UNITYSDK_OFFSET(0xA3AB300)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONADDCLICKED_OFFSET UNITYSDK_OFFSET(0xA3ABBA0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONREMOVECLICKED_OFFSET UNITYSDK_OFFSET(0xA3ABED0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_GET_VIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3AC0A0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3AC0B0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3AC0F0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SETVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3AC150)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMADDED_OFFSET UNITYSDK_OFFSET(0xA3AC3C0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMSREMOVED_OFFSET UNITYSDK_OFFSET(0xA3AC3E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMSSOURCESIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA3AC400)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_GET_REORDERMODE_OFFSET UNITYSDK_OFFSET(0xA3AC490)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_SET_REORDERMODE_OFFSET UNITYSDK_OFFSET(0xA3AC4A0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEDRAGGER_OFFSET UNITYSDK_OFFSET(0xA3AC550)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3AC5E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3AC640)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_POSTREFRESH_OFFSET UNITYSDK_OFFSET(0xA3AC6D0)
#define UNITYENGINE_UIELEMENTS_LISTVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AC790)
#define UNITYENGINE_UIELEMENTS_LISTVIEW__ONADDCLICKED_B__34_0_OFFSET UNITYSDK_OFFSET(0xA3ACD90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListView_TypeDefinitionIndex = 30347;

	class ListView : public ::UnityEngine::Bindings::ThreadSafeAttribute
	{
	public:
		::System::String* k_SizeFieldLabel; // 0x0
		::System::Boolean m_ShowBoundCollectionSize; // 0x4B8
		::System::Boolean m_ShowFoldoutHeader; // 0x4B9
		::System::String* m_HeaderTitle; // 0x4C0
		Il2CppObject* itemsAdded; // 0x4C8
		Il2CppObject* itemsRemoved; // 0x4D0
		::UnityEngine::UIElements::Label* m_EmptyListLabel; // 0x4D8
		::UnityEngine::UIElements::Foldout* m_Foldout; // 0x4E0
		::UnityEngine::UIElements::TextField* m_ArraySizeField; // 0x4E8
		::UnityEngine::UIElements::VisualElement* m_Footer; // 0x4F0
		::UnityEngine::UIElements::Button* m_AddButton; // 0x4F8
		::UnityEngine::UIElements::Button* m_RemoveButton; // 0x500
		Il2CppObject* m_ItemAddedCallback; // 0x508
		Il2CppObject* m_ItemRemovedCallback; // 0x510
		::System::Action* m_ItemsSourceSizeChangedCallback; // 0x518
		::UnityEngine::UIElements::ListViewController* m_ListViewController; // 0x520
		::UnityEngine::UIElements::ListViewReorderMode* m_ReorderMode; // 0x528
		::System::String* ussClassName; // 0x8
		::System::String* itemUssClassName; // 0x10
		::System::String* emptyLabelUssClassName; // 0x18
		::System::String* reorderableUssClassName; // 0x20
		::System::String* reorderableItemUssClassName; // 0x28
		::System::String* reorderableItemContainerUssClassName; // 0x30
		::System::String* reorderableItemHandleUssClassName; // 0x38
		::System::String* reorderableItemHandleBarUssClassName; // 0x40
		::System::String* footerUssClassName; // 0x48
		::System::String* foldoutHeaderUssClassName; // 0x50
		::System::String* arraySizeFieldUssClassName; // 0x58
		::System::String* arraySizeFieldWithHeaderUssClassName; // 0x60
		::System::String* arraySizeFieldWithFooterUssClassName; // 0x68
		::System::String* listViewWithHeaderUssClassName; // 0x70
		::System::String* listViewWithFooterUssClassName; // 0x78
		::System::String* scrollViewWithFooterUssClassName; // 0x80
		::System::String* footerAddButtonName; // 0x88
		::System::String* footerRemoveButtonName; // 0x90

		::System::Boolean get_showBoundCollectionSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWBOUNDCOLLECTIONSIZE_OFFSET))(nullptr);
		}

		::System::Void set_showBoundCollectionSize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWBOUNDCOLLECTIONSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_showFoldoutHeader()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWFOLDOUTHEADER_OFFSET))(nullptr);
		}

		::System::Void set_showFoldoutHeader(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWFOLDOUTHEADER_OFFSET))(arg, nullptr);
		}

		::System::Void SetupArraySizeField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SETUPARRAYSIZEFIELD_OFFSET))(nullptr);
		}

		::System::Void set_headerTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SET_HEADERTITLE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_showAddRemoveFooter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_GET_SHOWADDREMOVEFOOTER_OFFSET))(nullptr);
		}

		::System::Void set_showAddRemoveFooter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SET_SHOWADDREMOVEFOOTER_OFFSET))(arg, nullptr);
		}

		::System::Void EnableFooter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ENABLEFOOTER_OFFSET))(arg, nullptr);
		}

		::System::Void AddItems(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ADDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void OnArraySizeFieldChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONARRAYSIZEFIELDCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateArraySizeField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_UPDATEARRAYSIZEFIELD_OFFSET))(nullptr);
		}

		::System::Void UpdateEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_UPDATEEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnAddClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONADDCLICKED_OFFSET))(nullptr);
		}

		::System::Void OnRemoveClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONREMOVECLICKED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ListViewController* get_viewController()
		{
			return (return (::UnityEngine::UIElements::ListViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_GET_VIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void CreateVirtualizationController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void CreateViewController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetViewController(::UnityEngine::UIElements::ListViewController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ListViewController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SETVIEWCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMADDED_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemsRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMSREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemsSourceSizeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_ONITEMSSOURCESIZECHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ListViewReorderMode* get_reorderMode()
		{
			return (return (::UnityEngine::UIElements::ListViewReorderMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_GET_REORDERMODE_OFFSET))(nullptr);
		}

		::System::Void set_reorderMode(::UnityEngine::UIElements::ListViewReorderMode* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ListViewReorderMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_SET_REORDERMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ListViewDragger* CreateDragger()
		{
			return (return (::UnityEngine::UIElements::ListViewDragger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEDRAGGER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController()
		{
			return (return (::UnityEngine::UIElements::ICollectionDragAndDropController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_POSTREFRESH_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _OnAddClicked_b__34_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEW__ONADDCLICKED_B__34_0_OFFSET))(nullptr);
		}

	};
}

