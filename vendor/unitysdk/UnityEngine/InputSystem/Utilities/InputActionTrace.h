#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEventBuffer; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionChange; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x9E7C520)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9E7C540)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7C550)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7C560)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E7C730)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETOALL_OFFSET UNITYSDK_OFFSET(0x9E7C8E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROMALL_OFFSET UNITYSDK_OFFSET(0x9E7CC90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET UNITYSDK_OFFSET(0x9E7C5E0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET UNITYSDK_OFFSET(0x9E7C7B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x9E7CA70)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET UNITYSDK_OFFSET(0x9E7CB90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_RECORDACTION_OFFSET UNITYSDK_OFFSET(0x9E7CDF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E7CFA0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9E7CFF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9E7D1B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E7DAC0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E7D0B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E7D5B0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9E7DB30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_HOOKONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E7C990)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNHOOKONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E7CD90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ONACTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x9E7DC00)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLONEACTIONSTATEBEFOREBINDINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x9E7DEA0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int InputActionTrace_TypeDefinitionIndex = 28906;

	class InputActionTrace : public Il2CppObject
	{
	public:
		::System::Boolean m_SubscribedToAll; // 0x10
		::System::Boolean m_OnActionChangeHooked; // 0x11
		Il2CppObject* m_SubscribedActions; // 0x18
		Il2CppObject* m_SubscribedActionMaps; // 0x30
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer* m_EventBuffer; // 0x48
		Il2CppObject* m_ActionMapStates; // 0x68
		Il2CppObject* m_ActionMapStateClones; // 0x80
		Il2CppObject* m_CallbackDelegate; // 0x98
		Il2CppObject* m_ActionChangeDelegate; // 0xA0

		::UnityEngine::InputSystem::LowLevel::InputEventBuffer* get_buffer()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_BUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SubscribeToAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETOALL_OFFSET))(nullptr);
		}

		::System::Void UnsubscribeFromAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROMALL_OFFSET))(nullptr);
		}

		::System::Void SubscribeTo(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET))(arg, nullptr);
		}

		::System::Void SubscribeTo(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SUBSCRIBETO_OFFSET))(arg, nullptr);
		}

		::System::Void UnsubscribeFrom(::UnityEngine::InputSystem::InputAction* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputAction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET))(arg, nullptr);
		}

		::System::Void UnsubscribeFrom(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNSUBSCRIBEFROM_OFFSET))(arg, nullptr);
		}

		::System::Void RecordAction(CallbackContext* arg)
		{
			((::System::Void(*)(CallbackContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_RECORDACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void DisposeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_DISPOSEINTERNAL_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void HookOnActionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_HOOKONACTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void UnhookOnActionChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_UNHOOKONACTIONCHANGE_OFFSET))(nullptr);
		}

		::System::Void OnActionChange(::System::Object* arg, ::UnityEngine::InputSystem::InputActionChange* arg)
		{
			((::System::Void(*)(::System::Object*, ::UnityEngine::InputSystem::InputActionChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_ONACTIONCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CloneActionStateBeforeBindingsChange(::UnityEngine::InputSystem::InputActionMap* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputActionMap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_INPUTACTIONTRACE_CLONEACTIONSTATEBEFOREBINDINGSCHANGE_OFFSET))(arg, nullptr);
		}

	};
}

