#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define VELOCITYOVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2970E0)

	inline static constexpr unsigned int VelocityOverLifetimeModule_TypeDefinitionIndex = 36935;

	class VelocityOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + VELOCITYOVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

