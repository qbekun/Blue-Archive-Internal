#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

	inline static constexpr unsigned int StateChangeMonitorTimeout_TypeDefinitionIndex = 28542;

	class StateChangeMonitorTimeout : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::InputControl* control; // 0x10
		::System::Double time; // 0x18
		::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor; // 0x20
		::System::Int64 monitorIndex; // 0x28
		::System::Int32 timerIndex; // 0x30

	};

