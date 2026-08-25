#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommand&; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F54ED0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F54F10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F54FE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F55050)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceExecuteCommandDelegate_TypeDefinitionIndex = 28721;

	class InputDeviceExecuteCommandDelegate : public Il2CppObject
	{
	public:
		::System::Int64 EndInvoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int64 Invoke(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&* arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICEEXECUTECOMMANDDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

