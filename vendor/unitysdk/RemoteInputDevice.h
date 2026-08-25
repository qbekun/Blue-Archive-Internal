#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Layouts { class InputDeviceDescription; }

	inline static constexpr unsigned int RemoteInputDevice_TypeDefinitionIndex = 28503;

	class RemoteInputDevice : public Il2CppObject
	{
	public:
		::System::Int32 remoteId; // 0x10
		::System::Int32 localId; // 0x14
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription* description; // 0x18

	};

