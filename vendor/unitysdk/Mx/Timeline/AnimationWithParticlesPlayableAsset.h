#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TrackAsset; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE1E210)
#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE1E2C0)
#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xE1E370)
#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE1E3C0)
#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE1E690)
#define MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_COLLECTPARTICLESYSTEMROOTS_OFFSET UNITYSDK_OFFSET(0xE1EE80)

namespace Mx::Timeline
{
	inline static constexpr unsigned int AnimationWithParticlesPlayableAsset_TypeDefinitionIndex = 10355;

	class AnimationWithParticlesPlayableAsset : public ::UnityEngine::GUIContent
	{
	public:
		::System::Int32 k_MaxRandInt; // 0x0
		::System::UInt32 particleRandomSeed; // 0x60
		Il2CppObject* particleActivationInfos; // 0x68
		::UnityEngine::Timeline::TrackAsset* Track; // 0x70
		::System::Double StartTime; // 0x78
		::System::Double EndTime; // 0x80
		::UnityEngine::Animator* animator; // 0x88

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void ConnectMixerAndPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg2, ::UnityEngine::Playables::Playable* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CollectParticleSystemRoots(::UnityEngine::Transform* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ANIMATIONWITHPARTICLESPLAYABLEASSET_COLLECTPARTICLESYSTEMROOTS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

