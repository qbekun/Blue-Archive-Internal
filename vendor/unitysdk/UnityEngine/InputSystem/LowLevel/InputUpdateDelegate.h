#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer&; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9F5F3E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9F5F3F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F5F410)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9F5F4E0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputUpdateDelegate_TypeDefinitionIndex = 28799;

	class InputUpdateDelegate : public Il2CppObject
	{
	public:
		::System::Void Invoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTUPDATEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

