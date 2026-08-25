#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ShadowSamplingMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowSamplingMode_TypeDefinitionIndex = 31512;

	class ShadowSamplingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ShadowSamplingMode* CompareDepths; // 0x0
		::UnityEngine::Rendering::ShadowSamplingMode* RawDepth; // 0x0
		::UnityEngine::Rendering::ShadowSamplingMode* None; // 0x0

	};
}

