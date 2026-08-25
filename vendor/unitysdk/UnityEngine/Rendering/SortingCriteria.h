#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SortingCriteria; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingCriteria_TypeDefinitionIndex = 31573;

	class SortingCriteria : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::SortingCriteria* None; // 0x0
		::UnityEngine::Rendering::SortingCriteria* SortingLayer; // 0x0
		::UnityEngine::Rendering::SortingCriteria* RenderQueue; // 0x0
		::UnityEngine::Rendering::SortingCriteria* BackToFront; // 0x0
		::UnityEngine::Rendering::SortingCriteria* QuantizedFrontToBack; // 0x0
		::UnityEngine::Rendering::SortingCriteria* OptimizeStateChanges; // 0x0
		::UnityEngine::Rendering::SortingCriteria* CanvasOrder; // 0x0
		::UnityEngine::Rendering::SortingCriteria* RendererPriority; // 0x0
		::UnityEngine::Rendering::SortingCriteria* CommonOpaque; // 0x0
		::UnityEngine::Rendering::SortingCriteria* CommonTransparent; // 0x0

	};
}

