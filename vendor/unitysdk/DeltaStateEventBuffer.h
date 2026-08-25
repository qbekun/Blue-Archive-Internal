#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class DeltaStateEvent; }

	inline static constexpr unsigned int DeltaStateEventBuffer_TypeDefinitionIndex = 28456;

	class DeltaStateEventBuffer : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* stateEvent; // 0x10
		::System::Int32 kMaxSize; // 0x0
		<data>e__FixedBuffer* data; // 0x2D

	};

