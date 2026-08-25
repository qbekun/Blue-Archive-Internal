#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PLAYABLES_IPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int IPlayableAsset_TypeDefinitionIndex = 31606;

	class IPlayableAsset : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEASSET_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

