#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class PackingRules; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PackingRules_TypeDefinitionIndex = 34002;

	class PackingRules : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::PackingRules* Exact; // 0x0
		::UnityEngine::Rendering::PackingRules* Aggressive; // 0x0

	};
}

