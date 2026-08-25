#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class DepthOfFieldBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_DEPTHOFFIELDBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00AD0)
#define MXTIMELINE_DEPTHOFFIELDBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE00B90)

namespace MXTimeline
{
	inline static constexpr unsigned int DepthOfFieldBehaviourPlayableAsset_TypeDefinitionIndex = 10211;

	class DepthOfFieldBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::DepthOfFieldBehaviour* behaviour; // 0x30
		Il2CppObject* focusTarget; // 0x38
		::System::String* focusName; // 0x48
		::System::Int32 findLayer; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_DEPTHOFFIELDBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

