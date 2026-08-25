#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::OnScreen { class OnScreenControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0x9F3DBD0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENDVALUETOCONTROL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET UNITYSDK_OFFSET(0x9F3E870)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET UNITYSDK_OFFSET(0x9F3E990)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x9F3E9A0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F3DBC0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F3E9E0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F3E9F0)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET UNITYSDK_OFFSET(0x9F3ED80)

namespace UnityEngine::InputSystem::OnScreen
{
	inline static constexpr unsigned int OnScreenControl_TypeDefinitionIndex = 28653;

	class OnScreenControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputControl* m_Control; // 0x18
		::UnityEngine::InputSystem::OnScreen::OnScreenControl* m_NextControlOnDevice; // 0x20
		::UnityEngine::InputSystem::LowLevel::InputEventPtr* m_InputEventPtr; // 0x28
		Il2CppObject* s_OnScreenDevices; // 0x0

		::System::Void SetupInputControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SETUPINPUTCONTROL_OFFSET))(nullptr);
		}

		::System::Void set_controlPathInternal(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATHINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Void SendValueToControl(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENDVALUETOCONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void SentDefaultValueToControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SENTDEFAULTVALUETOCONTROL_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::InputControl* get_control()
		{
			return (return (::UnityEngine::InputSystem::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROL_OFFSET))(nullptr);
		}

		::System::Void set_controlPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_SET_CONTROLPATH_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::String* get_controlPathInternal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATHINTERNAL_OFFSET))(nullptr);
		}

		::System::String* get_controlPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ONSCREEN_ONSCREENCONTROL_GET_CONTROLPATH_OFFSET))(nullptr);
		}

	};
}

