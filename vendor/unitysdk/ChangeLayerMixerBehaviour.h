#pragma once
#include "unitysdk.h"

class ChangeLayerPathTrack;
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine { class Transform; }

#define CHANGELAYERMIXERBEHAVIOUR_APPLY_OFFSET UNITYSDK_OFFSET(0x20EC480)
#define CHANGELAYERMIXERBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x20ECBE0)
#define CHANGELAYERMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x20ECCB0)
#define CHANGELAYERMIXERBEHAVIOUR_RESTORE_OFFSET UNITYSDK_OFFSET(0x20ECCE0)
#define CHANGELAYERMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x20ECF30)
#define CHANGELAYERMIXERBEHAVIOUR_CACHEANDSET_OFFSET UNITYSDK_OFFSET(0x20ECAD0)

	inline static constexpr unsigned int ChangeLayerMixerBehaviour_TypeDefinitionIndex = 3808;

	class ChangeLayerMixerBehaviour : public Il2CppObject
	{
	public:
		ChangeLayerPathTrack* track; // 0x10
		::UnityEngine::Playables::PlayableDirector* _director; // 0x18
		::System::Int32 _targetLayer; // 0x20
		Il2CppObject* _originalLayers; // 0x28
		Il2CppObject* _resolvedTargets; // 0x30

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_APPLY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(arg, nullptr);
		}

		::System::Void Restore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_RESTORE_OFFSET))(nullptr);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET))(arg, nullptr);
		}

		::System::Void CacheAndSet(::UnityEngine::Transform* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERMIXERBEHAVIOUR_CACHEANDSET_OFFSET))(arg, arg2, nullptr);
		}

	};

