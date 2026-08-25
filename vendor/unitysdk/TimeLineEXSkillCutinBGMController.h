#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEEXSKILLCUTINBGMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C410)
#define TIMELINEEXSKILLCUTINBGMCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204C420)

	inline static constexpr unsigned int TimeLineEXSkillCutinBGMController_TypeDefinitionIndex = 3297;

	class TimeLineEXSkillCutinBGMController : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* bgmX1; // 0x18
		::UnityEngine::AudioClip* bgmX2; // 0x20
		::UnityEngine::AudioClip* bgmX3; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINBGMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINBGMCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

