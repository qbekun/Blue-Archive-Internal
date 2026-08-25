#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA1A9850)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1A9900)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA1A9990)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A9A10)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0xA1A9A20)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA1A9A30)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A0E60)
#define UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A9DA0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PrefabControlPlayable_TypeDefinitionIndex = 36311;

	class PrefabControlPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* m_Instance; // 0x10

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* get_prefabInstance()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_GET_PREFABINSTANCE_OFFSET))(nullptr);
		}

		::System::Void SetHideFlagsRecursive(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_SETHIDEFLAGSRECURSIVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::GameObject* Initialize(::UnityEngine::GameObject* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PREFABCONTROLPLAYABLE_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

