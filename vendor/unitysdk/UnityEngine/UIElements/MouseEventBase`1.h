#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine { class Event; }
namespace UnityEngine::UIElements { class IMouseEvent; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_LOCALMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_LOCALMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MOUSEDELTA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MOUSEDELTA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_COMMANDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_TRIGGEREDBYOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_SOURCEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_SOURCEPOINTEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_CURRENTTARGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_POSTDISPATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventBase`1_TypeDefinitionIndex = 30494;

	class MouseEventBase`1 : public <>c__DisplayClass64_0
	{
	public:
		::UnityEngine::EventModifiers* _modifiers_k__BackingField; // 0x0
		::UnityEngine::Vector2* _mousePosition_k__BackingField; // 0x0
		::UnityEngine::Vector2* _localMousePosition_k__BackingField; // 0x0
		::UnityEngine::Vector2* _mouseDelta_k__BackingField; // 0x0
		::System::Int32 _clickCount_k__BackingField; // 0x0
		::System::Int32 _button_k__BackingField; // 0x0
		::System::Int32 _pressedButtons_k__BackingField; // 0x0
		::System::Boolean _UnityEngine.UIElements.IMouseEventInternal.triggeredByOS_k__BackingField; // 0x0
		::System::Boolean _UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse_k__BackingField; // 0x0
		::UnityEngine::UIElements::IPointerEvent* _UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent_k__BackingField; // 0x0

		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::System::Void set_modifiers(::UnityEngine::EventModifiers* arg)
		{
			((::System::Void(*)(::UnityEngine::EventModifiers*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MODIFIERS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_mousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_mousePosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MOUSEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_localMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_LOCALMOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_localMousePosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_LOCALMOUSEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_mouseDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_MOUSEDELTA_OFFSET))(nullptr);
		}

		::System::Void set_mouseDelta(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_MOUSEDELTA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_clickCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_CLICKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_button()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void set_button(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_pressedButtons()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_PRESSEDBUTTONS_OFFSET))(nullptr);
		}

		::System::Void set_pressedButtons(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_PRESSEDBUTTONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_shiftKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ctrlKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_commandKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_COMMANDKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_altKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_ALTKEY_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_TRIGGEREDBYOS_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_TRIGGEREDBYOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_RECOMPUTETOPELEMENTUNDERMOUSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IPointerEvent* UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent()
		{
			return (return (::UnityEngine::UIElements::IPointerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.GET_SOURCEPOINTEREVENT_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_UNITYENGINE.UIELEMENTS.IMOUSEEVENTINTERNAL.SET_SOURCEPOINTEREVENT_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::IEventHandler* get_currentTarget()
		{
			return (return (::UnityEngine::UIElements::IEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GET_CURRENTTARGET_OFFSET))(nullptr);
		}

		::System::Void set_currentTarget(::UnityEngine::UIElements::IEventHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_SET_CURRENTTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_PREDISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void PostDispatch(::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_POSTDISPATCH_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IMouseEvent* arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IMouseEvent* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IMouseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::UIElements::IPointerEvent* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::UIElements::IPointerEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

