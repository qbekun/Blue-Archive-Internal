#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET UNITYSDK_OFFSET(0xA1A56B0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A5710)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_DISABLEAT_OFFSET UNITYSDK_OFFSET(0xA1A5790)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0xA1A59A0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1A59D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0xA1A59E0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0xA1A59F0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xA1A5DE0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA18F9D0)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET UNITYSDK_OFFSET(0xA1A5D80)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA1A5F90)
#define UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1A5FB0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int RuntimeClip_TypeDefinitionIndex = 36286;

	class RuntimeClip : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::UnityEngine::Playables::Playable* m_Playable; // 0x20
		::UnityEngine::Playables::Playable* m_ParentMixer; // 0x30

		::System::Void SetTime(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETTIME_OFFSET))(arg, nullptr);
		}

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DisableAt(::System::Double arg, ::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_DISABLEAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double get_start()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_START_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* get_playable()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* get_mixer()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_MIXER_OFFSET))(nullptr);
		}

		::System::Void EvaluateAt(::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_EVALUATEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Timeline::TimelineClip* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetDuration(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_SETDURATION_OFFSET))(arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* get_clip()
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_RUNTIMECLIP_GET_CLIP_OFFSET))(nullptr);
		}

	};
}

