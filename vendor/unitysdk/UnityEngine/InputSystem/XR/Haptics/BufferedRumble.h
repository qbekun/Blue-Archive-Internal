#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::InputSystem::XR::Haptics { class HapticCapabilities; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F28490)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9F286A0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x9F286B0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9F286C0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_CAPABILITIES_OFFSET UNITYSDK_OFFSET(0x9F286D0)
#define UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_ENQUEUERUMBLE_OFFSET UNITYSDK_OFFSET(0x9F286E0)

namespace UnityEngine::InputSystem::XR::Haptics
{
	inline static constexpr unsigned int BufferedRumble_TypeDefinitionIndex = 28591;

	class BufferedRumble : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities* _capabilities_k__BackingField; // 0x10
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x20

		::System::Void .ctor(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return (return (::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_DEVICE_OFFSET))(nullptr);
		}

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_DEVICE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities* get_capabilities()
		{
			return (return (::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_GET_CAPABILITIES_OFFSET))(nullptr);
		}

		::System::Void set_capabilities(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::XR::Haptics::HapticCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_SET_CAPABILITIES_OFFSET))(arg, nullptr);
		}

		::System::Void EnqueueRumble(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_HAPTICS_BUFFEREDRUMBLE_ENQUEUERUMBLE_OFFSET))(arg, nullptr);
		}

	};
}

