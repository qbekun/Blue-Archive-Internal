#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEUILOBBYCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2050850)
#define TIMELINEUILOBBYCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2050860)

	inline static constexpr unsigned int TimeLineUILobbyController_TypeDefinitionIndex = 3315;

	class TimeLineUILobbyController : public Il2CppObject
	{
	public:
		::System::Boolean IsShowLobbyIcons; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEUILOBBYCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEUILOBBYCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

