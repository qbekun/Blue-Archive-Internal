#pragma once
#include "../../unitysdk.h"

class CharacterVisual;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE13F00)
#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE13F20)
#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE13F80)
#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE13FD0)
#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE14050)
#define CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE14290)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int ParticleController_TypeDefinitionIndex = 10314;

	class ParticleController : public Il2CppObject
	{
	public:
		CharacterVisual* Actor; // 0x10
		::System::UInt32 RandomSeed; // 0x18
		::UnityEngine::Transform* parent; // 0x20
		::UnityEngine::ParticleSystem* Source; // 0x28
		::UnityEngine::ParticleSystem* particle; // 0x30
		Il2CppObject* clips; // 0x38
		::Il2CppArray<::System::Object*>* ParticlesForTarget; // 0x40
		::System::Boolean TargetEffect; // 0x48
		::UnityEngine::ParticleSystem* playParticle; // 0x50

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2, ::System::Object* arg3)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_PROCESSFRAME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONBEHAVIOURPAUSE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_PARTICLECONTROLLER_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

	};
}

