#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define LIMITVELOCITYOVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297110)

	inline static constexpr unsigned int LimitVelocityOverLifetimeModule_TypeDefinitionIndex = 36936;

	class LimitVelocityOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + LIMITVELOCITYOVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

