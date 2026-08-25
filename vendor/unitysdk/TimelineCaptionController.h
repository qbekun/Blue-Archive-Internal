#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define TIMELINECAPTIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204C030)
#define TIMELINECAPTIONCONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204C040)

	inline static constexpr unsigned int TimelineCaptionController_TypeDefinitionIndex = 3295;

	class TimelineCaptionController : public Il2CppObject
	{
	public:
		::System::String* captionLocalizeKey; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINECAPTIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINECAPTIONCONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

