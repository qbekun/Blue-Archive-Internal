#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define AUDIOCONTROLLER_SET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0x204CF10)
#define AUDIOCONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204CF20)
#define AUDIOCONTROLLER_SET_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x204CF50)
#define AUDIOCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204CF60)
#define AUDIOCONTROLLER_GET_DIRECTOR_OFFSET UNITYSDK_OFFSET(0x204CF70)
#define AUDIOCONTROLLER_GET_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x204CF80)

	inline static constexpr unsigned int AudioController_TypeDefinitionIndex = 3298;

	class AudioController : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _Director_k__BackingField; // 0x10
		Il2CppObject* _PlayAction_k__BackingField; // 0x18

		::System::Void set_Director(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_SET_DIRECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_PlayAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_SET_PLAYACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_Director()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_GET_DIRECTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_PlayAction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONTROLLER_GET_PLAYACTION_OFFSET))(nullptr);
		}

	};

