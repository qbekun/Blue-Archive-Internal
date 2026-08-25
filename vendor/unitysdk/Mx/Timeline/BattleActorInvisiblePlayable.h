#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE21A00)
#define MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21AB0)
#define MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE21AC0)

namespace Mx::Timeline
{
	inline static constexpr unsigned int BattleActorInvisiblePlayable_TypeDefinitionIndex = 10364;

	class BattleActorInvisiblePlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_BATTLEACTORINVISIBLEPLAYABLE_GET_CLIPCAPS_OFFSET))(nullptr);
		}

	};
}

