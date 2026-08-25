#pragma once
#include "../../unitysdk.h"

namespace NPA { class IMMInputCompatibility; }
namespace UnityEngine { class IMECompositionMode; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }

#define NPA_INPUTCONTROL_NXPINPUT_GETINPUTCOMPATABILITYLAYER_OFFSET UNITYSDK_OFFSET(0x9CD5D60)
#define NPA_INPUTCONTROL_NXPINPUT_SETINPUTCOMPATABILITYLAYER_OFFSET UNITYSDK_OFFSET(0x9CD5DA0)
#define NPA_INPUTCONTROL_NXPINPUT_VALIDATEGAMESCALEINPUTCOMPAT_OFFSET UNITYSDK_OFFSET(0x9CD5E80)
#define NPA_INPUTCONTROL_NXPINPUT_GET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x9CD5F00)
#define NPA_INPUTCONTROL_NXPINPUT_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x9CD6010)
#define NPA_INPUTCONTROL_NXPINPUT_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9CD6120)
#define NPA_INPUTCONTROL_NXPINPUT_GET_INPUTSTRING_OFFSET UNITYSDK_OFFSET(0x9CD6250)
#define NPA_INPUTCONTROL_NXPINPUT_GET_COMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9CD6380)
#define NPA_INPUTCONTROL_NXPINPUT_GET_IMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x9CD64B0)
#define NPA_INPUTCONTROL_NXPINPUT_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x9CD65C0)
#define NPA_INPUTCONTROL_NXPINPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x9CD66D0)
#define NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x9CD67E0)
#define NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x9CD68F0)
#define NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9CD6A00)
#define NPA_INPUTCONTROL_NXPINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x9CD6B10)
#define NPA_INPUTCONTROL_NXPINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x9CD6C20)
#define NPA_INPUTCONTROL_NXPINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x9CD6D30)

namespace NPA::InputControl
{
	inline static constexpr unsigned int NXPInput_TypeDefinitionIndex = 27458;

	class NXPInput : public Il2CppObject
	{
	public:
		::NPA::IMMInputCompatibility* inputCompat; // 0x0

		::NPA::IMMInputCompatibility* GetInputCompatabilityLayer()
		{
			return (return (::NPA::IMMInputCompatibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETINPUTCOMPATABILITYLAYER_OFFSET))(nullptr);
		}

		::System::Void SetInputCompatabilityLayer(::NPA::IMMInputCompatibility* arg)
		{
			((::System::Void(*)(::NPA::IMMInputCompatibility*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_SETINPUTCOMPATABILITYLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateGameScaleInputCompat()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_VALIDATEGAMESCALEINPUTCOMPAT_OFFSET))(nullptr);
		}

		::UnityEngine::IMECompositionMode* get_imeCompositionMode()
		{
			return (return (::UnityEngine::IMECompositionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_IMECOMPOSITIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::IMECompositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_SET_IMECOMPOSITIONMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_mousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_MOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_inputString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_INPUTSTRING_OFFSET))(nullptr);
		}

		::System::String* get_compositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_COMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_imeIsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_IMEISSELECTED_OFFSET))(nullptr);
		}

		::System::Boolean get_anyKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GET_ANYKEY_OFFSET))(nullptr);
		}

		::System::Single GetAxis(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETAXIS_OFFSET))(str, nullptr);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTONUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButton(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETMOUSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_NXPINPUT_GETKEY_OFFSET))(arg, nullptr);
		}

	};
}

