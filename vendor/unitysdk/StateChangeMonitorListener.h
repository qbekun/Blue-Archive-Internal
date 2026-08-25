#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

	inline static constexpr unsigned int StateChangeMonitorListener_TypeDefinitionIndex = 28543;

	class StateChangeMonitorListener : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputControl* control; // 0x10
		::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor; // 0x18
		::System::Int64 monitorIndex; // 0x20
		::System::UInt32 groupIndex; // 0x28

	};

