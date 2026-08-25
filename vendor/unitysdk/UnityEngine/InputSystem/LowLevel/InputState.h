#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputUpdateType; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x9F607F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x9F60830)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x9F60870)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F60940)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x9F609D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET UNITYSDK_OFFSET(0x9F60A60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ISINTEGERFORMAT_OFFSET UNITYSDK_OFFSET(0x9F60D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F60EE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F61070)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x9F61180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9F61290)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9F61390)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputState_TypeDefinitionIndex = 28816;

	class InputState : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::InputUpdateType* get_currentUpdateType()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputUpdateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTUPDATETYPE_OFFSET))(nullptr);
		}

		::System::UInt32 get_updateCount()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_UPDATECOUNT_OFFSET))(nullptr);
		}

		::System::Double get_currentTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Void add_onChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADD_ONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void remove_onChange(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVE_ONCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Change(::UnityEngine::InputSystem::InputDevice* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Change(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Change(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject&* arg, ::UnityEngine::InputSystem::LowLevel::InputUpdateType* arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject&*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ISINTEGERFORMAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* AddChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, Il2CppObject* arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*(*)(::UnityEngine::InputSystem::InputControl*, Il2CppObject*, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Double arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Double, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITORTIMEOUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITORTIMEOUT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

