#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine::Playables { class PlayableDirector; }
class CharacterVisual;
namespace UnityEngine { class Animator; }

#define TSAINTERACTIONVISUAL_CLEARPLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x13D1250)
#define TSAINTERACTIONVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D1750)
#define TSAINTERACTIONVISUAL_ENABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0x13D1760)
#define TSAINTERACTIONVISUAL_BINDPLAYABLEDIRECTOR_OFFSET UNITYSDK_OFFSET(0x13D1810)
#define TSAINTERACTIONVISUAL_DISABLEANIMATOR_OFFSET UNITYSDK_OFFSET(0x13D1D10)

	inline static constexpr unsigned int TSAInteractionVisual_TypeDefinitionIndex = 1072;

	class TSAInteractionVisual : public Il2CppObject
	{
	public:
		::UnityEngine::RuntimeAnimatorController* Controller; // 0x18
		Il2CppObject* playableDirectorSettings; // 0x20
		::UnityEngine::RuntimeAnimatorController* originalAnimationController; // 0x28

		::System::Void ClearPlayableDirector(::System::Int64 arg, ::UnityEngine::Playables::PlayableDirector* arg2)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TSAINTERACTIONVISUAL_CLEARPLAYABLEDIRECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSAINTERACTIONVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void EnableAnimator(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TSAINTERACTIONVISUAL_ENABLEANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void BindPlayableDirector(::System::Int64 arg, ::UnityEngine::Animator* arg2, ::UnityEngine::Playables::PlayableDirector* arg3)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Animator*, ::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + TSAINTERACTIONVISUAL_BINDPLAYABLEDIRECTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void DisableAnimator(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + TSAINTERACTIONVISUAL_DISABLEANIMATOR_OFFSET))(arg, nullptr);
		}

	};

