#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemRenderSpace; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderSpace_TypeDefinitionIndex = 36955;

	class ParticleSystemRenderSpace : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemRenderSpace* View; // 0x0
		::UnityEngine::ParticleSystemRenderSpace* World; // 0x0
		::UnityEngine::ParticleSystemRenderSpace* Local; // 0x0
		::UnityEngine::ParticleSystemRenderSpace* Facing; // 0x0
		::UnityEngine::ParticleSystemRenderSpace* Velocity; // 0x0

	};
}

