#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemGradientMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemGradientMode_TypeDefinitionIndex = 36957;

	class ParticleSystemGradientMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemGradientMode* Color; // 0x0
		::UnityEngine::ParticleSystemGradientMode* Gradient; // 0x0
		::UnityEngine::ParticleSystemGradientMode* TwoColors; // 0x0
		::UnityEngine::ParticleSystemGradientMode* TwoGradients; // 0x0
		::UnityEngine::ParticleSystemGradientMode* RandomColor; // 0x0

	};
}

