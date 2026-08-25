#pragma once
#include "../../../unitysdk.h"

namespace Spine::Unity::Playables { class SpinePlayableHandleBase; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace Spine { class Skeleton; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET UNITYSDK_OFFSET(0x95E5EF0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x95E5F50)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E6030)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET UNITYSDK_OFFSET(0x95E6040)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x95E60F0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x95E6540)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET UNITYSDK_OFFSET(0x95E6050)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineSkeletonFlipMixerBehaviour_TypeDefinitionIndex = 37941;

	class SpineSkeletonFlipMixerBehaviour : public Il2CppObject
	{
	public:
		::System::Single originalScaleX; // 0x10
		::System::Single originalScaleY; // 0x14
		::System::Single baseScaleX; // 0x18
		::System::Single baseScaleY; // 0x1C
		::Spine::Unity::Playables::SpinePlayableHandleBase* playableHandle; // 0x20
		::System::Boolean m_FirstFrameHappened; // 0x28
		::UnityEngine::Playables::PlayableDirector* director; // 0x30

		::System::Void SetSkeletonScaleFromFlip(::Spine::Skeleton* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDirectorStopped(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET))(nullptr);
		}

	};
}

