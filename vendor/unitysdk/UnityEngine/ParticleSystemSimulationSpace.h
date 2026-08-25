#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemSimulationSpace; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemSimulationSpace_TypeDefinitionIndex = 36959;

	class ParticleSystemSimulationSpace : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemSimulationSpace* Local; // 0x0
		::UnityEngine::ParticleSystemSimulationSpace* World; // 0x0
		::UnityEngine::ParticleSystemSimulationSpace* Custom; // 0x0

	};
}

