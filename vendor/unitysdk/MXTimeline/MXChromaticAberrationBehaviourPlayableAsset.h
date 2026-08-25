#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXChromaticAberrationBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFC840)
#define MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFC990)

namespace MXTimeline
{
	inline static constexpr unsigned int MXChromaticAberrationBehaviourPlayableAsset_TypeDefinitionIndex = 10196;

	class MXChromaticAberrationBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXChromaticAberrationBehaviour* behaviour; // 0x30

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXCHROMATICABERRATIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

