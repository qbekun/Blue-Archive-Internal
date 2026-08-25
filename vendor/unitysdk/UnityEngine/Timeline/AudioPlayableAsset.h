#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AudioClip; }
namespace UnityEngine::Timeline { class AudioClipProperties; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_BUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0xA19EE20)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA19EE30)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA19EE40)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA19EEE0)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA19F040)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19F0F0)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_BUFFERINGTIME_OFFSET UNITYSDK_OFFSET(0xA19F170)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xA19F180)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA19F190)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_LOOP_OFFSET UNITYSDK_OFFSET(0xA19F1B0)
#define UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_LOOP_OFFSET UNITYSDK_OFFSET(0xA19F1C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int AudioPlayableAsset_TypeDefinitionIndex = 36272;

	class AudioPlayableAsset : public Il2CppObject
	{
	public:
		::UnityEngine::AudioClip* m_Clip; // 0x18
		::System::Boolean m_Loop; // 0x20
		::System::Single m_bufferingTime; // 0x24
		::UnityEngine::Timeline::AudioClipProperties* m_ClipProperties; // 0x28

		::System::Void set_bufferingTime(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_BUFFERINGTIME_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioClip* get_clip()
		{
			return (return (::UnityEngine::AudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_bufferingTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_BUFFERINGTIME_OFFSET))(nullptr);
		}

		::System::Void set_clip(::UnityEngine::AudioClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioClip*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_CLIP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_loop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_AUDIOPLAYABLEASSET_GET_LOOP_OFFSET))(nullptr);
		}

	};
}

