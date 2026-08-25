#pragma once
#include "unitysdk.h"

namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define INPUTWRAPPER_ISJOYSTICKKEYFULLYUP_OFFSET UNITYSDK_OFFSET(0x20F2B10)
#define INPUTWRAPPER_ISMOVEDKEYBOARDMOUSE_OFFSET UNITYSDK_OFFSET(0x20EE460)
#define INPUTWRAPPER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x20EE510)
#define INPUTWRAPPER_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x20F2EE0)
#define INPUTWRAPPER_ISJOYSTICKKEYPRESSED_OFFSET UNITYSDK_OFFSET(0x20F2B60)
#define INPUTWRAPPER_GETTOUCHUP_OFFSET UNITYSDK_OFFSET(0x20F2EF0)
#define INPUTWRAPPER_GETINPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x20F2F90)
#define INPUTWRAPPER_ISANYCONTROLLERBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x20EE170)
#define INPUTWRAPPER_GETANYKEYBOARDDOWNTHISFRAME_OFFSET UNITYSDK_OFFSET(0x20F3090)
#define INPUTWRAPPER_ISMOVEDMOUSE_OFFSET UNITYSDK_OFFSET(0x20F3100)
#define INPUTWRAPPER_ISANYKEYDOWNEXCEPT_OFFSET UNITYSDK_OFFSET(0x20F32C0)
#define INPUTWRAPPER_ISAXISKEYPRESSED_OFFSET UNITYSDK_OFFSET(0x20F32F0)
#define INPUTWRAPPER_ISAXISKEYFULLYUP_OFFSET UNITYSDK_OFFSET(0x20F34B0)
#define INPUTWRAPPER_JOYSTICKDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F35A0)
#define INPUTWRAPPER_ISJOYSTICKKEYUP_OFFSET UNITYSDK_OFFSET(0x20F2C00)
#define INPUTWRAPPER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x20F3870)
#define INPUTWRAPPER_GETKEYDOWNNEW_OFFSET UNITYSDK_OFFSET(0x20EE580)
#define INPUTWRAPPER_ISARROWKEYPRESSED_OFFSET UNITYSDK_OFFSET(0x20F3310)
#define INPUTWRAPPER_AXISDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F3880)
#define INPUTWRAPPER_ARROWDIRECTION_OFFSET UNITYSDK_OFFSET(0x20F3920)
#define INPUTWRAPPER_GETKEY_OFFSET UNITYSDK_OFFSET(0x20F3BF0)
#define INPUTWRAPPER_GETWHERE_OFFSET UNITYSDK_OFFSET(0x20F3C00)
#define INPUTWRAPPER_ISARROWKEYFULLYUP_OFFSET UNITYSDK_OFFSET(0x20F3550)
#define INPUTWRAPPER_GETANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0x20EE160)
#define INPUTWRAPPER_ISMULTITAPNOW_OFFSET UNITYSDK_OFFSET(0x20F3FB0)
#define INPUTWRAPPER_GETANYKEYBOARDDOWN_OFFSET UNITYSDK_OFFSET(0x20EE3F0)
#define INPUTWRAPPER_GETKEYPRESSNEW_OFFSET UNITYSDK_OFFSET(0x20EE520)
#define INPUTWRAPPER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x20F3FD0)
#define INPUTWRAPPER_ISAXISKEYUP_OFFSET UNITYSDK_OFFSET(0x20F40D0)
#define INPUTWRAPPER_GETTOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x20F40F0)
#define INPUTWRAPPER_ISARROWKEYUP_OFFSET UNITYSDK_OFFSET(0x20F3E10)

	inline static constexpr unsigned int InputWrapper_TypeDefinitionIndex = 3817;

	class InputWrapper : public Il2CppObject
	{
	public:
		::System::Boolean _isStartSpike; // 0x0
		::System::Int32 MoveKeyDirectionCount; // 0x0

		::System::Boolean IsJoystickKeyFullyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISJOYSTICKKEYFULLYUP_OFFSET))(nullptr);
		}

		::System::Boolean IsMovedKeyboardMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISMOVEDKEYBOARDMOUSE_OFFSET))(nullptr);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETTOUCHCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsJoystickKeyPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISJOYSTICKKEYPRESSED_OFFSET))(nullptr);
		}

		::System::Boolean GetTouchUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETTOUCHUP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetInputPosition()
		{
			return ((::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETINPUTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean IsAnyControllerButtonDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISANYCONTROLLERBUTTONDOWN_OFFSET))(nullptr);
		}

		::System::Boolean GetAnyKeyboardDownThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETANYKEYBOARDDOWNTHISFRAME_OFFSET))(nullptr);
		}

		::System::Boolean IsMovedMouse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISMOVEDMOUSE_OFFSET))(nullptr);
		}

		::System::Boolean IsAnyKeyDownExcept(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISANYKEYDOWNEXCEPT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAxisKeyPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISAXISKEYPRESSED_OFFSET))(nullptr);
		}

		::System::Boolean IsAxisKeyFullyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISAXISKEYFULLYUP_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* JoystickDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_JOYSTICKDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean IsJoystickKeyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISJOYSTICKKEYUP_OFFSET))(nullptr);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDownNew(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETKEYDOWNNEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArrowKeyPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISARROWKEYPRESSED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* AxisDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_AXISDIRECTION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* ArrowDirection()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ARROWDIRECTION_OFFSET))(nullptr);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::String* GetWhere(::System::String* str, ::System::String* str2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETWHERE_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean IsArrowKeyFullyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISARROWKEYFULLYUP_OFFSET))(nullptr);
		}

		::System::Boolean GetAnyKeyDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETANYKEYDOWN_OFFSET))(nullptr);
		}

		::System::Boolean IsMultitapNow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISMULTITAPNOW_OFFSET))(nullptr);
		}

		::System::Boolean GetAnyKeyboardDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETANYKEYBOARDDOWN_OFFSET))(nullptr);
		}

		::System::Boolean GetKeyPressNew(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETKEYPRESSNEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISPRESSED_OFFSET))(nullptr);
		}

		::System::Boolean IsAxisKeyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISAXISKEYUP_OFFSET))(nullptr);
		}

		::System::Boolean GetTouchDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_GETTOUCHDOWN_OFFSET))(nullptr);
		}

		::System::Boolean IsArrowKeyUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTWRAPPER_ISARROWKEYUP_OFFSET))(nullptr);
		}

	};

