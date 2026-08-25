#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define TRAILMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297440)

	inline static constexpr unsigned int TrailModule_TypeDefinitionIndex = 36949;

	class TrailModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + TRAILMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

