#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class IPointerMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_VALIDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493A70)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493B50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493C30)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493D10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493DF0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493ED0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA493FB0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494090)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494170)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494250)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494330)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494410)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4944F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494590)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494630)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4946D0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA4947B0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA494850)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERMOVEHANDLER_OFFSET UNITYSDK_OFFSET(0xA4948F0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET UNITYSDK_OFFSET(0xA494940)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET UNITYSDK_OFFSET(0xA494990)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0xA4949E0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0xA494A30)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0xA494A80)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0xA494AD0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA494B20)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA494B70)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA494BC0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET UNITYSDK_OFFSET(0xA494C10)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET UNITYSDK_OFFSET(0xA494C60)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET UNITYSDK_OFFSET(0xA494CB0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET UNITYSDK_OFFSET(0xA494D00)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET UNITYSDK_OFFSET(0xA494D50)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET UNITYSDK_OFFSET(0xA494DA0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET UNITYSDK_OFFSET(0xA494DF0)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET UNITYSDK_OFFSET(0xA494E40)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET UNITYSDK_OFFSET(0xA494E90)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEHIERARCHY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SHOULDSENDTOCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_CANHANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA495040)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ExecuteEvents_TypeDefinitionIndex = 34922;

	class ExecuteEvents : public Il2CppObject
	{
	public:
		Il2CppObject* s_PointerMoveHandler; // 0x0
		Il2CppObject* s_PointerEnterHandler; // 0x8
		Il2CppObject* s_PointerExitHandler; // 0x10
		Il2CppObject* s_PointerDownHandler; // 0x18
		Il2CppObject* s_PointerUpHandler; // 0x20
		Il2CppObject* s_PointerClickHandler; // 0x28
		Il2CppObject* s_InitializePotentialDragHandler; // 0x30
		Il2CppObject* s_BeginDragHandler; // 0x38
		Il2CppObject* s_DragHandler; // 0x40
		Il2CppObject* s_EndDragHandler; // 0x48
		Il2CppObject* s_DropHandler; // 0x50
		Il2CppObject* s_ScrollHandler; // 0x58
		Il2CppObject* s_UpdateSelectedHandler; // 0x60
		Il2CppObject* s_SelectHandler; // 0x68
		Il2CppObject* s_DeselectHandler; // 0x70
		Il2CppObject* s_MoveHandler; // 0x78
		Il2CppObject* s_SubmitHandler; // 0x80
		Il2CppObject* s_CancelHandler; // 0x88
		Il2CppObject* s_InternalTransformList; // 0x90

		Il2CppObject* ValidateEventData(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_VALIDATEEVENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerMoveHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerEnterHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerExitHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerDownHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerUpHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IPointerClickHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IInitializePotentialDragHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IBeginDragHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IDragHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IEndDragHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IDropHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IScrollHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IUpdateSelectedHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::ISelectHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IDeselectHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::IMoveHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::ISubmitHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::EventSystems::ICancelHandler* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_pointerMoveHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERMOVEHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_pointerEnterHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERENTERHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_pointerExitHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTEREXITHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_pointerDownHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERDOWNHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_pointerUpHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERUPHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_pointerClickHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_POINTERCLICKHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_initializePotentialDrag()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_INITIALIZEPOTENTIALDRAG_OFFSET))(nullptr);
		}

		Il2CppObject* get_beginDragHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_BEGINDRAGHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_dragHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DRAGHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_endDragHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_ENDDRAGHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_dropHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DROPHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_scrollHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SCROLLHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_updateSelectedHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_UPDATESELECTEDHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_selectHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SELECTHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_deselectHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_DESELECTHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_moveHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_MOVEHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_submitHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_SUBMITHANDLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_cancelHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GET_CANCELHANDLER_OFFSET))(nullptr);
		}

		::System::Void GetEventChain(::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTCHAIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Execute(::UnityEngine::GameObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* ExecuteHierarchy(::UnityEngine::GameObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_EXECUTEHIERARCHY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldSendToComponent(::UnityEngine::Component* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_SHOULDSENDTOCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void GetEventList(::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanHandleEvent(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_CANHANDLEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* GetEventHandler(::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_GETEVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

