#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ComputeBufferMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferMode_TypeDefinitionIndex = 30995;

	class ComputeBufferMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ComputeBufferMode* Immutable; // 0x0
		::UnityEngine::ComputeBufferMode* Dynamic; // 0x0
		::UnityEngine::ComputeBufferMode* Circular; // 0x0
		::UnityEngine::ComputeBufferMode* StreamOut; // 0x0
		::UnityEngine::ComputeBufferMode* SubUpdates; // 0x0

	};
}

