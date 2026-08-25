#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXBlurEffectBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXBLUREFFECTBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFC2B0)
#define MXTIMELINE_MXBLUREFFECTBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFC400)

namespace MXTimeline
{
	inline static constexpr unsigned int MXBlurEffectBehaviourPlayableAsset_TypeDefinitionIndex = 10194;

	class MXBlurEffectBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXBlurEffectBehaviour* behaviour; // 0x30

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXBLUREFFECTBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

