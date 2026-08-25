#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class DefaultInputActions; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }

#define UIACTIONS_GET_SCROLLWHEEL_OFFSET UNITYSDK_OFFSET(0x9F14560)
#define UIACTIONS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9F14580)
#define UIACTIONS_GET_CANCEL_OFFSET UNITYSDK_OFFSET(0x9F145D0)
#define UIACTIONS_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F145F0)
#define UIACTIONS_GET_CLICK_OFFSET UNITYSDK_OFFSET(0x9F14620)
#define UIACTIONS_GET_TRACKEDDEVICEORIENTATION_OFFSET UNITYSDK_OFFSET(0x9F14640)
#define UIACTIONS_GET_RIGHTCLICK_OFFSET UNITYSDK_OFFSET(0x9F14660)
#define UIACTIONS_GET_OFFSET UNITYSDK_OFFSET(0x9F145B0)
#define UIACTIONS_GET_SUBMIT_OFFSET UNITYSDK_OFFSET(0x9F14680)
#define UIACTIONS_SETCALLBACKS_OFFSET UNITYSDK_OFFSET(0x9F146A0)
#define UIACTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F16F90)
#define UIACTIONS_GET_POINT_OFFSET UNITYSDK_OFFSET(0x9F16F30)
#define UIACTIONS_GET_MIDDLECLICK_OFFSET UNITYSDK_OFFSET(0x9F16F50)
#define UIACTIONS_GET_NAVIGATE_OFFSET UNITYSDK_OFFSET(0x9F16F10)
#define UIACTIONS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9F16FA0)
#define UIACTIONS_GET_TRACKEDDEVICEPOSITION_OFFSET UNITYSDK_OFFSET(0x9F16F70)
#define UIACTIONS_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F16FC0)

	inline static constexpr unsigned int UIActions_TypeDefinitionIndex = 28554;

	class UIActions : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper; // 0x10

		::UnityEngine::InputSystem::InputAction* get_ScrollWheel()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_SCROLLWHEEL_OFFSET))(nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_ENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Cancel()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_CANCEL_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_ENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Click()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_CLICK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_TRACKEDDEVICEORIENTATION_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_RightClick()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_RIGHTCLICK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* Get()
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Submit()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_SUBMIT_OFFSET))(nullptr);
		}

		::System::Void SetCallbacks(IUIActions* arg)
		{
			((::System::Void(*)(IUIActions*, ::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_SETCALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::DefaultInputActions* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::DefaultInputActions*, ::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Point()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_POINT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_MiddleClick()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_MIDDLECLICK_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_Navigate()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_NAVIGATE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputActionMap* op_Implicit(UIActions* arg)
		{
			return (return (::UnityEngine::InputSystem::InputActionMap*(*)(UIActions*, ::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition()
		{
			return (return (::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_GET_TRACKEDDEVICEPOSITION_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACTIONS_DISABLE_OFFSET))(nullptr);
		}

	};

