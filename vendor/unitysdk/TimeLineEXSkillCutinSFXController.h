#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define TIMELINEEXSKILLCUTINSFXCONTROLLER__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0x204C9C0)
#define TIMELINEEXSKILLCUTINSFXCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C9E0)
#define TIMELINEEXSKILLCUTINSFXCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204C9F0)
#define TIMELINEEXSKILLCUTINSFXCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x204CB90)

	inline static constexpr unsigned int TimeLineEXSkillCutinSFXController_TypeDefinitionIndex = 3299;

	class TimeLineEXSkillCutinSFXController : public Il2CppObject
	{
	public:
		::System::Boolean AfterCBT; // 0x18
		::MX::Audio::AudioSourceData* AudioData; // 0x20
		::UnityEngine::Coroutine* playCoroutine; // 0x28

		::System::Void _Play_b__4_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINSFXCONTROLLER__PLAY_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINSFXCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINSFXCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Play(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLCUTINSFXCONTROLLER_PLAY_OFFSET))(arg, nullptr);
		}

	};

