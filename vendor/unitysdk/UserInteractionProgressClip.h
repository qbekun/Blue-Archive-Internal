#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define USERINTERACTIONPROGRESSCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2052AA0)
#define USERINTERACTIONPROGRESSCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2052B30)
#define USERINTERACTIONPROGRESSCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x2052C30)

	inline static constexpr unsigned int UserInteractionProgressClip_TypeDefinitionIndex = 3327;

	class UserInteractionProgressClip : public Il2CppObject
	{
	public:
		::System::Int32 interactionClipCount; // 0x18
		Il2CppObject* EffectCurves; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONPROGRESSCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONPROGRESSCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONPROGRESSCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};

