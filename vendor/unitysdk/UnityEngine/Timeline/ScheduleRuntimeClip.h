#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA19FD50)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A6180)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET UNITYSDK_OFFSET(0xA1A6230)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_DISABLEAT_OFFSET UNITYSDK_OFFSET(0xA1A6580)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA1A65A0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xA1A65F0)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0xA1A6600)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_PLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1A6740)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET UNITYSDK_OFFSET(0xA1A6750)
#define UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_MIXER_OFFSET UNITYSDK_OFFSET(0xA1A67D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ScheduleRuntimeClip_TypeDefinitionIndex = 36289;

	class ScheduleRuntimeClip : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::TimelineClip* m_Clip; // 0x18
		::UnityEngine::Playables::Playable* m_Playable; // 0x20
		::UnityEngine::Playables::Playable* m_ParentMixer; // 0x30
		::System::Double m_StartDelay; // 0x40
		::System::Double m_FinishTail; // 0x48
		::System::Boolean m_Started; // 0x50

		::System::Void .ctor(::UnityEngine::Timeline::TimelineClip* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::Playable* arg, ::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Create(::UnityEngine::Timeline::TimelineClip* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::Playable* arg, ::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EvaluateAt(::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_EVALUATEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DisableAt(::System::Double arg, ::System::Double arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_DISABLEAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::TimelineClip* get_clip()
		{
			return (return (::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_CLIP_OFFSET))(nullptr);
		}

		::System::Void set_enable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_SET_ENABLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::Playable* get_playable()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_PLAYABLE_OFFSET))(nullptr);
		}

		::System::Double get_start()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_START_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* get_mixer()
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SCHEDULERUNTIMECLIP_GET_MIXER_OFFSET))(nullptr);
		}

	};
}

