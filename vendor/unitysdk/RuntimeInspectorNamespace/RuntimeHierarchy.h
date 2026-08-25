#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class TooltipListener; }
namespace RuntimeInspectorNamespace { class RuntimeInspector; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class RecycledListView; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class HierarchyDragDropListener; }
namespace RuntimeInspectorNamespace { class HierarchyField; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class HierarchyDataRoot; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Canvas; }
namespace RuntimeInspectorNamespace { class RecycledListItem; }
namespace RuntimeInspectorNamespace { class HierarchyData; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace RuntimeInspectorNamespace { class HierarchyDataRootPseudoScene; }

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_REFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557240)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_REFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557250)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_OBJECTNAMESREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557260)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_OBJECTNAMESREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557270)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SEARCHREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557280)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SEARCHREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x9557290)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ALLOWMULTISELECTION_OFFSET UNITYSDK_OFFSET(0x95572A0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_ALLOWMULTISELECTION_OFFSET UNITYSDK_OFFSET(0x95572B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_MULTISELECTIONTOGGLESELECTIONMODE_OFFSET UNITYSDK_OFFSET(0x9558520)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_MULTISELECTIONTOGGLESELECTIONMODE_OFFSET UNITYSDK_OFFSET(0x9557420)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_EXPOSEUNITYSCENES_OFFSET UNITYSDK_OFFSET(0x95586B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_EXPOSEUNITYSCENES_OFFSET UNITYSDK_OFFSET(0x95586C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_EXPOSEDONTDESTROYONLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9558C60)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_EXPOSEDONTDESTROYONLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9558C70)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_POINTERLONGPRESSACTION_OFFSET UNITYSDK_OFFSET(0x9558F30)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_POINTERLONGPRESSACTION_OFFSET UNITYSDK_OFFSET(0x9558F40)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_POINTERLONGPRESSDURATION_OFFSET UNITYSDK_OFFSET(0x9558F50)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_POINTERLONGPRESSDURATION_OFFSET UNITYSDK_OFFSET(0x9558F60)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_DOUBLECLICKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9558F70)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_DOUBLECLICKTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9558F80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANREORGANIZEITEMS_OFFSET UNITYSDK_OFFSET(0x9558F90)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANREORGANIZEITEMS_OFFSET UNITYSDK_OFFSET(0x9558FA0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANDROPDRAGGEDPARENTONCHILD_OFFSET UNITYSDK_OFFSET(0x9558FB0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANDROPDRAGGEDPARENTONCHILD_OFFSET UNITYSDK_OFFSET(0x9558FC0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANDROPDRAGGEDOBJECTSTOPSEUDOSCENES_OFFSET UNITYSDK_OFFSET(0x9558FD0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANDROPDRAGGEDOBJECTSTOPSEUDOSCENES_OFFSET UNITYSDK_OFFSET(0x9558FE0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SHOWTOOLTIPS_OFFSET UNITYSDK_OFFSET(0x9558FF0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TOOLTIPDELAY_OFFSET UNITYSDK_OFFSET(0x9559000)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_TOOLTIPDELAY_OFFSET UNITYSDK_OFFSET(0x9559010)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TOOLTIPLISTENER_OFFSET UNITYSDK_OFFSET(0x9559020)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_TOOLTIPLISTENER_OFFSET UNITYSDK_OFFSET(0x9559030)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SHOWHORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x9559040)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SHOWHORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0x9559050)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SEARCHTERM_OFFSET UNITYSDK_OFFSET(0x95592F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SEARCHTERM_OFFSET UNITYSDK_OFFSET(0x9559320)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ISINSEARCHMODE_OFFSET UNITYSDK_OFFSET(0x9559350)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CONNECTEDINSPECTOR_OFFSET UNITYSDK_OFFSET(0x9559360)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CONNECTEDINSPECTOR_OFFSET UNITYSDK_OFFSET(0x9559370)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x95594D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x95594E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SCENEDRAWERBACKGROUND_OFFSET UNITYSDK_OFFSET(0x95594F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TRANSFORMDRAWERBACKGROUND_OFFSET UNITYSDK_OFFSET(0x9559500)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x9559510)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x9559560)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x9559570)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_AUTOSCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x9559580)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_GAMEOBJECTFILTER_OFFSET UNITYSDK_OFFSET(0x9559590)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_GAMEOBJECTFILTER_OFFSET UNITYSDK_OFFSET(0x95595A0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9559980)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x9559990)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_AWAKE_OFFSET UNITYSDK_OFFSET(0x95599B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x95599D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_START_OFFSET UNITYSDK_OFFSET(0x9559C90)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9559DF0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x955A1B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x955A1C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_UPDATE_OFFSET UNITYSDK_OFFSET(0x955A220)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESH_OFFSET UNITYSDK_OFFSET(0x955ABE0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHLISTVIEW_OFFSET UNITYSDK_OFFSET(0x955AE80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SETLISTVIEWDIRTY_OFFSET UNITYSDK_OFFSET(0x955B6B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHSEARCHRESULTS_OFFSET UNITYSDK_OFFSET(0x955AD30)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHNAMEOF_OFFSET UNITYSDK_OFFSET(0x955B6E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHSKIN_OFFSET UNITYSDK_OFFSET(0x955BAB0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ENSURESCROLLVIEWISWITHINBOUNDS_OFFSET UNITYSDK_OFFSET(0x9558610)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.SETITEMCONTENT_OFFSET UNITYSDK_OFFSET(0x955BFB0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.ONITEMCLICKED_OFFSET UNITYSDK_OFFSET(0x955C650)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_FINDMULTISELECTIONPIVOTABSOLUTEINDEX_OFFSET UNITYSDK_OFFSET(0x955D570)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETDATAAT_OFFSET UNITYSDK_OFFSET(0x955C160)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONDRAWERPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x955DD80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECT_OFFSET UNITYSDK_OFFSET(0x955DE30)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECT_OFFSET UNITYSDK_OFFSET(0x955DED0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9557570)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET UNITYSDK_OFFSET(0x955E650)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET UNITYSDK_OFFSET(0x955E680)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET UNITYSDK_OFFSET(0x955E670)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9558190)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x955E710)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CANSELECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x955DEE0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONCURRENTSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x955B270)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSEARCHTERMCHANGED_OFFSET UNITYSDK_OFFSET(0x955E7C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x95587B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x9558A80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETDONTDESTROYONLOADSCENE_OFFSET UNITYSDK_OFFSET(0x9558CC0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ADDTOPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955EB80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ADDTOPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955ED80)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REMOVEFROMPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955F0F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REMOVEFROMPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955F400)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955EC10)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CREATEPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955FA00)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CREATEPSEUDOSCENEINTERNAL_OFFSET UNITYSDK_OFFSET(0x955F7F0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DELETEALLPSEUDOSCENES_OFFSET UNITYSDK_OFFSET(0x955FB60)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DELETEPSEUDOSCENE_OFFSET UNITYSDK_OFFSET(0x955F230)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.CREATEITEM_OFFSET UNITYSDK_OFFSET(0x955FCF0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9560090)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY__INITIALIZE_B__159_0_OFFSET UNITYSDK_OFFSET(0x95603D0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeHierarchy_TypeDefinitionIndex = 35625;

	class RuntimeHierarchy : public Il2CppObject
	{
	public:
		::System::Single m_refreshInterval; // 0x28
		::System::Single m_objectNamesRefreshInterval; // 0x2C
		::System::Single m_searchRefreshInterval; // 0x30
		::System::Single nextHierarchyRefreshTime; // 0x34
		::System::Single nextObjectNamesRefreshTime; // 0x38
		::System::Single nextSearchRefreshTime; // 0x3C
		::System::Boolean m_allowMultiSelection; // 0x40
		::System::Boolean m_multiSelectionToggleSelectionMode; // 0x41
		::System::Boolean justActivatedMultiSelectionToggleSelectionMode; // 0x42
		::System::Boolean m_exposeUnityScenes; // 0x43
		::Il2CppArray<::System::Object*>* exposedUnityScenesSubset; // 0x48
		::System::Boolean m_exposeDontDestroyOnLoadScene; // 0x50
		::Il2CppArray<::System::Object*>* pseudoScenesOrder; // 0x58
		LongPressAction* m_pointerLongPressAction; // 0x60
		::System::Single m_pointerLongPressDuration; // 0x64
		::System::Single m_doubleClickThreshold; // 0x68
		::System::Boolean m_canReorganizeItems; // 0x6C
		::System::Boolean m_canDropDraggedParentOnChild; // 0x6D
		::System::Boolean m_canDropDraggedObjectsToPseudoScenes; // 0x6E
		::System::Boolean m_showTooltips; // 0x6F
		::System::Single m_tooltipDelay; // 0x70
		::RuntimeInspectorNamespace::TooltipListener* _TooltipListener_k__BackingField; // 0x78
		::System::Boolean m_showHorizontalScrollbar; // 0x80
		::System::Boolean m_isInSearchMode; // 0x81
		::RuntimeInspectorNamespace::RuntimeInspector* m_connectedInspector; // 0x88
		::System::Boolean m_isLocked; // 0x90
		::UnityEngine::UI::ScrollRect* scrollView; // 0x98
		::UnityEngine::RectTransform* drawArea; // 0xA0
		::RuntimeInspectorNamespace::RecycledListView* listView; // 0xA8
		::UnityEngine::UI::Image* background; // 0xB0
		::UnityEngine::UI::Image* verticalScrollbar; // 0xB8
		::UnityEngine::UI::Image* horizontalScrollbar; // 0xC0
		::UnityEngine::UI::InputField* searchInputField; // 0xC8
		::UnityEngine::UI::Image* searchIcon; // 0xD0
		::UnityEngine::UI::Image* searchInputFieldBackground; // 0xD8
		::UnityEngine::UI::LayoutElement* searchBarLayoutElement; // 0xE0
		::UnityEngine::UI::Button* deselectAllButton; // 0xE8
		::UnityEngine::UI::LayoutElement* deselectAllLayoutElement; // 0xF0
		::UnityEngine::UI::Text* deselectAllLabel; // 0xF8
		::UnityEngine::UI::Image* selectedPathBackground; // 0x100
		::UnityEngine::UI::Text* selectedPathText; // 0x108
		::RuntimeInspectorNamespace::HierarchyDragDropListener* dragDropListener; // 0x110
		::RuntimeInspectorNamespace::HierarchyField* drawerPrefab; // 0x118
		::UnityEngine::Sprite* m_sceneDrawerBackground; // 0x120
		::UnityEngine::Sprite* m_transformDrawerBackground; // 0x128
		::System::Int32 aliveHierarchies; // 0x0
		::System::Boolean initialized; // 0x130
		Il2CppObject* drawers; // 0x138
		Il2CppObject* sceneData; // 0x140
		Il2CppObject* searchSceneData; // 0x148
		Il2CppObject* pseudoSceneDataLookup; // 0x150
		Il2CppObject* m_currentSelection; // 0x158
		Il2CppObject* currentSelectionSet; // 0x160
		Il2CppObject* newSelectionSet; // 0x168
		::UnityEngine::Transform* multiSelectionPivotTransform; // 0x170
		::RuntimeInspectorNamespace::HierarchyDataRoot* multiSelectionPivotSceneData; // 0x178
		Il2CppObject* multiSelectionPivotSiblingIndexTraversalList; // 0x180
		::Il2CppArray<::System::Object*>* singleTransformSelection; // 0x188
		::System::Int32 totalItemCount; // 0x190
		::System::Boolean selectLock; // 0x194
		::System::Boolean isListViewDirty; // 0x195
		::System::Boolean shouldRecalculateContentWidth; // 0x196
		::System::Single lastClickTime; // 0x198
		::RuntimeInspectorNamespace::HierarchyField* lastClickedDrawer; // 0x1A0
		::RuntimeInspectorNamespace::HierarchyField* currentlyPressedDrawer; // 0x1A8
		::System::Single pressedDrawerDraggedReferenceCreateTime; // 0x1B0
		::UnityEngine::EventSystems::PointerEventData* pressedDrawerActivePointer; // 0x1B8
		::UnityEngine::Canvas* m_canvas; // 0x1C0
		::System::Single m_autoScrollSpeed; // 0x1C8
		::UnityEngine::EventSystems::PointerEventData* nullPointerEventData; // 0x1D0
		SelectionChangedDelegate* OnSelectionChanged; // 0x1D8
		DoubleClickDelegate* OnItemDoubleClicked; // 0x1E0
		GameObjectFilterDelegate* m_gameObjectDelegate; // 0x1E8

		::System::Single get_RefreshInterval()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_REFRESHINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_RefreshInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_REFRESHINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_ObjectNamesRefreshInterval()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_OBJECTNAMESREFRESHINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_ObjectNamesRefreshInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_OBJECTNAMESREFRESHINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_SearchRefreshInterval()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SEARCHREFRESHINTERVAL_OFFSET))(nullptr);
		}

		::System::Void set_SearchRefreshInterval(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SEARCHREFRESHINTERVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowMultiSelection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ALLOWMULTISELECTION_OFFSET))(nullptr);
		}

		::System::Void set_AllowMultiSelection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_ALLOWMULTISELECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MultiSelectionToggleSelectionMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_MULTISELECTIONTOGGLESELECTIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_MultiSelectionToggleSelectionMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_MULTISELECTIONTOGGLESELECTIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ExposeUnityScenes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_EXPOSEUNITYSCENES_OFFSET))(nullptr);
		}

		::System::Void set_ExposeUnityScenes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_EXPOSEUNITYSCENES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ExposeDontDestroyOnLoadScene()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_EXPOSEDONTDESTROYONLOADSCENE_OFFSET))(nullptr);
		}

		::System::Void set_ExposeDontDestroyOnLoadScene(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_EXPOSEDONTDESTROYONLOADSCENE_OFFSET))(arg, nullptr);
		}

		LongPressAction* get_PointerLongPressAction()
		{
			return (return (LongPressAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_POINTERLONGPRESSACTION_OFFSET))(nullptr);
		}

		::System::Void set_PointerLongPressAction(LongPressAction* arg)
		{
			((::System::Void(*)(LongPressAction*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_POINTERLONGPRESSACTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_PointerLongPressDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_POINTERLONGPRESSDURATION_OFFSET))(nullptr);
		}

		::System::Void set_PointerLongPressDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_POINTERLONGPRESSDURATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_DoubleClickThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_DOUBLECLICKTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_DoubleClickThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_DOUBLECLICKTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanReorganizeItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANREORGANIZEITEMS_OFFSET))(nullptr);
		}

		::System::Void set_CanReorganizeItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANREORGANIZEITEMS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanDropDraggedParentOnChild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANDROPDRAGGEDPARENTONCHILD_OFFSET))(nullptr);
		}

		::System::Void set_CanDropDraggedParentOnChild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANDROPDRAGGEDPARENTONCHILD_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanDropDraggedObjectsToPseudoScenes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANDROPDRAGGEDOBJECTSTOPSEUDOSCENES_OFFSET))(nullptr);
		}

		::System::Void set_CanDropDraggedObjectsToPseudoScenes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CANDROPDRAGGEDOBJECTSTOPSEUDOSCENES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowTooltips()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SHOWTOOLTIPS_OFFSET))(nullptr);
		}

		::System::Single get_TooltipDelay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TOOLTIPDELAY_OFFSET))(nullptr);
		}

		::System::Void set_TooltipDelay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_TOOLTIPDELAY_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::TooltipListener* get_TooltipListener()
		{
			return (return (::RuntimeInspectorNamespace::TooltipListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TOOLTIPLISTENER_OFFSET))(nullptr);
		}

		::System::Void set_TooltipListener(::RuntimeInspectorNamespace::TooltipListener* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::TooltipListener*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_TOOLTIPLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowHorizontalScrollbar()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SHOWHORIZONTALSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void set_ShowHorizontalScrollbar(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SHOWHORIZONTALSCROLLBAR_OFFSET))(arg, nullptr);
		}

		::System::String* get_SearchTerm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SEARCHTERM_OFFSET))(nullptr);
		}

		::System::Void set_SearchTerm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_SEARCHTERM_OFFSET))(str, nullptr);
		}

		::System::Boolean get_IsInSearchMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ISINSEARCHMODE_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::RuntimeInspector* get_ConnectedInspector()
		{
			return (return (::RuntimeInspectorNamespace::RuntimeInspector*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CONNECTEDINSPECTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConnectedInspector(::RuntimeInspectorNamespace::RuntimeInspector* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RuntimeInspector*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_CONNECTEDINSPECTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::System::Void set_IsLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_ISLOCKED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Sprite* get_SceneDrawerBackground()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_SCENEDRAWERBACKGROUND_OFFSET))(nullptr);
		}

		::UnityEngine::Sprite* get_TransformDrawerBackground()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_TRANSFORMDRAWERBACKGROUND_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentSelection()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CURRENTSELECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_ITEMCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Canvas* get_Canvas()
		{
			return (return (::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_CANVAS_OFFSET))(nullptr);
		}

		::System::Void set_AutoScrollSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_AUTOSCROLLSPEED_OFFSET))(arg, nullptr);
		}

		GameObjectFilterDelegate* get_GameObjectFilter()
		{
			return (return (GameObjectFilterDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GET_GAMEOBJECTFILTER_OFFSET))(nullptr);
		}

		::System::Void set_GameObjectFilter(GameObjectFilterDelegate* arg)
		{
			((::System::Void(*)(GameObjectFilterDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SET_GAMEOBJECTFILTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 RuntimeInspectorNamespace.IListViewAdapter.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Single RuntimeInspectorNamespace.IListViewAdapter.get_ItemHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.GET_ITEMHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnTransformParentChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONTRANSFORMPARENTCHANGED_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESH_OFFSET))(nullptr);
		}

		::System::Void RefreshListView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHLISTVIEW_OFFSET))(nullptr);
		}

		::System::Void SetListViewDirty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SETLISTVIEWDIRTY_OFFSET))(nullptr);
		}

		::System::Void RefreshSearchResults()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHSEARCHRESULTS_OFFSET))(nullptr);
		}

		::System::Void RefreshNameOf(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHNAMEOF_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshSkin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REFRESHSKIN_OFFSET))(nullptr);
		}

		::System::Void EnsureScrollViewIsWithinBounds()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ENSURESCROLLVIEWISWITHINBOUNDS_OFFSET))(nullptr);
		}

		::System::Void RuntimeInspectorNamespace.IListViewAdapter.SetItemContent(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.SETITEMCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void RuntimeInspectorNamespace.IListViewAdapter.OnItemClicked(::RuntimeInspectorNamespace::RecycledListItem* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::RecycledListItem*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.ONITEMCLICKED_OFFSET))(arg, nullptr);
		}

		::System::Boolean FindMultiSelectionPivotAbsoluteIndex(int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_FINDMULTISELECTIONPIVOTABSOLUTEINDEX_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyData* GetDataAt(::System::Int32 arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETDATAAT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrawerPointerEvent(::RuntimeInspectorNamespace::HierarchyField* arg, ::UnityEngine::EventSystems::PointerEventData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::HierarchyField*, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONDRAWERPOINTEREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Select(::UnityEngine::Transform* arg, SelectOptions* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, SelectOptions*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Select(Il2CppObject* arg, SelectOptions* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, SelectOptions*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SelectInternal(Il2CppObject* arg, SelectOptions* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, SelectOptions*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_SELECTINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET))(nullptr);
		}

		::System::Void Deselect(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void Deselect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECT_OFFSET))(arg, nullptr);
		}

		::System::Void DeselectInternal(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DESELECTINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSelected(::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanSelectTransform(::UnityEngine::Transform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CANSELECTTRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void OnCurrentSelectionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONCURRENTSELECTIONCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnSearchTermChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSEARCHTERMCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSCENELOADED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene* arg)
		{
			((::System::Void(*)(::UnityEngine::SceneManagement::Scene*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ONSCENEUNLOADED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* GetDontDestroyOnLoadScene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETDONTDESTROYONLOADSCENE_OFFSET))(nullptr);
		}

		::System::Void AddToPseudoScene(::System::String* str, ::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ADDTOPSEUDOSCENE_OFFSET))(str, arg, nullptr);
		}

		::System::Void AddToPseudoScene(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_ADDTOPSEUDOSCENE_OFFSET))(str, arg, nullptr);
		}

		::System::Void RemoveFromPseudoScene(::System::String* str, ::UnityEngine::Transform* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REMOVEFROMPSEUDOSCENE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void RemoveFromPseudoScene(::System::String* str, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_REMOVEFROMPSEUDOSCENE_OFFSET))(str, arg, arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataRootPseudoScene* GetPseudoScene(::System::String* str, ::System::Boolean arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataRootPseudoScene*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_GETPSEUDOSCENE_OFFSET))(str, arg, nullptr);
		}

		::System::Void CreatePseudoScene(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CREATEPSEUDOSCENE_OFFSET))(str, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataRootPseudoScene* CreatePseudoSceneInternal(::System::String* str)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataRootPseudoScene*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_CREATEPSEUDOSCENEINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAllPseudoScenes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DELETEALLPSEUDOSCENES_OFFSET))(nullptr);
		}

		::System::Void DeletePseudoScene(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_DELETEPSEUDOSCENE_OFFSET))(str, nullptr);
		}

		::RuntimeInspectorNamespace::RecycledListItem* RuntimeInspectorNamespace.IListViewAdapter.CreateItem(::UnityEngine::Transform* arg)
		{
			return (return (::RuntimeInspectorNamespace::RecycledListItem*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_RUNTIMEINSPECTORNAMESPACE.ILISTVIEWADAPTER.CREATEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Initialize_b__159_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEHIERARCHY__INITIALIZE_B__159_0_OFFSET))(nullptr);
		}

	};
}

