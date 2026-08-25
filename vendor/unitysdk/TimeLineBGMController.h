#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINEBGMCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204BD50)
#define TIMELINEBGMCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204BD60)

	inline static constexpr unsigned int TimeLineBGMController_TypeDefinitionIndex = 3293;

	class TimeLineBGMController : public Il2CppObject
	{
	public:
		::System::Int64 BGMId; // 0x18
		::System::Boolean useStartFadeIn; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEBGMCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

