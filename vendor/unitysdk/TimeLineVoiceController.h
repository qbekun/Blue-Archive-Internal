#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define TIMELINEVOICECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2050AD0)
#define TIMELINEVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2050C10)
#define TIMELINEVOICECONTROLLER_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x2050C20)

	inline static constexpr unsigned int TimeLineVoiceController_TypeDefinitionIndex = 3317;

	class TimeLineVoiceController : public Il2CppObject
	{
	public:
		::System::String* voiceId; // 0x18
		::System::Single volume; // 0x20

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEVOICECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEVOICECONTROLLER_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};

