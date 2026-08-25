#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystemInternal_TypeDefinitionIndex = 31318;

	class PlayerLoopSystemInternal : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		UpdateFunction* updateDelegate; // 0x18
		::System::Int32 updateFunction; // 0x20
		::System::Int32 loopConditionFunction; // 0x28
		::System::Int32 numSubSystems; // 0x30

	};
}

