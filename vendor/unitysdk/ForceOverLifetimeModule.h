#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define FORCEOVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2971A0)

	inline static constexpr unsigned int ForceOverLifetimeModule_TypeDefinitionIndex = 36939;

	class ForceOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEOVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

