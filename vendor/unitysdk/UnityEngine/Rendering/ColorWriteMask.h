#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ColorWriteMask; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ColorWriteMask_TypeDefinitionIndex = 31493;

	class ColorWriteMask : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ColorWriteMask* Alpha; // 0x0
		::UnityEngine::Rendering::ColorWriteMask* Blue; // 0x0
		::UnityEngine::Rendering::ColorWriteMask* Green; // 0x0
		::UnityEngine::Rendering::ColorWriteMask* Red; // 0x0
		::UnityEngine::Rendering::ColorWriteMask* All; // 0x0

	};
}

