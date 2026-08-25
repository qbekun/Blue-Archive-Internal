#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ParticleSystemStopBehavior; }

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemStopBehavior_TypeDefinitionIndex = 36960;

	class ParticleSystemStopBehavior : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ParticleSystemStopBehavior* StopEmittingAndClear; // 0x0
		::UnityEngine::ParticleSystemStopBehavior* StopEmitting; // 0x0

	};
}

