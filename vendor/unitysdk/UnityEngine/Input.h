#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Gyroscope; }
namespace UnityEngine { class KeyCode; }
namespace UnityEngine { class Touch; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class IMECompositionMode; }
namespace UnityEngine { class Touch&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_INPUT_GETKEYINT_OFFSET UNITYSDK_OFFSET(0xA290910)
#define UNITYENGINE_INPUT_GETKEYUPINT_OFFSET UNITYSDK_OFFSET(0xA290950)
#define UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET UNITYSDK_OFFSET(0xA290990)
#define UNITYENGINE_INPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0xA2909D0)
#define UNITYENGINE_INPUT_GETAXISRAW_OFFSET UNITYSDK_OFFSET(0xA290A10)
#define UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xA290A50)
#define UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA290A90)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0xA290AD0)
#define UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0xA290B10)
#define UNITYENGINE_INPUT_GETTOUCH_OFFSET UNITYSDK_OFFSET(0xA290B50)
#define UNITYENGINE_INPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0xA290C20)
#define UNITYENGINE_INPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0xA290C60)
#define UNITYENGINE_INPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA290CA0)
#define UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0xA290CE0)
#define UNITYENGINE_INPUT_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0xA290D20)
#define UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA290D60)
#define UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET UNITYSDK_OFFSET(0xA290DA0)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA290DE0)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0xA290E80)
#define UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0xA290F00)
#define UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0xA290F40)
#define UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0xA290F80)
#define UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET UNITYSDK_OFFSET(0xA290FC0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0xA291000)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET UNITYSDK_OFFSET(0xA291080)
#define UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET UNITYSDK_OFFSET(0xA291100)
#define UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0xA291140)
#define UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET UNITYSDK_OFFSET(0xA291180)
#define UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2911C0)
#define UNITYENGINE_INPUT_GET_GYRO_OFFSET UNITYSDK_OFFSET(0xA291200)
#define UNITYENGINE_INPUT_GET_TOUCHES_OFFSET UNITYSDK_OFFSET(0xA2912D0)
#define UNITYENGINE_INPUT_CHECKDISABLED_OFFSET UNITYSDK_OFFSET(0xA2914C0)
#define UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA290BE0)
#define UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA290E40)
#define UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA290EC0)
#define UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA291040)
#define UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2910C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Input_TypeDefinitionIndex = 37747;

	class Input : public Il2CppObject
	{
	public:
		::UnityEngine::Gyroscope* s_MainGyro; // 0x0

		::System::Boolean GetKeyInt(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUpInt(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUPINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDownInt(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWNINT_OFFSET))(arg, nullptr);
		}

		::System::Single GetAxis(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXIS_OFFSET))(str, nullptr);
		}

		::System::Single GetAxisRaw(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETAXISRAW_OFFSET))(str, nullptr);
		}

		::System::Boolean GetButtonDown(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETBUTTONDOWN_OFFSET))(str, nullptr);
		}

		::System::Boolean GetMouseButton(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETMOUSEBUTTONUP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Touch* GetTouch(::System::Int32 arg)
		{
			return (return (::UnityEngine::Touch*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEY_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void set_simulateMouseWithTouches(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_anyKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ANYKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_anyKeyDown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_ANYKEYDOWN_OFFSET))(nullptr);
		}

		::System::String* get_inputString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_INPUTSTRING_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_mousePosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPOSITION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_mouseScrollDelta()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_OFFSET))(nullptr);
		}

		::UnityEngine::IMECompositionMode* get_imeCompositionMode()
		{
			return (return (::UnityEngine::IMECompositionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_IMECOMPOSITIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::IMECompositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_IMECOMPOSITIONMODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_compositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_imeIsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_IMEISSELECTED_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_compositionCursorPos()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_OFFSET))(nullptr);
		}

		::System::Void set_compositionCursorPos(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_mousePresent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPRESENT_OFFSET))(nullptr);
		}

		::System::Int32 get_touchCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_touchSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHSUPPORTED_OFFSET))(nullptr);
		}

		::System::Int32 GetGyroInternal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETGYROINTERNAL_OFFSET))(nullptr);
		}

		::UnityEngine::Gyroscope* get_gyro()
		{
			return (return (::UnityEngine::Gyroscope*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_GYRO_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_touches()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_TOUCHES_OFFSET))(nullptr);
		}

		::System::Boolean CheckDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_CHECKDISABLED_OFFSET))(nullptr);
		}

		::System::Void GetTouch_Injected(::System::Int32 arg, ::UnityEngine::Touch&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Touch&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GETTOUCH_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void get_mousePosition_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSEPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_mouseScrollDelta_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_MOUSESCROLLDELTA_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_compositionCursorPos_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_GET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_compositionCursorPos_Injected(::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUT_SET_COMPOSITIONCURSORPOS_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

