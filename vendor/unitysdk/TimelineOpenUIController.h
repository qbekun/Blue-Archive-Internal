#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEOPENUICONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204DA50)
#define TIMELINEOPENUICONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204DB50)

	inline static constexpr unsigned int TimelineOpenUIController_TypeDefinitionIndex = 3305;

	class TimelineOpenUIController : public Il2CppObject
	{
	public:
		::System::String* UIName; // 0x18

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEOPENUICONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEOPENUICONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

