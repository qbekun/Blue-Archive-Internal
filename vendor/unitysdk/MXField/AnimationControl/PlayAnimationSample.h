#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xEE7E40)
#define MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEE7F70)
#define MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_START_OFFSET UNITYSDK_OFFSET(0xEE7F80)
#define MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_PLAY_OFFSET UNITYSDK_OFFSET(0xEE7E80)
#define MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE7FC0)

namespace MXField::AnimationControl
{
	inline static constexpr unsigned int PlayAnimationSample_TypeDefinitionIndex = 11029;

	class PlayAnimationSample : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* clip; // 0x18
		::UnityEngine::Playables::PlayableGraph* playableGraph; // 0x20
		::System::Boolean playToggle; // 0x30

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_START_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_PLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_PLAYANIMATIONSAMPLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

