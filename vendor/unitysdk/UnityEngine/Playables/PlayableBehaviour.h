#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2693D0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xA2693E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xA2693F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xA269400)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA269410)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA269420)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA269430)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA269440)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA269450)
#define UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET UNITYSDK_OFFSET(0xA269460)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBehaviour_TypeDefinitionIndex = 31608;

	class PlayableBehaviour : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(arg, nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBEHAVIOUR_CLONE_OFFSET))(nullptr);
		}

	};
}

