#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define COLLISIONMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA297350)

	inline static constexpr unsigned int CollisionModule_TypeDefinitionIndex = 36915;

	class CollisionModule : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void .ctor(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + COLLISIONMODULE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

