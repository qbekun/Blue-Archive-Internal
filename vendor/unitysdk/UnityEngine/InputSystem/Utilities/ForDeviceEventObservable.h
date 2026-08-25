#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x9E860B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E86220)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int ForDeviceEventObservable_TypeDefinitionIndex = 28937;

	class ForDeviceEventObservable : public Il2CppObject
	{
	public:
		Il2CppObject* m_Source; // 0x10
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x18
		::System::Type* m_DeviceType; // 0x20

		::System::IDisposable* Subscribe(Il2CppObject* arg)
		{
			return (return (::System::IDisposable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_SUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Type* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Type*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_FORDEVICEEVENTOBSERVABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

