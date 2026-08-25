#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F54D10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F54D50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F54D80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F54E90)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputDeviceCommandDelegate_TypeDefinitionIndex = 28720;

	class InputDeviceCommandDelegate : public Il2CppObject
	{
	public:
		Il2CppObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (Il2CppObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Invoke(::UnityEngine::InputSystem::InputDevice* arg, ::System::Object** arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::InputDevice* arg, ::System::Object** arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Object**, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTDEVICECOMMANDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

