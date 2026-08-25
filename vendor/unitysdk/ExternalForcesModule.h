#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define EXTERNALFORCESMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2972F0)

	inline static constexpr unsigned int ExternalForcesModule_TypeDefinitionIndex = 36946;

	class ExternalForcesModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + EXTERNALFORCESMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

