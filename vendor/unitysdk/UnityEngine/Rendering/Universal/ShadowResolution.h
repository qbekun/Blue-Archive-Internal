#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ShadowResolution; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowResolution_TypeDefinitionIndex = 32509;

	class ShadowResolution : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::ShadowResolution* _256; // 0x0
		::UnityEngine::Rendering::Universal::ShadowResolution* _512; // 0x0
		::UnityEngine::Rendering::Universal::ShadowResolution* _1024; // 0x0
		::UnityEngine::Rendering::Universal::ShadowResolution* _2048; // 0x0
		::UnityEngine::Rendering::Universal::ShadowResolution* _4096; // 0x0

	};
}

