#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DepthOfFieldMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldMode_TypeDefinitionIndex = 32672;

	class DepthOfFieldMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DepthOfFieldMode* Off; // 0x0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode* Gaussian; // 0x0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode* Bokeh; // 0x0

	};
}

