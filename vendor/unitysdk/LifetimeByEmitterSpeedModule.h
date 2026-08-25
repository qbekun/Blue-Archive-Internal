#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define LIFETIMEBYEMITTERSPEEDMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297170)

	inline static constexpr unsigned int LifetimeByEmitterSpeedModule_TypeDefinitionIndex = 36938;

	class LifetimeByEmitterSpeedModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + LIFETIMEBYEMITTERSPEEDMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

