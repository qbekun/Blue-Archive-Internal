#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xA1A9320)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A9330)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xA1A9350)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA1A9360)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xA1A9510)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0xA1A9830)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0xA1A93E0)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1A3000)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0xA1A9840)
#define UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0xA1A9750)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ParticleControlPlayable_TypeDefinitionIndex = 36310;

	class ParticleControlPlayable : public Il2CppObject
	{
	public:
		::System::Single m_LastPlayableTime; // 0x10
		::System::Single m_LastParticleTime; // 0x14
		::System::UInt32 m_RandomSeed; // 0x18
		::UnityEngine::ParticleSystem* _particleSystem_k__BackingField; // 0x20

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPAUSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_ONBEHAVIOURPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Initialize(::UnityEngine::ParticleSystem* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::ParticleSystem* get_particleSystem()
		{
			return (return (::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_GET_PARTICLESYSTEM_OFFSET))(nullptr);
		}

		::System::Void SetRandomSeed(::UnityEngine::ParticleSystem* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SETRANDOMSEED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::ParticleSystem* arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_particleSystem(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SET_PARTICLESYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void Simulate(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PARTICLECONTROLPLAYABLE_SIMULATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

