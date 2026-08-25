#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define ROTATIONOVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297290)

	inline static constexpr unsigned int RotationOverLifetimeModule_TypeDefinitionIndex = 36944;

	class RotationOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATIONOVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

