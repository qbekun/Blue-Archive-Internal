#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }

	inline static constexpr unsigned int AvailableDevice_TypeDefinitionIndex = 28541;

	class AvailableDevice : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription* description; // 0x10
		::System::Int32 deviceId; // 0x48
		::System::Boolean isNative; // 0x4C
		::System::Boolean isRemoved; // 0x4D

	};

