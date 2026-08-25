#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class ColorAdjustmentsBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xDFF860)
#define MXTIMELINE_COLORADJUSTMENTSBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xDFF9B0)

namespace MXTimeline
{
	inline static constexpr unsigned int ColorAdjustmentsBehaviourPlayableAsset_TypeDefinitionIndex = 10208;

	class ColorAdjustmentsBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::ColorAdjustmentsBehaviour* behaviour; // 0x30

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_COLORADJUSTMENTSBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

