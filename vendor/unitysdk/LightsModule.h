#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define LIGHTSMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297410)

	inline static constexpr unsigned int LightsModule_TypeDefinitionIndex = 36948;

	class LightsModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + LIGHTSMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

