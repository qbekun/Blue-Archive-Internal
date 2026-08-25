#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IDragAndDrop; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine::UIElements { class PointerDownEvent; }
namespace UnityEngine::UIElements { class PointerUpEvent; }
namespace UnityEngine::UIElements { class PointerLeaveEvent; }
namespace UnityEngine::UIElements { class PointerCancelEvent; }
namespace UnityEngine::UIElements { class PointerCaptureOutEvent; }
namespace UnityEngine::UIElements { class PointerMoveEvent; }
namespace UnityEngine::UIElements { class DragEventsProcessor; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_SUPPORTSDRAGEVENTS_OFFSET UNITYSDK_OFFSET(0xA3D19E0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_USEDRAGEVENTS_OFFSET UNITYSDK_OFFSET(0xA3D19F0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_DRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3D1A30)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_ISEDITORCONTEXT_OFFSET UNITYSDK_OFFSET(0xA3D1A60)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D1B70)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_REGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA3D1FA0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_REGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA3D1CA0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA3D1FB0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET UNITYSDK_OFFSET(0xA3D1FC0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_CANSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_STARTDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_CLEARDRAGANDDROPUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xA3D23A0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERUPEVENT_OFFSET UNITYSDK_OFFSET(0xA3D24A0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERLEAVEEVENT_OFFSET UNITYSDK_OFFSET(0xA3D2770)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERCANCELEVENT_OFFSET UNITYSDK_OFFSET(0xA3D2790)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERCAPTUREDOUT_OFFSET UNITYSDK_OFFSET(0xA3D28D0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERMOVEEVENT_OFFSET UNITYSDK_OFFSET(0xA3D29F0)
#define UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GETDROPTARGET_OFFSET UNITYSDK_OFFSET(0xA3D2690)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DragEventsProcessor_TypeDefinitionIndex = 30423;

	class DragEventsProcessor : public Il2CppObject
	{
	public:
		::System::Boolean m_IsRegistered; // 0x10
		DragState* m_DragState; // 0x14
		::UnityEngine::Vector3* m_Start; // 0x18
		::UnityEngine::UIElements::VisualElement* m_Target; // 0x28

		::System::Boolean get_supportsDragEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_SUPPORTSDRAGEVENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_useDragEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_USEDRAGEVENTS_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop()
		{
			return (return (::UnityEngine::UIElements::IDragAndDrop*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_DRAGANDDROP_OFFSET))(nullptr);
		}

		::System::Boolean get_isEditorContext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GET_ISEDITORCONTEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_REGISTERCALLBACKSFROMTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCallbacksFromTarget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_REGISTERCALLBACKSFROMTARGET_OFFSET))(nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterCallbacksFromTarget(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UNREGISTERCALLBACKSFROMTARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStartDrag(::UnityEngine::Vector3* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_CANSTARTDRAG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_STARTDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDragAndDropUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_CLEARDRAGANDDROPUI_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERDOWNEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerUpEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERUPEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerLeaveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERLEAVEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCancelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERCANCELEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerCaptureOutEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERCAPTUREDOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::PointerMoveEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_ONPOINTERMOVEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::DragEventsProcessor* GetDropTarget(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::DragEventsProcessor*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DRAGEVENTSPROCESSOR_GETDROPTARGET_OFFSET))(arg, nullptr);
		}

	};
}

