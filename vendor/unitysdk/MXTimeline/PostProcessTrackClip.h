#pragma once
#include "../unitysdk.h"

namespace MXTimeline { class PostProcessTrackBehaviour; }
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define MXTIMELINE_POSTPROCESSTRACKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE03EA0)
#define MXTIMELINE_POSTPROCESSTRACKCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE00AE0)
#define MXTIMELINE_POSTPROCESSTRACKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE03EB0)

namespace MXTimeline
{
	inline static constexpr unsigned int PostProcessTrackClip_TypeDefinitionIndex = 10245;

	class PostProcessTrackClip : public Il2CppObject
	{
	public:
		::MXTimeline::PostProcessTrackBehaviour* template; // 0x18
		Il2CppObject* volume; // 0x20

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTIMELINE_POSTPROCESSTRACKCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

