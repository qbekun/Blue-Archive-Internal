#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class GraphicsTier; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsTier_TypeDefinitionIndex = 31505;

	class GraphicsTier : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::GraphicsTier* Tier1; // 0x0
		::UnityEngine::Rendering::GraphicsTier* Tier2; // 0x0
		::UnityEngine::Rendering::GraphicsTier* Tier3; // 0x0

	};
}

