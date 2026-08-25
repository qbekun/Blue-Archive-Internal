#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define SIZEBYSPEEDMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297260)

	inline static constexpr unsigned int SizeBySpeedModule_TypeDefinitionIndex = 36943;

	class SizeBySpeedModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + SIZEBYSPEEDMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

