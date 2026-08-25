#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXThresholdBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXTHRESHOLDBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFEB90)
#define MXTIMELINE_MXTHRESHOLDBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFEBA0)

namespace MXTimeline
{
	inline static constexpr unsigned int MXThresholdBehaviourPlayableAsset_TypeDefinitionIndex = 10204;

	class MXThresholdBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXThresholdBehaviour* behaviour; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXTHRESHOLDBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

