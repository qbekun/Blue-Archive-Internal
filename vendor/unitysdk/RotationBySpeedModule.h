#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define ROTATIONBYSPEEDMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2972C0)

	inline static constexpr unsigned int RotationBySpeedModule_TypeDefinitionIndex = 36945;

	class RotationBySpeedModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + ROTATIONBYSPEEDMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

