#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }

#define MX_MINIGAMESHOOTING_PROJECTILEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1466C70)
#define MX_MINIGAMESHOOTING_PROJECTILEBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1468400)
#define MX_MINIGAMESHOOTING_PROJECTILEBASE_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1468450)
#define MX_MINIGAMESHOOTING_PROJECTILEBASE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1468460)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int ProjectileBase_TypeDefinitionIndex = 15099;

	class ProjectileBase : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* _ParticleSystem_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_ParticleSystem(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEBASE_SET_PARTICLESYSTEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ParticleSystem* get_ParticleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_PROJECTILEBASE_GET_PARTICLESYSTEM_OFFSET))(nullptr);
		}

	};
}

