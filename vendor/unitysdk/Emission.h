#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Emission_TypeDefinitionIndex = 36925;

	class Emission : public Il2CppObject
	{
	public:
		::System::Single m_ParticleSpacing; // 0x10
		::System::Single m_ToEmitAccumulator; // 0x14
		Seed* m_Random; // 0x18

	};

