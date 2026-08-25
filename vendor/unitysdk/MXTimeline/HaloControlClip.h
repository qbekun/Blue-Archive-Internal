#pragma once
#include "../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define MXTIMELINE_HALOCONTROLCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE021F0)
#define MXTIMELINE_HALOCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE02200)
#define MXTIMELINE_HALOCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE02310)

namespace MXTimeline
{
	inline static constexpr unsigned int HaloControlClip_TypeDefinitionIndex = 10218;

	class HaloControlClip : public Il2CppObject
	{
	public:
		::System::Single AddFollowPositionPower; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_HALOCONTROLCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};
}

