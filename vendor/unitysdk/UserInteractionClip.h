#pragma once
#include "unitysdk.h"

class UIUserInteractionParam;
class FailInputHandle;
class WaitPlan;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class ClipCaps; }

#define USERINTERACTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x20528D0)
#define USERINTERACTIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x2052A70)
#define USERINTERACTIONCLIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2052A80)

	inline static constexpr unsigned int UserInteractionClip_TypeDefinitionIndex = 3323;

	class UserInteractionClip : public Il2CppObject
	{
	public:
		::System::Double EaseInDuration; // 0x18
		UIUserInteractionParam* UIParam; // 0x20
		FailInputHandle* FailInputHandling; // 0x28
		WaitPlan* waitPlan; // 0x2C
		::System::Boolean UseSlowMotionCurve; // 0x30
		::UnityEngine::AnimationCurve* SlowMotionCurveUntilInput; // 0x38
		::System::Single ProgressRequire; // 0x40
		::System::Single ProgressReduceSpeed; // 0x44
		::System::Single AdjustStartTime; // 0x48
		::System::Single AdjustMaxTime; // 0x4C
		::System::Single AdjustMaxRate; // 0x50
		::System::String* ResultSaveKey; // 0x58
		::System::Single clipStartTime; // 0x60

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONCLIP_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Timeline::ClipCaps* get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps*(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONCLIP_GET_CLIPCAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USERINTERACTIONCLIP_.CTOR_OFFSET))(nullptr);
		}

	};

