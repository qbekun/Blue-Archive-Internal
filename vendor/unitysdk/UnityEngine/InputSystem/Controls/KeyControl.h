#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class Key; }

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x9E78B00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_SET_KEYCODE_OFFSET UNITYSDK_OFFSET(0x9E78B10)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_SCANCODE_OFFSET UNITYSDK_OFFSET(0x9E78B20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E78B40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x9E78B50)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int KeyControl_TypeDefinitionIndex = 28889;

	class KeyControl : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Key* _keyCode_k__BackingField; // 0x138
		::System::Int32 m_ScanCode; // 0x13C

		::UnityEngine::InputSystem::Key* get_keyCode()
		{
			return (return (::UnityEngine::InputSystem::Key*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_KEYCODE_OFFSET))(nullptr);
		}

		::System::Void set_keyCode(::UnityEngine::InputSystem::Key* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Key*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_SET_KEYCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_scanCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_GET_SCANCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshConfiguration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_KEYCONTROL_REFRESHCONFIGURATION_OFFSET))(nullptr);
		}

	};
}

