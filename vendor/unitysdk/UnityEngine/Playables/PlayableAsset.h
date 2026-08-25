#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableAsset; }

#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA2691B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0xA269200)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA269250)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET UNITYSDK_OFFSET(0xA269390)
#define UNITYENGINE_PLAYABLES_PLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2693C0)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableAsset_TypeDefinitionIndex = 31607;

	class PlayableAsset : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_DURATION_OFFSET))(nullptr);
		}

		Il2CppObject* get_outputs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_GET_OUTPUTS_OFFSET))(nullptr);
		}

		::System::Void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* arg, ::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_CREATEPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableAsset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_INTERNAL_GETPLAYABLEASSETDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

