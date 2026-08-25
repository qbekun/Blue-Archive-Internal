#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShaderHardwareTier; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderHardwareTier_TypeDefinitionIndex = 31480;

	class ShaderHardwareTier : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShaderHardwareTier* Tier1; // 0x0
		::UnityEngine::Rendering::ShaderHardwareTier* Tier2; // 0x0
		::UnityEngine::Rendering::ShaderHardwareTier* Tier3; // 0x0

	};
}

