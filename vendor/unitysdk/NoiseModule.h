#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define NOISEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297320)

	inline static constexpr unsigned int NoiseModule_TypeDefinitionIndex = 36947;

	class NoiseModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + NOISEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

