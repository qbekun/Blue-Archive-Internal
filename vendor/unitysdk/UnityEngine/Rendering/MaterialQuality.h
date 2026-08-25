#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class MaterialQuality; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialQuality_TypeDefinitionIndex = 34070;

	class MaterialQuality : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::MaterialQuality* Low; // 0x0
		::UnityEngine::Rendering::MaterialQuality* Medium; // 0x0
		::UnityEngine::Rendering::MaterialQuality* High; // 0x0

	};
}

