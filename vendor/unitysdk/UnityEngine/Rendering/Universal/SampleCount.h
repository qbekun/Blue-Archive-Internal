#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class SampleCount; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SampleCount_TypeDefinitionIndex = 32744;

	class SampleCount : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::SampleCount* One; // 0x0
		::UnityEngine::Rendering::Universal::SampleCount* Two; // 0x0
		::UnityEngine::Rendering::Universal::SampleCount* Four; // 0x0

	};
}

