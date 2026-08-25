#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::InputSystem { class InputActionProperty; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::InputSystem { class Mouse; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem { class InputActionProperty&; }

#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONAFTERINPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F39480)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORMODE_OFFSET UNITYSDK_OFFSET(0x9F39A10)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_VIRTUALMOUSE_OFFSET UNITYSDK_OFFSET(0x9F39D30)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F39D40)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x9F39D50)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONBUTTONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F39D60)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLWHEELACTION_OFFSET UNITYSDK_OFFSET(0x9F39F30)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_BACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A070)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x9F3A1C0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F3A2C0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_LEFTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A2D0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_STICKACTION_OFFSET UNITYSDK_OFFSET(0x9F3A2F0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F3A320)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_FORWARDBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A680)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_UPDATEMOTION_OFFSET UNITYSDK_OFFSET(0x9F39490)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_FORWARDBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A760)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_LEFTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A780)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_BACKBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A860)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x9F3A880)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_STICKACTION_OFFSET UNITYSDK_OFFSET(0x9F3A890)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORSPEED_OFFSET UNITYSDK_OFFSET(0x9F3A8B0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_MIDDLEBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3A8C0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTION_OFFSET UNITYSDK_OFFSET(0x9F39F60)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORSPEED_OFFSET UNITYSDK_OFFSET(0x9F3A8E0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F3A8F0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORMODE_OFFSET UNITYSDK_OFFSET(0x9F3AEC0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYENABLEHARDWARECURSOR_OFFSET UNITYSDK_OFFSET(0x9F39B10)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x9F3AED0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F3AEE0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_MIDDLEBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3AF00)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYFINDCANVAS_OFFSET UNITYSDK_OFFSET(0x9F3A240)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F3A150)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLWHEELACTION_OFFSET UNITYSDK_OFFSET(0x9F3AFE0)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_RIGHTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3B000)
#define UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_RIGHTBUTTONACTION_OFFSET UNITYSDK_OFFSET(0x9F3B0E0)

namespace UnityEngine::InputSystem::UI
{
	inline static constexpr unsigned int VirtualMouseInput_TypeDefinitionIndex = 28637;

	class VirtualMouseInput : public Il2CppObject
	{
	public:
		CursorMode* m_CursorMode; // 0x18
		::UnityEngine::UI::Graphic* m_CursorGraphic; // 0x20
		::UnityEngine::RectTransform* m_CursorTransform; // 0x28
		::System::Single m_CursorSpeed; // 0x30
		::System::Single m_ScrollSpeed; // 0x34
		::UnityEngine::InputSystem::InputActionProperty* m_StickAction; // 0x38
		::UnityEngine::InputSystem::InputActionProperty* m_LeftButtonAction; // 0x50
		::UnityEngine::InputSystem::InputActionProperty* m_MiddleButtonAction; // 0x68
		::UnityEngine::InputSystem::InputActionProperty* m_RightButtonAction; // 0x80
		::UnityEngine::InputSystem::InputActionProperty* m_ForwardButtonAction; // 0x98
		::UnityEngine::InputSystem::InputActionProperty* m_BackButtonAction; // 0xB0
		::UnityEngine::InputSystem::InputActionProperty* m_ScrollWheelAction; // 0xC8
		::UnityEngine::Canvas* m_Canvas; // 0xE0
		::UnityEngine::InputSystem::Mouse* m_VirtualMouse; // 0xE8
		::UnityEngine::InputSystem::Mouse* m_SystemMouse; // 0xF0
		::System::Action* m_AfterInputUpdateDelegate; // 0xF8
		Il2CppObject* m_ButtonActionTriggeredDelegate; // 0x100
		::System::Double m_LastTime; // 0x108
		::UnityEngine::Vector2* m_LastStickValue; // 0x110

		::System::Void OnAfterInputUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONAFTERINPUTUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_cursorMode(CursorMode* arg)
		{
			((::System::Void(*)(CursorMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Mouse* get_virtualMouse()
		{
			return (return (::UnityEngine::InputSystem::Mouse*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_VIRTUALMOUSE_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_cursorTransform()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORTRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Graphic* get_cursorGraphic()
		{
			return (return (::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORGRAPHIC_OFFSET))(nullptr);
		}

		::System::Void OnButtonActionTriggered(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONBUTTONACTIONTRIGGERED_OFFSET))(arg, nullptr);
		}

		::System::Void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLWHEELACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_BACKBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_cursorGraphic(::UnityEngine::UI::Graphic* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Graphic*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORGRAPHIC_OFFSET))(arg, nullptr);
		}

		::System::Void set_cursorTransform(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORTRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_leftButtonAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_LEFTBUTTONACTION_OFFSET))(nullptr);
		}

		::System::Void set_stickAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_STICKACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_FORWARDBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateMotion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_UPDATEMOTION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_forwardButtonAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_FORWARDBUTTONACTION_OFFSET))(nullptr);
		}

		::System::Void set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_LEFTBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_backButtonAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_BACKBUTTONACTION_OFFSET))(nullptr);
		}

		::System::Void set_scrollSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_SCROLLSPEED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_stickAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_STICKACTION_OFFSET))(nullptr);
		}

		::System::Void set_cursorSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_CURSORSPEED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_middleButtonAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_MIDDLEBUTTONACTION_OFFSET))(nullptr);
		}

		::System::Void SetAction(::UnityEngine::InputSystem::InputActionProperty&* arg, ::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty&*, ::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_cursorSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORSPEED_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_ONENABLE_OFFSET))(nullptr);
		}

		CursorMode* get_cursorMode()
		{
			return (return (CursorMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_CURSORMODE_OFFSET))(nullptr);
		}

		::System::Void TryEnableHardwareCursor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYENABLEHARDWARECURSOR_OFFSET))(nullptr);
		}

		::System::Single get_scrollSpeed()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLSPEED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_MIDDLEBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::System::Void TryFindCanvas()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_TRYFINDCANVAS_OFFSET))(nullptr);
		}

		::System::Void SetActionCallback(::UnityEngine::InputSystem::InputActionProperty* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SETACTIONCALLBACK_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_scrollWheelAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_SCROLLWHEELACTION_OFFSET))(nullptr);
		}

		::System::Void set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_SET_RIGHTBUTTONACTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputActionProperty* get_rightButtonAction()
		{
			return (return (::UnityEngine::InputSystem::InputActionProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UI_VIRTUALMOUSEINPUT_GET_RIGHTBUTTONACTION_OFFSET))(nullptr);
		}

	};
}

