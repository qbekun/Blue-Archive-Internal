#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ILayerable_TypeDefinitionIndex = 36302;

	class ILayerable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreateLayerMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_ILAYERABLE_CREATELAYERMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

