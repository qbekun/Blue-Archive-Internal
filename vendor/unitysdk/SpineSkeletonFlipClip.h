#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define SPINESKELETONFLIPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x95E3730)
#define SPINESKELETONFLIPCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E37F0)
#define SPINESKELETONFLIPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x95E3860)

	inline static constexpr unsigned int SpineSkeletonFlipClip_TypeDefinitionIndex = 37931;

	class SpineSkeletonFlipClip : public Il2CppObject
	{
	public:
		SpineSkeletonFlipBehaviour* template; // 0x18

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP_CREATEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return (return (::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};

