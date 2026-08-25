#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class PaniniProjectionBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_PANINIPROJECTIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE01C70)
#define MXTIMELINE_PANINIPROJECTIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE01C80)

namespace MXTimeline
{
	inline static constexpr unsigned int PaniniProjectionBehaviourPlayableAsset_TypeDefinitionIndex = 10215;

	class PaniniProjectionBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::PaniniProjectionBehaviour* behaviour; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_PANINIPROJECTIONBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

