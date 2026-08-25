#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class StateEvent; }

	inline static constexpr unsigned int StateEventBuffer_TypeDefinitionIndex = 28454;

	class StateEventBuffer : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::StateEvent* stateEvent; // 0x10
		::System::Int32 kMaxSize; // 0x0
		<data>e__FixedBuffer* data; // 0x29

	};

