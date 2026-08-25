#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimationEvent; }

#define ANIMATORSERVICE_ISPREVBLENDANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x2099E90)
#define ANIMATORSERVICE_ISCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x2099F90)
#define ANIMATORSERVICE_ISCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x2099FF0)

	inline static constexpr unsigned int AnimatorService_TypeDefinitionIndex = 3519;

	class AnimatorService : public Il2CppObject
	{
	public:
		::System::Boolean IsPrevBlendAnimationEvent(::UnityEngine::Animator* arg, ::UnityEngine::AnimationEvent* arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animator*, ::UnityEngine::AnimationEvent*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATORSERVICE_ISPREVBLENDANIMATIONEVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsCurrentState(::UnityEngine::Animator* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATORSERVICE_ISCURRENTSTATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsCurrentState(::UnityEngine::Animator* arg, ::System::String* str)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATORSERVICE_ISCURRENTSTATE_OFFSET))(arg, str, nullptr);
		}

	};

