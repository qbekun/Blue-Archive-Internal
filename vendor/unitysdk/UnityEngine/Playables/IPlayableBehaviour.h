#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int IPlayableBehaviour_TypeDefinitionIndex = 31602;

	class IPlayableBehaviour : public Il2CppObject
	{
	public:
		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_IPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

