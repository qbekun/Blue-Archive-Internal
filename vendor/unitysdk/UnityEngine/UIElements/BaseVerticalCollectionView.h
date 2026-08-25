#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class SelectionType; }
namespace UnityEngine::UIElements { class SerializedVirtualizationData; }
namespace UnityEngine::UIElements { class AlternatingRowBackground; }
namespace UnityEngine::UIElements { class CollectionVirtualizationMethod; }
namespace UnityEngine::UIElements { class ScrollView; }
namespace UnityEngine::UIElements { class CollectionViewController; }
namespace UnityEngine::UIElements { class CollectionVirtualizationController; }
namespace UnityEngine::UIElements { class KeyboardNavigationManipulator; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class ListViewDragger; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class ICollectionDragAndDropController; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }
namespace UnityEngine::UIElements { class KeyboardNavigationOperation; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerCancelEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }
namespace UnityEngine::UIElements { class CustomStyleResolvedEvent; }

#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADD_ONITEMSCHOSEN_OFFSET UNITYSDK_OFFSET(0xA3987B0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVE_ONITEMSCHOSEN_OFFSET UNITYSDK_OFFSET(0xA398850)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADD_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA3988F0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVE_ONSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA398990)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_GETITEMID_OFFSET UNITYSDK_OFFSET(0xA398A30)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_GETITEMID_OFFSET UNITYSDK_OFFSET(0xA398A40)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xA398B70)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xA398B90)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_MAKEITEM_OFFSET UNITYSDK_OFFSET(0xA398C30)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_MAKEITEM_OFFSET UNITYSDK_OFFSET(0xA398C40)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xA398D90)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_BINDITEM_OFFSET UNITYSDK_OFFSET(0xA398DA0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_UNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA398E60)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_UNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA398E70)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0xA398E90)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA398EA0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA398EB0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SELECTIONTYPE_OFFSET UNITYSDK_OFFSET(0xA398EC0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA399130)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0xA3991A0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDINDICES_OFFSET UNITYSDK_OFFSET(0xA399220)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDIDS_OFFSET UNITYSDK_OFFSET(0xA399230)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_ACTIVEITEMS_OFFSET UNITYSDK_OFFSET(0xA399240)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA3992C0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_DRAGGER_OFFSET UNITYSDK_OFFSET(0xA3992D0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3992E0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIRTUALIZATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3992F0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_RESOLVEITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA399370)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SHOWBORDER_OFFSET UNITYSDK_OFFSET(0xA399470)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_REORDERABLE_OFFSET UNITYSDK_OFFSET(0xA399500)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_REORDERABLE_OFFSET UNITYSDK_OFFSET(0xA3995E0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_HORIZONTALSCROLLINGENABLED_OFFSET UNITYSDK_OFFSET(0xA399780)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET UNITYSDK_OFFSET(0xA3997E0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET UNITYSDK_OFFSET(0xA3997F0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIRTUALIZATIONMETHOD_OFFSET UNITYSDK_OFFSET(0xA3998A0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_VIRTUALIZATIONMETHOD_OFFSET UNITYSDK_OFFSET(0xA3998B0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_FIXEDITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA399960)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_FIXEDITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0xA399970)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_LASTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA399B10)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA399B20)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETORCREATEVIRTUALIZATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA399330)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETORCREATEVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA398BF0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA399B60)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETVIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA399BC0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEDRAGGER_OFFSET UNITYSDK_OFFSET(0xA399C80)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_INITIALIZEDRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA399CE0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA399E60)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETROOTELEMENTFORID_OFFSET UNITYSDK_OFFSET(0xA39A530)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_HASVALIDDATAANDBINDINGS_OFFSET UNITYSDK_OFFSET(0xA39A690)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONITEMINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA39A6D0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONITEMSSOURCECHANGED_OFFSET UNITYSDK_OFFSET(0xA39A780)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xA398AE0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REBUILD_OFFSET UNITYSDK_OFFSET(0xA398D00)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REFRESHSELECTION_OFFSET UNITYSDK_OFFSET(0xA39A7A0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_POSTREFRESH_OFFSET UNITYSDK_OFFSET(0xA39AA90)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SCROLLTOITEM_OFFSET UNITYSDK_OFFSET(0xA39AD50)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA39AE00)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_RESIZE_OFFSET UNITYSDK_OFFSET(0xA39AC90)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA39AEB0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONDETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA39B220)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_APPLY_OFFSET UNITYSDK_OFFSET(0xA39B500)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_APPLY_OFFSET UNITYSDK_OFFSET(0xA39C3E0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERMOVE_OFFSET UNITYSDK_OFFSET(0xA39C4C0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA39CFE0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERCANCEL_OFFSET UNITYSDK_OFFSET(0xA39D0A0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA39D140)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA39CB60)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA39C540)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_DOSELECT_OFFSET UNITYSDK_OFFSET(0xA39D200)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_DORANGESELECTION_OFFSET UNITYSDK_OFFSET(0xA39DA60)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSSINGLECLICK_OFFSET UNITYSDK_OFFSET(0xA39D870)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SELECTALL_OFFSET UNITYSDK_OFFSET(0xA39BAD0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTION_OFFSET UNITYSDK_OFFSET(0xA39D9F0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTION_OFFSET UNITYSDK_OFFSET(0xA39DFC0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTIONWITHOUTVALIDATION_OFFSET UNITYSDK_OFFSET(0xA39E470)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVEFROMSELECTION_OFFSET UNITYSDK_OFFSET(0xA39D8F0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVEFROMSELECTIONWITHOUTVALIDATION_OFFSET UNITYSDK_OFFSET(0xA39E9D0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTION_OFFSET UNITYSDK_OFFSET(0xA3990B0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTION_OFFSET UNITYSDK_OFFSET(0xA39EE40)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTIONWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA39F210)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA39EE50)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_NOTIFYOFSELECTIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA39E3D0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0xA398FA0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CLEARSELECTIONWITHOUTVALIDATION_OFFSET UNITYSDK_OFFSET(0xA39DBE0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA39F220)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA39F250)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA39F640)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONCUSTOMSTYLERESOLVED_OFFSET UNITYSDK_OFFSET(0xA39F8D0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA39FAB0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA39FAC0)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA39FB50)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW__.CTOR_B__144_0_OFFSET UNITYSDK_OFFSET(0xA39FF80)
#define UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW__APPLY_G__HANDLESELECTIONANDSCROLL|165_0_OFFSET UNITYSDK_OFFSET(0xA39C1F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVerticalCollectionView_TypeDefinitionIndex = 30305;

	class BaseVerticalCollectionView : public Il2CppObject
	{
	public:
		Il2CppObject* onItemsChosen; // 0x3C0
		Il2CppObject* onSelectionChange; // 0x3C8
		Il2CppObject* onSelectedIndicesChange; // 0x3D0
		Il2CppObject* itemIndexChanged; // 0x3D8
		::System::Action* itemsSourceChanged; // 0x3E0
		Il2CppObject* m_GetItemId; // 0x3E8
		Il2CppObject* m_MakeItem; // 0x3F0
		Il2CppObject* m_BindItem; // 0x3F8
		Il2CppObject* _unbindItem_k__BackingField; // 0x400
		Il2CppObject* _destroyItem_k__BackingField; // 0x408
		::UnityEngine::UIElements::SelectionType* m_SelectionType; // 0x410
		::UnityEngine::UIElements::SerializedVirtualizationData* serializedVirtualizationData; // 0x418
		Il2CppObject* k_EmptyItems; // 0x0
		::System::Boolean m_HorizontalScrollingEnabled; // 0x420
		::UnityEngine::UIElements::AlternatingRowBackground* m_ShowAlternatingRowBackgrounds; // 0x424
		::System::Int32 s_DefaultItemHeight; // 0x8
		::System::Single m_FixedItemHeight; // 0x428
		::System::Boolean m_ItemHeightIsInline; // 0x42C
		::UnityEngine::UIElements::CollectionVirtualizationMethod* m_VirtualizationMethod; // 0x430
		::UnityEngine::UIElements::ScrollView* m_ScrollView; // 0x438
		::UnityEngine::UIElements::CollectionViewController* m_ViewController; // 0x440
		::UnityEngine::UIElements::CollectionVirtualizationController* m_VirtualizationController; // 0x448
		::UnityEngine::UIElements::KeyboardNavigationManipulator* m_NavigationManipulator; // 0x450
		::UnityEngine::Vector2* m_ScrollOffset; // 0x458
		Il2CppObject* m_SelectedIds; // 0x460
		Il2CppObject* m_SelectedIndices; // 0x468
		Il2CppObject* m_SelectedItems; // 0x470
		::System::Single m_LastHeight; // 0x478
		::System::Boolean m_IsRangeSelectionDirectionUp; // 0x47C
		::UnityEngine::UIElements::ListViewDragger* m_Dragger; // 0x480
		Il2CppObject* s_ItemHeightProperty; // 0x10
		Il2CppObject* m_ItemIndexChangedCallback; // 0x488
		::System::Action* m_ItemsSourceChangedCallback; // 0x490
		::System::String* ussClassName; // 0x18
		::System::String* borderUssClassName; // 0x20
		::System::String* itemUssClassName; // 0x28
		::System::String* dragHoverBarUssClassName; // 0x30
		::System::String* dragHoverMarkerUssClassName; // 0x38
		::System::String* itemDragHoverUssClassName; // 0x40
		::System::String* itemSelectedVariantUssClassName; // 0x48
		::System::String* itemAlternativeBackgroundUssClassName; // 0x50
		::System::String* listScrollViewUssClassName; // 0x58
		::System::String* backgroundFillUssClassName; // 0x60
		::UnityEngine::Vector3* m_TouchDownPosition; // 0x498
		::System::Int64 m_LastPointerDownTimeStamp; // 0x4A8
		::System::Int32 m_PointerDownCount; // 0x4B0

		::System::Void add_onItemsChosen(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADD_ONITEMSCHOSEN_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onItemsChosen(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVE_ONITEMSCHOSEN_OFFSET))(arg, nullptr);
		}

		::System::Void add_onSelectionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADD_ONSELECTIONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onSelectionChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVE_ONSELECTIONCHANGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_getItemId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_GETITEMID_OFFSET))(nullptr);
		}

		::System::Void set_getItemId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_GETITEMID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_itemsSource()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_ITEMSSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_itemsSource(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_ITEMSSOURCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_makeItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_MAKEITEM_OFFSET))(nullptr);
		}

		::System::Void set_makeItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_MAKEITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_bindItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_BINDITEM_OFFSET))(nullptr);
		}

		::System::Void set_bindItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_BINDITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_unbindItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_UNBINDITEM_OFFSET))(nullptr);
		}

		::System::Void set_unbindItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_UNBINDITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_destroyItem()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_DESTROYITEM_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::SelectionType* get_selectionType()
		{
			return (return (::UnityEngine::UIElements::SelectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_selectionType(::UnityEngine::UIElements::SelectionType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::SelectionType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SELECTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_selectedIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDINDEX_OFFSET))(nullptr);
		}

		::System::Void set_selectedIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SELECTEDINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_selectedIndices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDINDICES_OFFSET))(nullptr);
		}

		Il2CppObject* get_selectedIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SELECTEDIDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeItems()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_ACTIVEITEMS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ScrollView* get_scrollView()
		{
			return (return (::UnityEngine::UIElements::ScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ListViewDragger* get_dragger()
		{
			return (return (::UnityEngine::UIElements::ListViewDragger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_DRAGGER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::CollectionViewController* get_viewController()
		{
			return (return (::UnityEngine::UIElements::CollectionViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIEWCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::CollectionVirtualizationController* get_virtualizationController()
		{
			return (return (::UnityEngine::UIElements::CollectionVirtualizationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIRTUALIZATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Single ResolveItemHeight(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_RESOLVEITEMHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_showBorder(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SHOWBORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_reorderable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_REORDERABLE_OFFSET))(nullptr);
		}

		::System::Void set_reorderable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_REORDERABLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_horizontalScrollingEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_HORIZONTALSCROLLINGENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::AlternatingRowBackground* get_showAlternatingRowBackgrounds()
		{
			return (return (::UnityEngine::UIElements::AlternatingRowBackground*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET))(nullptr);
		}

		::System::Void set_showAlternatingRowBackgrounds(::UnityEngine::UIElements::AlternatingRowBackground* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AlternatingRowBackground*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_SHOWALTERNATINGROWBACKGROUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::CollectionVirtualizationMethod* get_virtualizationMethod()
		{
			return (return (::UnityEngine::UIElements::CollectionVirtualizationMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_VIRTUALIZATIONMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_virtualizationMethod(::UnityEngine::UIElements::CollectionVirtualizationMethod* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CollectionVirtualizationMethod*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_VIRTUALIZATIONMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Single get_fixedItemHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_FIXEDITEMHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_fixedItemHeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SET_FIXEDITEMHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Single get_lastHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GET_LASTHEIGHT_OFFSET))(nullptr);
		}

		::System::Void CreateVirtualizationController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::CollectionVirtualizationController* GetOrCreateVirtualizationController()
		{
			return (return (::UnityEngine::UIElements::CollectionVirtualizationController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETORCREATEVIRTUALIZATIONCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void CreateVirtualizationController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIRTUALIZATIONCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::CollectionViewController* GetOrCreateViewController()
		{
			return (return (::UnityEngine::UIElements::CollectionViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETORCREATEVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void CreateViewController()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEVIEWCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void SetViewController(::UnityEngine::UIElements::CollectionViewController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CollectionViewController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETVIEWCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ListViewDragger* CreateDragger()
		{
			return (return (::UnityEngine::UIElements::ListViewDragger*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEDRAGGER_OFFSET))(nullptr);
		}

		::System::Void InitializeDragAndDropController(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_INITIALIZEDRAGANDDROPCONTROLLER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController()
		{
			return (return (::UnityEngine::UIElements::ICollectionDragAndDropController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetRootElementForId(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_GETROOTELEMENTFORID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasValidDataAndBindings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_HASVALIDDATAANDBINDINGS_OFFSET))(nullptr);
		}

		::System::Void OnItemIndexChanged(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONITEMINDEXCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnItemsSourceChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONITEMSSOURCECHANGED_OFFSET))(nullptr);
		}

		::System::Void RefreshItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REFRESHITEMS_OFFSET))(nullptr);
		}

		::System::Void Rebuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REBUILD_OFFSET))(nullptr);
		}

		::System::Void RefreshSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REFRESHSELECTION_OFFSET))(nullptr);
		}

		::System::Void PostRefresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_POSTREFRESH_OFFSET))(nullptr);
		}

		::System::Void ScrollToItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SCROLLTOITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnScroll(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void Resize(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_RESIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONDETACHFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean Apply(::UnityEngine::UIElements::KeyboardNavigationOperation* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::KeyboardNavigationOperation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::UnityEngine::UIElements::KeyboardNavigationOperation* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyboardNavigationOperation*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCancelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERCANCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPointerDown(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessPointerUp(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void DoSelect(::UnityEngine::Vector2* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_DOSELECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DoRangeSelection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_DORANGESELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessSingleClick(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_PROCESSSINGLECLICK_OFFSET))(arg, nullptr);
		}

		::System::Void SelectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SELECTALL_OFFSET))(nullptr);
		}

		::System::Void AddToSelection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddToSelection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void AddToSelectionWithoutValidation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ADDTOSELECTIONWITHOUTVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromSelection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVEFROMSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromSelectionWithoutValidation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_REMOVEFROMSELECTIONWITHOUTVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelection(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectionWithoutNotify(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTIONWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void SetSelectionInternal(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_SETSELECTIONINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void NotifyOfSelectionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_NOTIFYOFSELECTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void ClearSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CLEARSELECTION_OFFSET))(nullptr);
		}

		::System::Void ClearSelectionWithoutValidation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_CLEARSELECTIONWITHOUTVALIDATION_OFFSET))(nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_EXECUTEDEFAULTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnSizeChanged(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONSIZECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_ONCUSTOMSTYLERESOLVED_OFFSET))(arg, nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_UNITYENGINE.ISERIALIZATIONCALLBACKRECEIVER.ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__144_0(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW__.CTOR_B__144_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Apply_g__HandleSelectionAndScroll|165_0(::System::Int32 arg, <>c__DisplayClass165_0&* arg)
		{
			((::System::Void(*)(::System::Int32, <>c__DisplayClass165_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVERTICALCOLLECTIONVIEW__APPLY_G__HANDLESELECTIONANDSCROLL|165_0_OFFSET))(arg, arg, nullptr);
		}

	};
}

