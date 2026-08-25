#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXVignetteBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXVIGNETTEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFF480)
#define MXTIMELINE_MXVIGNETTEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFF5D0)

namespace MXTimeline
{
	inline static constexpr unsigned int MXVignetteBehaviourPlayableAsset_TypeDefinitionIndex = 10206;

	class MXVignetteBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXVignetteBehaviour* behaviour; // 0x30

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXVIGNETTEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

