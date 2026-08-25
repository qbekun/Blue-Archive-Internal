#pragma once
#include "unitysdk.h"

class BossAppearState;
namespace UnityEngine { class AnimationClip; }

#define WORLDRAIDZONEBALLOONANIMATIONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0B9A0)

	inline static constexpr unsigned int WorldRaidZoneBalloonAnimationState_TypeDefinitionIndex = 8809;

	class WorldRaidZoneBalloonAnimationState : public Il2CppObject
	{
	public:
		BossAppearState* type; // 0x10
		::UnityEngine::AnimationClip* clip; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDZONEBALLOONANIMATIONSTATE_.CTOR_OFFSET))(nullptr);
		}

	};

