#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA1A8240)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A2EB0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1A82C0)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA1A8350)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A8400)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA1A8410)
#define UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA1A84A0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationControlPlayable_TypeDefinitionIndex = 36305;

	class ActivationControlPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		PostPlaybackState* postPlayback; // 0x18
		InitialState* m_InitialState; // 0x1C

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, PostPlaybackState* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, PostPlaybackState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

