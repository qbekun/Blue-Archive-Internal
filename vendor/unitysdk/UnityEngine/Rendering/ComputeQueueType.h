#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ComputeQueueType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ComputeQueueType_TypeDefinitionIndex = 31517;

	class ComputeQueueType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ComputeQueueType* Default; // 0x0
		::UnityEngine::Rendering::ComputeQueueType* Background; // 0x0
		::UnityEngine::Rendering::ComputeQueueType* Urgent; // 0x0

	};
}

