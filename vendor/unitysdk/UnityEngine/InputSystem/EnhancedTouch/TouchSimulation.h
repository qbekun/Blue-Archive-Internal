#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem { class Touchscreen; }
namespace UnityEngine::InputSystem::EnhancedTouch { class TouchSimulation; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDeviceChange; }
namespace UnityEngine::InputSystem { class TouchPhase; }
namespace UnityEngine::InputSystem { class Pointer; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DESTROY_OFFSET UNITYSDK_OFFSET(0x9F4F040)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F4F130)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONEVENT_OFFSET UNITYSDK_OFFSET(0x9F4F200)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9F4FDC0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x9F4FDD0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UPDATETOUCH_OFFSET UNITYSDK_OFFSET(0x9F4F8E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_SIMULATEDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x9F502B0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ADDPOINTER_OFFSET UNITYSDK_OFFSET(0x9F4FEF0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONSOURCECONTROLCHANGEDVALUE_OFFSET UNITYSDK_OFFSET(0x9F502C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F502D0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_SET_SIMULATEDTOUCHSCREEN_OFFSET UNITYSDK_OFFSET(0x9F50480)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNINSTALLSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x9F50490)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9F504A0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_REMOVEPOINTER_OFFSET UNITYSDK_OFFSET(0x9F50040)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F504E0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F504F0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x9F50C00)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_INSTALLSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x9F50C10)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F50C20)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int TouchSimulation_TypeDefinitionIndex = 28687;

	class TouchSimulation : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Touchscreen* _simulatedTouchscreen_k__BackingField; // 0x18
		::System::Int32 m_NumPointers; // 0x20
		::Il2CppArray<::System::Object*>* m_Pointers; // 0x28
		::Il2CppArray<::System::Object*>* m_CurrentPositions; // 0x30
		::Il2CppArray<::System::Object*>* m_CurrentDisplayIndices; // 0x38
		::Il2CppArray<::System::Object*>* m_Touches; // 0x40
		::System::Int32 m_LastTouchId; // 0x48
		::System::Int32 m_PrimaryTouchIndex; // 0x4C
		Il2CppObject* m_OnDeviceChange; // 0x50
		Il2CppObject* m_OnEvent; // 0x58
		::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* s_Instance; // 0x0

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DESTROY_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_DISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::InputDevice* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::InputDevice*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYCONTROLSTATECHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::InputDeviceChange* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDEVICECHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateTouch(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::InputSystem::TouchPhase* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::InputSystem::TouchPhase*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UPDATETOUCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Touchscreen* get_simulatedTouchscreen()
		{
			return (return (::UnityEngine::InputSystem::Touchscreen*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_SIMULATEDTOUCHSCREEN_OFFSET))(nullptr);
		}

		::System::Void AddPointer(::UnityEngine::InputSystem::Pointer* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Pointer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ADDPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnSourceControlChangedValue(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONSOURCECONTROLCHANGEDVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ENABLE_OFFSET))(nullptr);
		}

		::System::Void set_simulatedTouchscreen(::UnityEngine::InputSystem::Touchscreen* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Touchscreen*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_SET_SIMULATEDTOUCHSCREEN_OFFSET))(arg, nullptr);
		}

		::System::Void UninstallStateChangeMonitors(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNINSTALLSTATECHANGEMONITORS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation* get_instance()
		{
			return (return (::UnityEngine::InputSystem::EnhancedTouch::TouchSimulation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void RemovePointer(::UnityEngine::InputSystem::Pointer* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Pointer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_REMOVEPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_UNITYENGINE.INPUTSYSTEM.LOWLEVEL.IINPUTSTATECHANGEMONITOR.NOTIFYTIMEREXPIRED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InstallStateChangeMonitors(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_INSTALLSTATECHANGEMONITORS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCHSIMULATION_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

