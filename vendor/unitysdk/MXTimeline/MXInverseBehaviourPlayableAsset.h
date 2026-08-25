#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXInverseBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXINVERSEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFD590)
#define MXTIMELINE_MXINVERSEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFD5A0)

namespace MXTimeline
{
	inline static constexpr unsigned int MXInverseBehaviourPlayableAsset_TypeDefinitionIndex = 10200;

	class MXInverseBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXInverseBehaviour* behaviour; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXINVERSEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

