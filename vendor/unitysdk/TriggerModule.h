#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define TRIGGERMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297380)

	inline static constexpr unsigned int TriggerModule_TypeDefinitionIndex = 36916;

	class TriggerModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + TRIGGERMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

