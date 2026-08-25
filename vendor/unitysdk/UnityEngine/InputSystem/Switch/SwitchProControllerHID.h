#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F3B100)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_HOMEBUTTON_OFFSET UNITYSDK_OFFSET(0x9F3B2C0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_PREPROCESSEVENT_OFFSET UNITYSDK_OFFSET(0x9F3B2D0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F3BE30)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x9F3BE40)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONADDED_OFFSET UNITYSDK_OFFSET(0x9F3C1E0)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKETICK_OFFSET UNITYSDK_OFFSET(0x9F3BE50)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F3C490)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_CAPTUREBUTTON_OFFSET UNITYSDK_OFFSET(0x9F3C520)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKERESTART_OFFSET UNITYSDK_OFFSET(0x9F3C290)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_CAPTUREBUTTON_OFFSET UNITYSDK_OFFSET(0x9F3C530)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_HOMEBUTTON_OFFSET UNITYSDK_OFFSET(0x9F3C550)
#define UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x9F3C570)

namespace UnityEngine::InputSystem::Switch
{
	inline static constexpr unsigned int SwitchProControllerHID_TypeDefinitionIndex = 28647;

	class SwitchProControllerHID : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::ButtonControl* _captureButton_k__BackingField; // 0x1F0
		::UnityEngine::InputSystem::Controls::ButtonControl* _homeButton_k__BackingField; // 0x1F8
		::Il2CppArray<::System::Object*>* s_HandshakeSequence; // 0x0
		::System::Int32 m_HandshakeStepIndex; // 0x200
		::System::Double m_HandshakeTimer; // 0x208
		::System::Byte JitterMaskLow; // 0x0
		::System::Byte JitterMaskHigh; // 0x0

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONSTATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_homeButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_HOMEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_PREPROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnNextUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONNEXTUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnAdded()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_ONADDED_OFFSET))(nullptr);
		}

		::System::Void HandshakeTick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKETICK_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_.CCTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_captureButton()
		{
			return (return (::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GET_CAPTUREBUTTON_OFFSET))(nullptr);
		}

		::System::Void HandshakeRestart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_HANDSHAKERESTART_OFFSET))(nullptr);
		}

		::System::Void set_captureButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_CAPTUREBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void set_homeButton(::UnityEngine::InputSystem::Controls::ButtonControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::ButtonControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_SET_HOMEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SWITCH_SWITCHPROCONTROLLERHID_GETSTATEOFFSETFOREVENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

