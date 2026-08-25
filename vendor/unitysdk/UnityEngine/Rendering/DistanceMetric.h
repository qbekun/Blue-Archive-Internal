#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DistanceMetric; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DistanceMetric_TypeDefinitionIndex = 31575;

	class DistanceMetric : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DistanceMetric* Perspective; // 0x0
		::UnityEngine::Rendering::DistanceMetric* Orthographic; // 0x0
		::UnityEngine::Rendering::DistanceMetric* CustomAxis; // 0x0

	};
}

