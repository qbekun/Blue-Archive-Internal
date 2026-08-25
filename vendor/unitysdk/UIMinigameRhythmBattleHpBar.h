#pragma once
#include "unitysdk.h"

class UISlider;
namespace UnityEngine { class ParticleSystem; }

#define UIMINIGAMERHYTHMBATTLEHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xD1B680)

	inline static constexpr unsigned int UIMinigameRhythmBattleHpBar_TypeDefinitionIndex = 685;

	class UIMinigameRhythmBattleHpBar : public Il2CppObject
	{
	public:
		UISlider* HpSlider; // 0x18
		::UnityEngine::ParticleSystem* HpToScoreBonusEffect; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMINIGAMERHYTHMBATTLEHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

