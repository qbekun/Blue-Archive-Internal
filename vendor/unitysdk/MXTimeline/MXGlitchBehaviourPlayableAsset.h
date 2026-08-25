#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXGlitchBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXGLITCHBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFD1F0)
#define MXTIMELINE_MXGLITCHBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFD200)

namespace MXTimeline
{
	inline static constexpr unsigned int MXGlitchBehaviourPlayableAsset_TypeDefinitionIndex = 10198;

	class MXGlitchBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXGlitchBehaviour* behaviour; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXGLITCHBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

