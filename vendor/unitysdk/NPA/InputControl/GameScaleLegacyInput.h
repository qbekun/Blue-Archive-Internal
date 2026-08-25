#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class IMECompositionMode; }
namespace UnityEngine { class KeyCode; }

#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD5C50)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9CD5C60)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x9CD5C70)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETINPUTSTRING_OFFSET UNITYSDK_OFFSET(0x9CD5C90)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETCOMPOSITIONSTRING_OFFSET UNITYSDK_OFFSET(0x9CD5CA0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETIMEISSELECTED_OFFSET UNITYSDK_OFFSET(0x9CD5CB0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETANYKEY_OFFSET UNITYSDK_OFFSET(0x9CD5CC0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x9CD5CD0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x9CD5CE0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETAXIS_OFFSET UNITYSDK_OFFSET(0x9CD5CF0)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x9CD5D00)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x9CD5D10)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x9CD5D20)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x9CD5D30)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x9CD5D40)
#define NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x9CD5D50)

namespace NPA::InputControl
{
	inline static constexpr unsigned int GameScaleLegacyInput_TypeDefinitionIndex = 27457;

	class GameScaleLegacyInput : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_FINALIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetMousePosition()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEPOSITION_OFFSET))(nullptr);
		}

		::System::String* GetInputString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETINPUTSTRING_OFFSET))(nullptr);
		}

		::System::String* GetCompositionString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETCOMPOSITIONSTRING_OFFSET))(nullptr);
		}

		::System::Boolean GetImeIsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETIMEISSELECTED_OFFSET))(nullptr);
		}

		::System::Boolean GetAnyKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETANYKEY_OFFSET))(nullptr);
		}

		::UnityEngine::IMECompositionMode* GetImeCompositionMode()
		{
			return (return (::UnityEngine::IMECompositionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETIMECOMPOSITIONMODE_OFFSET))(nullptr);
		}

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::IMECompositionMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_SETIMECOMPOSITIONMODE_OFFSET))(arg, nullptr);
		}

		::System::Single GetAxis(::System::String* str)
		{
			return (return (::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETAXIS_OFFSET))(str, nullptr);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTONDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTONUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetMouseButton(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETMOUSEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEYDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEYUP_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INPUTCONTROL_GAMESCALELEGACYINPUT_GETKEY_OFFSET))(arg, nullptr);
		}

	};
}

