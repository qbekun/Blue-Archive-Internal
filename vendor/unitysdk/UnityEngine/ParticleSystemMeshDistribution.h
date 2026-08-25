#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemMeshDistribution; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemMeshDistribution_TypeDefinitionIndex = 36953;

	class ParticleSystemMeshDistribution : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemMeshDistribution* UniformRandom; // 0x0
		::UnityEngine::ParticleSystemMeshDistribution* NonUniformRandom; // 0x0

	};
}

