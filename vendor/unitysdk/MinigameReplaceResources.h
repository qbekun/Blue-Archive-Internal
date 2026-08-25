#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
class UIMinigameRhythmBattleHpBar;

#define MINIGAMEREPLACERESOURCES_.CTOR_OFFSET UNITYSDK_OFFSET(0xD16940)

	inline static constexpr unsigned int MinigameReplaceResources_TypeDefinitionIndex = 665;

	class MinigameReplaceResources : public Il2CppObject
	{
	public:
		::UnityEngine::ParticleSystem* SweeperParticleMiss; // 0x18
		::UnityEngine::ParticleSystem* SweeperParticleLeft; // 0x20
		::UnityEngine::ParticleSystem* SweeperParticleRight; // 0x28
		::UnityEngine::ParticleSystem* SweeperParticleBoth; // 0x30
		::UnityEngine::ParticleSystem* SweeperParticleFever; // 0x38
		UIMinigameRhythmBattleHpBar* HpBar; // 0x40
		::UnityEngine::ParticleSystem* FeverScreenEffect; // 0x48
		::UnityEngine::ParticleSystem* FeverScreenEffectFadeOut; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEREPLACERESOURCES_.CTOR_OFFSET))(nullptr);
		}

	};

