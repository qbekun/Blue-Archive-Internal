#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA1894C0)
#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1894D0)
#define UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA189540)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ActivationPlayableAsset_TypeDefinitionIndex = 36239;

	class ActivationPlayableAsset : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ACTIVATIONPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

