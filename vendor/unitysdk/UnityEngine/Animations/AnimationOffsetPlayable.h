#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Animations { class AnimationOffsetPlayable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableHandle&; }
namespace UnityEngine::Playables { class PlayableGraph&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA1D0590)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D0680)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D0860)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1D09E0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D09F0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1D0A70)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D0940)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1D0B60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1D0B10)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationOffsetPlayable_TypeDefinitionIndex = 36498;

	class AnimationOffsetPlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x10
		::UnityEngine::Animations::AnimationOffsetPlayable* m_NullPlayable; // 0x0

		::UnityEngine::Animations::AnimationOffsetPlayable* Create(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Animations::AnimationOffsetPlayable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(::UnityEngine::Animations::AnimationOffsetPlayable* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(::UnityEngine::Animations::AnimationOffsetPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Animations::AnimationOffsetPlayable* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::AnimationOffsetPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateHandleInternal(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CreateHandleInternal_Injected(::UnityEngine::Playables::PlayableGraph&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableGraph&*, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONOFFSETPLAYABLE_CREATEHANDLEINTERNAL_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

