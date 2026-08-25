#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class ParticleSystem; }

#define MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xE1F180)
#define MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1F710)
#define MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xE1EFC0)
#define MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE1F720)

namespace Mx::Timeline
{
	inline static constexpr unsigned int DelayableParticleControlPlayable_TypeDefinitionIndex = 10357;

	class DelayableParticleControlPlayable : public Il2CppObject
	{
	public:
		::System::Single kUnsetTime; // 0x0
		::System::Single m_LastTime; // 0x28
		::System::Single m_SystemTime; // 0x2C
		::System::Single introDelay; // 0x30

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_PREPAREFRAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::ParticleSystem* arg2, ::System::UInt32 arg3, ::System::Single arg4)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_CREATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize(::UnityEngine::ParticleSystem* arg, ::System::UInt32 arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_DELAYABLEPARTICLECONTROLPLAYABLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

