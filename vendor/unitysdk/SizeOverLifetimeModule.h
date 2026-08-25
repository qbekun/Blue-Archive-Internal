#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define SIZEOVERLIFETIMEMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297230)

	inline static constexpr unsigned int SizeOverLifetimeModule_TypeDefinitionIndex = 36942;

	class SizeOverLifetimeModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + SIZEOVERLIFETIMEMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

