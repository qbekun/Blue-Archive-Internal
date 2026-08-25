#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class DynamicBitfield; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }
namespace UnityEngine::InputSystem { class InputControl; }

#define STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9F10C60)
#define STATECHANGEMONITORSFORDEVICE_ADD_OFFSET UNITYSDK_OFFSET(0x9F10EC0)
#define STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F110E0)
#define STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9F11160)
#define STATECHANGEMONITORSFORDEVICE_SORTMONITORSBYINDEX_OFFSET UNITYSDK_OFFSET(0x9F11170)
#define STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x9F10E00)
#define STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET UNITYSDK_OFFSET(0x9F11290)

	inline static constexpr unsigned int StateChangeMonitorsForDevice_TypeDefinitionIndex = 28544;

	class StateChangeMonitorsForDevice : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* memoryRegions; // 0x10
		::Il2CppArray<::System::Object*>* listeners; // 0x18
		::UnityEngine::InputSystem::DynamicBitfield* signalled; // 0x20
		::System::Boolean needToUpdateOrderingOfMonitors; // 0x40
		::System::Boolean needToCompactArrays; // 0x41

		::System::Void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_REMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::UnityEngine::InputSystem::InputControl* arg, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* arg, ::System::Int64 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_ADD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_CLEAR_OFFSET))(nullptr);
		}

		::System::Int32 get_count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void SortMonitorsByIndex()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_SORTMONITORSBYINDEX_OFFSET))(nullptr);
		}

		::System::Void RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void CompactArrays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORSFORDEVICE_COMPACTARRAYS_OFFSET))(nullptr);
		}

	};

