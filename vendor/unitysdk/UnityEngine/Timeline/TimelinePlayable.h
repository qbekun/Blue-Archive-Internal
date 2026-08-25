#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine::Animations { class AnimationPlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1AB850)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1AB890)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET UNITYSDK_OFFSET(0xA1AB980)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET UNITYSDK_OFFSET(0xA1AC090)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET UNITYSDK_OFFSET(0xA1AC9B0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1ACC50)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1AC440)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA1ACE20)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET UNITYSDK_OFFSET(0xA1ACDC0)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1AD600)
#define UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA1AD870)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelinePlayable_TypeDefinitionIndex = 36330;

	class TimelinePlayable : public Il2CppObject
	{
	public:
		Il2CppObject* m_IntervalTree; // 0x10
		Il2CppObject* m_ActiveClips; // 0x18
		Il2CppObject* m_CurrentListOfActiveClips; // 0x20
		::System::Int32 m_ActiveBit; // 0x28
		Il2CppObject* m_EvaluateCallbacks; // 0x30
		Il2CppObject* m_PlayableCache; // 0x38
		::System::Boolean muteAudioScrubbing; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void EvaluateWeightsForAnimationPlayableOutput(::UnityEngine::Timeline::TrackAsset* arg, ::UnityEngine::Animations::AnimationPlayableOutput* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Animations::AnimationPlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATEWEIGHTSFORANIMATIONPLAYABLEOUTPUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateTrackOutput(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Timeline::TrackAsset* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Playables::Playable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKOUTPUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CompileTrackList(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, Il2CppObject* arg, ::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, Il2CppObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILETRACKLIST_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Compile(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, Il2CppObject* arg, ::UnityEngine::GameObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, Il2CppObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_COMPILE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreateTrackPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Timeline::TrackAsset* arg, ::UnityEngine::GameObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATETRACKPLAYABLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Evaluate(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_EVALUATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CacheTrack(::UnityEngine::Timeline::TrackAsset* arg, ::UnityEngine::Playables::Playable* arg, ::System::Int32 arg, ::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Playables::Playable*, ::System::Int32, ::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CACHETRACK_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::UnityEngine::GameObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_CREATE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

	};
}

