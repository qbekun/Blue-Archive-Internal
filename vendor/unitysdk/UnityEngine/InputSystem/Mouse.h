#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class DeltaControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class IntegerControl; }
namespace UnityEngine::InputSystem { class Mouse; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9EAC030)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC210)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET UNITYSDK_OFFSET(0x9EAC220)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EAC240)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC290)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EAC2A0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC3D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9EAC2B0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EAC470)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x9EAC490)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC4A0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC4B0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC4D0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET UNITYSDK_OFFSET(0x9EAC4E0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EAC560)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x9EAC580)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9EAC590)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EAC960)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x9EACA20)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACA40)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x9EACA50)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACAB0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET UNITYSDK_OFFSET(0x9EACAD0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9EACAF0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9EACBF0)
#define UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9EACC60)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Mouse_TypeDefinitionIndex = 28492;

	class Mouse : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::DeltaControl* _scroll_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _leftButton_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _middleButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::ButtonControl* _rightButton_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _backButton_k__BackingField; // 0x1C0
		::UnityEngine::InputSystem::Controls::ButtonControl* _forwardButton_k__BackingField; // 0x1C8
		::UnityEngine::InputSystem::Controls::IntegerControl* _clickCount_k__BackingField; // 0x1D0
		::UnityEngine::InputSystem::Mouse* _current_k__BackingField; // 0x0
		::UnityEngine::InputSystem::Mouse* s_PlatformMouseDevice; // 0x8

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONREMOVED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_backButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_BACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_scroll(::UnityEngine::InputSystem::Controls::DeltaControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::DeltaControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_SCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::Mouse* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Mouse*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_forwardButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_FORWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_backButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_BACKBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::DeltaControl* get_scroll()
		{
			return (return (::UnityEngine::InputSystem::Controls::DeltaControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_SCROLL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_rightButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_RIGHTBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_forwardButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_FORWARDBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_middleButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_MIDDLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONADDED_OFFSET))(nullptr);
		}

		::System::Void set_rightButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_RIGHTBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_clickCount()
		{
			return (return (::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CLICKCOUNT_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_clickCount(::UnityEngine::InputSystem::Controls::IntegerControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::IntegerControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_CLICKCOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_leftButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_LEFTBUTTON_OFFSET))(nullptr);
		}

		::System::Void WarpCursorPosition(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_WARPCURSORPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_leftButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_LEFTBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_middleButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_SET_MIDDLEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECALLBACKRECEIVER.ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Mouse* get_current()
		{
			return (return (::UnityEngine::InputSystem::Mouse*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MOUSE_GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

