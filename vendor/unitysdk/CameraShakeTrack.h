#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CAMERASHAKETRACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2049390)
#define CAMERASHAKETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20493E0)

	inline static constexpr unsigned int CameraShakeTrack_TypeDefinitionIndex = 3275;

	class CameraShakeTrack : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKETRACK_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2, ::UnityEngine::Timeline::TimelineClip* arg3)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKETRACK_CREATEPLAYABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

