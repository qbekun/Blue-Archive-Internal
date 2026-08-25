#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0xA1A03E0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0xA1A03F0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0xA1A0400)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0xA1A0410)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA1A0420)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA1A0450)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA1A0460)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1A0480)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTPLAYABLESTOMIXER_OFFSET UNITYSDK_OFFSET(0xA1A2BA0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEACTIVATIONPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1A1C50)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0xA1A2290)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTDIRECTOR_OFFSET UNITYSDK_OFFSET(0xA1A1DA0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTCONTROLABLESCRIPTS_OFFSET UNITYSDK_OFFSET(0xA1A2750)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA1A2E00)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLABLESCRIPTS_OFFSET UNITYSDK_OFFSET(0xA1A26D0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_UPDATEDURATIONANDLOOPFLAG_OFFSET UNITYSDK_OFFSET(0xA1A10F0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLLABLEPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0xA1A0FA0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLLABLEPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0xA1A3430)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CACHESUBEMITTERS_OFFSET UNITYSDK_OFFSET(0xA1A3600)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA1A3740)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWPARTICLES_OFFSET UNITYSDK_OFFSET(0xA1A3AF0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWACTIVATION_OFFSET UNITYSDK_OFFSET(0xA1A3F60)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWTIMECONTROL_OFFSET UNITYSDK_OFFSET(0xA1A42C0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWDIRECTORS_OFFSET UNITYSDK_OFFSET(0xA1A46C0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1A4A90)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1A4B10)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlPlayableAsset_TypeDefinitionIndex = 36278;

	class ControlPlayableAsset : public Il2CppObject
	{
	public:
		::System::Int32 k_MaxRandInt; // 0x0
		Il2CppObject* k_EmptyDirectorsList; // 0x0
		Il2CppObject* k_EmptyParticlesList; // 0x8
		Il2CppObject* s_SubEmitterCollector; // 0x10
		Il2CppObject* sourceGameObject; // 0x18
		::UnityEngine::GameObject* prefabGameObject; // 0x28
		::System::Boolean updateParticle; // 0x30
		::System::UInt32 particleRandomSeed; // 0x34
		::System::Boolean updateDirector; // 0x38
		::System::Boolean updateITimeControl; // 0x39
		::System::Boolean searchHierarchy; // 0x3A
		::System::Boolean active; // 0x3B
		PostPlaybackState* postPlayback; // 0x3C
		PauseAction* directorOnClipEnd; // 0x40
		::UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset; // 0x48
		::System::Double m_Duration; // 0x50
		::System::Boolean m_SupportLoop; // 0x58
		Il2CppObject* s_ProcessedDirectors; // 0x18
		Il2CppObject* s_CreatedPrefabs; // 0x20
		::System::Boolean _controllingDirectors_k__BackingField; // 0x59
		::System::Boolean _controllingParticles_k__BackingField; // 0x5A

		::System::Boolean get_controllingDirectors()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET))(nullptr);
		}

		::System::Void set_controllingDirectors(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_controllingParticles()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET))(nullptr);
		}

		::System::Void set_controllingParticles(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_ONENABLE_OFFSET))(nullptr);
		}

		::System::Double get_duration()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_DURATION_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* ConnectPlayablesToMixer(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTPLAYABLESTOMIXER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateActivationPlayable(::UnityEngine::GameObject* arg, ::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEACTIVATIONPLAYABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SearchHierarchyAndConnectParticleSystem(Il2CppObject* arg, ::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTPARTICLESYSTEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SearchHierarchyAndConnectDirector(Il2CppObject* arg, ::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTDIRECTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SearchHierarchyAndConnectControlableScripts(Il2CppObject* arg, ::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTCONTROLABLESCRIPTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConnectMixerAndPlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::Playable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::Playable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetComponent(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCOMPONENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetControlableScripts(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLABLESCRIPTS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDurationAndLoopFlag(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_UPDATEDURATIONANDLOOPFLAG_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetControllableParticleSystems(::UnityEngine::GameObject* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLLABLEPARTICLESYSTEMS_OFFSET))(arg, nullptr);
		}

		::System::Void GetControllableParticleSystems(::UnityEngine::Transform* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLLABLEPARTICLESYSTEMS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CacheSubEmitters(::UnityEngine::ParticleSystem* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CACHESUBEMITTERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Timeline::IPropertyCollector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreviewParticles(::UnityEngine::Timeline::IPropertyCollector* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::IPropertyCollector*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWPARTICLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreviewActivation(::UnityEngine::Timeline::IPropertyCollector* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::IPropertyCollector*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWACTIVATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreviewTimeControl(::UnityEngine::Timeline::IPropertyCollector* arg, ::UnityEngine::Playables::PlayableDirector* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::IPropertyCollector*, ::UnityEngine::Playables::PlayableDirector*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWTIMECONTROL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PreviewDirectors(::UnityEngine::Timeline::IPropertyCollector* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::IPropertyCollector*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_PREVIEWDIRECTORS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

