#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x281DC50)
#define CINEMACHINETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x281DD30)

	inline static constexpr unsigned int CinemachineTrack_TypeDefinitionIndex = 34190;

	class CinemachineTrack : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreateTrackMixer(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETRACK_CREATETRACKMIXER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETRACK_.CTOR_OFFSET))(nullptr);
		}

	};

