#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemSortMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemSortMode_TypeDefinitionIndex = 36954;

	class ParticleSystemSortMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemSortMode* None; // 0x0
		::UnityEngine::ParticleSystemSortMode* Distance; // 0x0
		::UnityEngine::ParticleSystemSortMode* OldestInFront; // 0x0
		::UnityEngine::ParticleSystemSortMode* YoungestInFront; // 0x0
		::UnityEngine::ParticleSystemSortMode* Depth; // 0x0

	};
}

