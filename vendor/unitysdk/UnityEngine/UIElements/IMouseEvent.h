#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class EventModifiers; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_LOCALMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MOUSEDELTA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_PRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_COMMANDKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMouseEvent_TypeDefinitionIndex = 30492;

	class IMouseEvent : public Il2CppObject
	{
	public:
		::UnityEngine::EventModifiers* get_modifiers()
		{
			return (return (::UnityEngine::EventModifiers*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_mousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MOUSEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_localMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_LOCALMOUSEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_mouseDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_MOUSEDELTA_OFFSET))(nullptr);
		}

		::System::Int32 get_clickCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_button()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_pressedButtons()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_PRESSEDBUTTONS_OFFSET))(nullptr);
		}

		::System::Boolean get_shiftKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_SHIFTKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_ctrlKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_CTRLKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_commandKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_COMMANDKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_altKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMOUSEEVENT_GET_ALTKEY_OFFSET))(nullptr);
		}

	};
}

