#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class CustomTrackBehaviour; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define MXTIMELINE_CUSTOMTRACKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE03950)
#define MXTIMELINE_CUSTOMTRACKCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE029E0)
#define MXTIMELINE_CUSTOMTRACKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE03A10)

namespace MXTimeline
{
	inline static constexpr unsigned int CustomTrackClip_TypeDefinitionIndex = 10241;

	class CustomTrackClip : public Il2CppObject
	{
	public:
		::MXTimeline::CustomTrackBehaviour* template; // 0x18

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_CUSTOMTRACKCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};
}

