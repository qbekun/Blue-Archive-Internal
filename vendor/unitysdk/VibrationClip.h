#pragma once
#include "unitysdk.h"

class MXVibrationType;
namespace UnityEngine::Timeline { class ClipCaps; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define VIBRATIONCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x20531D0)
#define VIBRATIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x20531E0)
#define VIBRATIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20531F0)

	inline static constexpr unsigned int VibrationClip_TypeDefinitionIndex = 3330;

	class VibrationClip : public Il2CppObject
	{
	public:
		MXVibrationType* VibrationType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIBRATIONCLIP_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + VIBRATIONCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + VIBRATIONCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

