#pragma once
#include "unitysdk.h"

class FurnitureTimelineType;
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }

#define CAFEFURNITURETIMELINECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x19BE330)
#define CAFEFURNITURETIMELINECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19BE340)

	inline static constexpr unsigned int CafeFurnitureTimeLineController_TypeDefinitionIndex = 1365;

	class CafeFurnitureTimeLineController : public Il2CppObject
	{
	public:
		FurnitureTimelineType* timelineType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURETIMELINECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURETIMELINECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

