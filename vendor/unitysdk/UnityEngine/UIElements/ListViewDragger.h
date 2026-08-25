#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class ICollectionDragAndDropController; }
namespace UnityEngine::UIElements { class BaseVerticalCollectionView; }
namespace UnityEngine::UIElements { class ScrollView; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class DragAndDropArgs; }
namespace UnityEngine::UIElements { class ReusableCollectionItem; }
namespace UnityEngine::UIElements { class GeometryChangedEvent; }

#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_TARGETVIEW_OFFSET UNITYSDK_OFFSET(0xA3D2F20)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_TARGETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA3D2F90)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_DRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3D3000)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_SET_DRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA3D3010)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D3020)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_CANSTARTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D3040)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_STARTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D37E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA3D3BE0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETVISUALMODE_OFFSET UNITYSDK_OFFSET(0xA3D3DE0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA3D5150)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLEDRAGANDSCROLL_OFFSET UNITYSDK_OFFSET(0xA3D3F40)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_APPLYDRAGANDDROPUI_OFFSET UNITYSDK_OFFSET(0xA3D4420)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_TRYGETDRAGPOSITION_OFFSET UNITYSDK_OFFSET(0xA3D6140)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLETREEPOSITION_OFFSET UNITYSDK_OFFSET(0xA3D66C0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLESIBLINGINSERTIONATAVAILABLEDEPTHSANDCHANGETARGETIFNEEDED_OFFSET UNITYSDK_OFFSET(0xA3D6810)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETPREVIOUSANDNEXTITEMSIGNORINGDRAGGEDITEMS_OFFSET UNITYSDK_OFFSET(0xA3D6FE0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_MAKEDRAGANDDROPARGS_OFFSET UNITYSDK_OFFSET(0xA3D4F90)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETHOVERBARTOPPOSITION_OFFSET UNITYSDK_OFFSET(0xA3D7380)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_PLACEHOVERBARATELEMENT_OFFSET UNITYSDK_OFFSET(0xA3D6110)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_PLACEHOVERBARAT_OFFSET UNITYSDK_OFFSET(0xA3D54A0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_CLEARDRAGANDDROPUI_OFFSET UNITYSDK_OFFSET(0xA3D74D0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETRECYCLEDITEM_OFFSET UNITYSDK_OFFSET(0xA3D33A0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER__APPLYDRAGANDDROPUI_G__GEOMETRYCHANGEDCALLBACK|26_0_OFFSET UNITYSDK_OFFSET(0xA3D7BF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListViewDragger_TypeDefinitionIndex = 30436;

	class ListViewDragger : public Il2CppObject
	{
	public:
		DragPosition* m_LastDragPosition; // 0x30
		::UnityEngine::UIElements::VisualElement* m_DragHoverBar; // 0x50
		::UnityEngine::UIElements::VisualElement* m_DragHoverItemMarker; // 0x58
		::UnityEngine::UIElements::VisualElement* m_DragHoverSiblingMarker; // 0x60
		::System::Single m_LeftIndentation; // 0x68
		::System::Single m_SiblingBottom; // 0x6C
		::UnityEngine::UIElements::ICollectionDragAndDropController* _dragAndDropController_k__BackingField; // 0x70

		::UnityEngine::UIElements::BaseVerticalCollectionView* get_targetView()
		{
			return (return (::UnityEngine::UIElements::BaseVerticalCollectionView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_TARGETVIEW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ScrollView* get_targetScrollView()
		{
			return (return (::UnityEngine::UIElements::ScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_TARGETSCROLLVIEW_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ICollectionDragAndDropController* get_dragAndDropController()
		{
			return (return (::UnityEngine::UIElements::ICollectionDragAndDropController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GET_DRAGANDDROPCONTROLLER_OFFSET))(nullptr);
		}

		::System::Void set_dragAndDropController(::UnityEngine::UIElements::ICollectionDragAndDropController* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ICollectionDragAndDropController*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_SET_DRAGANDDROPCONTROLLER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStartDrag(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_CANSTARTDRAG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_STARTDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* GetVisualMode(::UnityEngine::Vector3* arg, DragPosition&* arg)
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(::UnityEngine::Vector3*, DragPosition&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETVISUALMODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void HandleDragAndScroll(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLEDRAGANDSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyDragAndDropUI(DragPosition* arg)
		{
			((::System::Void(*)(DragPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_APPLYDRAGANDDROPUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDragPosition(::UnityEngine::Vector2* arg, DragPosition&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, DragPosition&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_TRYGETDRAGPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleTreePosition(::UnityEngine::Vector2* arg, DragPosition&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, DragPosition&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLETREEPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleSiblingInsertionAtAvailableDepthsAndChangeTargetIfNeeded(DragPosition&* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(DragPosition&*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_HANDLESIBLINGINSERTIONATAVAILABLEDEPTHSANDCHANGETARGETIFNEEDED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPreviousAndNextItemsIgnoringDraggedItems(::System::Int32 arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETPREVIOUSANDNEXTITEMSIGNORINGDRAGGEDITEMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::DragAndDropArgs* MakeDragAndDropArgs(DragPosition* arg)
		{
			return (return (::UnityEngine::UIElements::DragAndDropArgs*(*)(DragPosition*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_MAKEDRAGANDDROPARGS_OFFSET))(arg, nullptr);
		}

		::System::Single GetHoverBarTopPosition(::UnityEngine::UIElements::ReusableCollectionItem* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETHOVERBARTOPPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void PlaceHoverBarAtElement(::UnityEngine::UIElements::ReusableCollectionItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_PLACEHOVERBARATELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void PlaceHoverBarAt(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_PLACEHOVERBARAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ClearDragAndDropUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_CLEARDRAGANDDROPUI_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ReusableCollectionItem* GetRecycledItem(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UIElements::ReusableCollectionItem*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER_GETRECYCLEDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void _ApplyDragAndDropUI_g__GeometryChangedCallback|26_0(::UnityEngine::UIElements::GeometryChangedEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::GeometryChangedEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGER__APPLYDRAGANDDROPUI_G__GEOMETRYCHANGEDCALLBACK|26_0_OFFSET))(arg, nullptr);
		}

	};
}

