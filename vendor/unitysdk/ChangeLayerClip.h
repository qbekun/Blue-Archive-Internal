#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CHANGELAYERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x20EC3F0)
#define CHANGELAYERCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x20EC400)
#define CHANGELAYERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20EC410)

	inline static constexpr unsigned int ChangeLayerClip_TypeDefinitionIndex = 3807;

	class ChangeLayerClip : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGELAYERCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

