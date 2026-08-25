#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Animations { class AnimationMixerPlayable; }

#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEE7470)
#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE78C0)
#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0xEE78D0)
#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE7A10)
#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEE7A70)

namespace MXField::AnimationControl
{
	inline static constexpr unsigned int FieldEntityAnimationPlayer_TypeDefinitionIndex = 11028;

	class FieldEntityAnimationPlayer : public Il2CppObject
	{
	public:
		::UnityEngine::RuntimeAnimatorController* controller; // 0x18
		::System::Single weight; // 0x20
		::UnityEngine::Playables::PlayableGraph* playableGraph; // 0x28
		::UnityEngine::Animations::AnimationMixerPlayable* mixerPlayable; // 0x38
		::System::String* motionName; // 0x48
		::System::Single elapsedTime; // 0x50
		::System::Single duration; // 0x54

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_INITIALIZE_OFFSET))(str, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONPLAYER_ONDISABLE_OFFSET))(nullptr);
		}

	};
}

