#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class MXShadowSettingOverrideBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE02860)
#define MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE02970)

namespace MXTimeline
{
	inline static constexpr unsigned int MXShadowSettingOverrideBehaviourPlayableAsset_TypeDefinitionIndex = 10220;

	class MXShadowSettingOverrideBehaviourPlayableAsset : public Il2CppObject
	{
	public:
		::MXTimeline::MXShadowSettingOverrideBehaviour* behaviour; // 0x20

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOURPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_MXSHADOWSETTINGOVERRIDEBEHAVIOURPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

