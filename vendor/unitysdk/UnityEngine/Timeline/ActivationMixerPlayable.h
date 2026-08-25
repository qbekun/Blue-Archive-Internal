#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA189180)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA189190)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA189240)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0xA189420)
#define UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA189430)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationMixerPlayable_TypeDefinitionIndex = 36238;

	class ActivationMixerPlayable : public Il2CppObject
	{
	public:
		PostPlaybackState* m_PostPlaybackState; // 0x10
		::System::Boolean m_BoundGameObjectInitialStateIsActive; // 0x14
		::UnityEngine::GameObject* m_BoundGameObject; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_postPlaybackState(PostPlaybackState* arg)
		{
			((::System::Void(*)(PostPlaybackState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_SET_POSTPLAYBACKSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONMIXERPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

