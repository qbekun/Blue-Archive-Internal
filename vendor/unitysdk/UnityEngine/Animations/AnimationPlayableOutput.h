#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine::Animations { class AnimationPlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }

#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_CREATE_OFFSET UNITYSDK_OFFSET(0xA1CE000)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D0D40)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA1D0CC0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETHANDLE_OFFSET UNITYSDK_OFFSET(0xA1CDDE0)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA1CE460)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0xA1D0E60)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETTARGET_OFFSET UNITYSDK_OFFSET(0xA1D0E20)
#define UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET UNITYSDK_OFFSET(0xA1D0EF0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int AnimationPlayableOutput_TypeDefinitionIndex = 36501;

	class AnimationPlayableOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableOutputHandle* m_Handle; // 0x10

		::UnityEngine::Animations::AnimationPlayableOutput* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::String* str, ::UnityEngine::Animator* arg)
		{
			return (return (::UnityEngine::Animations::AnimationPlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::String*, ::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimationPlayableOutput* get_Null()
		{
			return (return (::UnityEngine::Animations::AnimationPlayableOutput*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GET_NULL_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutputHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_GETHANDLE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* op_Implicit(::UnityEngine::Animations::AnimationPlayableOutput* arg)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Animations::AnimationPlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Animations::AnimationPlayableOutput* op_Explicit(::UnityEngine::Playables::PlayableOutput* arg)
		{
			return (return (::UnityEngine::Animations::AnimationPlayableOutput*(*)(::UnityEngine::Playables::PlayableOutput*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetTarget(::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void InternalSetTarget(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Animator* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Animator*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_ANIMATIONPLAYABLEOUTPUT_INTERNALSETTARGET_OFFSET))(arg, arg, nullptr);
		}

	};
}

