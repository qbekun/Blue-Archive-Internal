#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription&; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F69970)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F69A00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F69A20)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F69AF0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceFindControlLayoutDelegate_TypeDefinitionIndex = 28846;

	class InputDeviceFindControlLayoutDelegate : public Il2CppObject
	{
	public:
		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::String* str, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::String* Invoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::String* str, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_INVOKE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* EndInvoke(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEFINDCONTROLLAYOUTDELEGATE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

