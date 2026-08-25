#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_ADD_DRAGGING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_REMOVE_DRAGGING_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_ADD_DRAGGINGENDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_REMOVE_DRAGGINGENDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_DRAGDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_DRAGDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_SLIDER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_STARTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_STARTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSUPEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ClampedDragger`1_TypeDefinitionIndex = 30069;

	class ClampedDragger`1 : public Il2CppObject
	{
	public:
		::System::Action* dragging; // 0x0
		::System::Action* draggingEnded; // 0x0
		Il2CppObject* _dragDirection_k__BackingField; // 0x0
		Il2CppObject* _slider_k__BackingField; // 0x0
		::UnityEngine::Vector2* _startMousePosition_k__BackingField; // 0x0

		::System::Void add_dragging(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_ADD_DRAGGING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_dragging(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_REMOVE_DRAGGING_OFFSET))(arg, nullptr);
		}

		::System::Void add_draggingEnded(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_ADD_DRAGGINGENDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_draggingEnded(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_REMOVE_DRAGGINGENDED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_dragDirection()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_DRAGDIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_dragDirection(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_DRAGDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_slider(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_SLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_startMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_STARTMOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_startMousePosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_SET_STARTMOUSEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_delta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_GET_DELTA_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Action* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessDownEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSDOWNEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessUpEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSUPEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessMoveEvent(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLAMPEDDRAGGER`1_PROCESSMOVEEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

