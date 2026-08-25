#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define INHERITVELOCITYMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297140)

	inline static constexpr unsigned int InheritVelocityModule_TypeDefinitionIndex = 36937;

	class InheritVelocityModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + INHERITVELOCITYMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

