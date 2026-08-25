#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_TIMELINE_TIMELINEPARTICLECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE13C80)
#define CINEMACHINE_TIMELINE_TIMELINEPARTICLECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE13EF0)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int TimeLineParticleController_TypeDefinitionIndex = 10313;

	class TimeLineParticleController : public Il2CppObject
	{
	public:
		::System::UInt32 RandomSeed; // 0x18
		Il2CppObject* parent; // 0x20
		::UnityEngine::ParticleSystem* particle; // 0x30
		::System::Boolean TargetEffect; // 0x38
		::Il2CppArray<::System::Object*>* ParticlesForTarget; // 0x40

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_TIMELINEPARTICLECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_TIMELINEPARTICLECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

