#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationRemoveScalePlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D1150)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D1200)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D13B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D1520)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D1530)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D15B0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D1490)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D1690)
#define UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D1650)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationRemoveScalePlayable_TypeDefinitionIndex = 36503;

	class AnimationRemoveScalePlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationRemoveScalePlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationRemoveScalePlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationRemoveScalePlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationRemoveScalePlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationRemoveScalePlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationRemoveScalePlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationRemoveScalePlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONREMOVESCALEPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

