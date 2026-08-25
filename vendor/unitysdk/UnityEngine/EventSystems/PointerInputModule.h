#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData&; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Touch; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET UNITYSDK_OFFSET(0xA4970C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET UNITYSDK_OFFSET(0xA4971B0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xA497210)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET UNITYSDK_OFFSET(0xA497610)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA497730)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xA4977D0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xA4977F0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET UNITYSDK_OFFSET(0xA497E90)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET UNITYSDK_OFFSET(0xA497F10)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0xA497F40)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET UNITYSDK_OFFSET(0xA497F80)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA498360)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET UNITYSDK_OFFSET(0xA498450)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA498620)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA4988C0)
#define UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4989A0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int PointerInputModule_TypeDefinitionIndex = 34928;

	class PointerInputModule : public ::TriInspector::SceneObjectsOnlyAttribute
	{
	public:
		::System::Int32 kMouseLeftId; // 0x0
		::System::Int32 kMouseRightId; // 0x0
		::System::Int32 kMouseMiddleId; // 0x0
		::System::Int32 kFakeTouchesId; // 0x0
		Il2CppObject* m_PointerData; // 0x50
		MouseState* m_MouseState; // 0x58

		::System::Boolean GetPointerData(::System::Int32 arg, ::UnityEngine::EventSystems::PointerEventData&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::EventSystems::PointerEventData&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETPOINTERDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_REMOVEPOINTERDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch* arg, bool&* arg, bool&* arg)
		{
			return (return (::UnityEngine::EventSystems::PointerEventData*(*)(::UnityEngine::Touch*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETTOUCHPOINTEREVENTDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* arg, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_COPYFROMTO_OFFSET))(arg, arg, nullptr);
		}

		FramePressState* StateForMouseButton(::System::Int32 arg)
		{
			return (return (FramePressState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_STATEFORMOUSEBUTTON_OFFSET))(arg, nullptr);
		}

		MouseState* GetMousePointerEventData()
		{
			return (return (MouseState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET))(nullptr);
		}

		MouseState* GetMousePointerEventData(::System::Int32 arg)
		{
			return (return (MouseState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETMOUSEPOINTEREVENTDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(::System::Int32 arg)
		{
			return (return (::UnityEngine::EventSystems::PointerEventData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_GETLASTPOINTEREVENTDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldStartDrag(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_SHOULDSTARTDRAG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessMove(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_PROCESSDRAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPointerOverGameObject(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_ISPOINTEROVERGAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void ClearSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_CLEARSELECTION_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void DeselectIfSelectionChanged(::UnityEngine::GameObject* arg, ::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_DESELECTIFSELECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_POINTERINPUTMODULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

