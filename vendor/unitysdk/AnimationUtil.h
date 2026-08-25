#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animation; }

#define ANIMATIONUTIL_FINDEVENTTIME_OFFSET UNITYSDK_OFFSET(0x211D9A0)
#define ANIMATIONUTIL_TRYJUMPTONEXTEVENT_OFFSET UNITYSDK_OFFSET(0x211DA60)

	inline static constexpr unsigned int AnimationUtil_TypeDefinitionIndex = 3878;

	class AnimationUtil : public Il2CppObject
	{
	public:
		::System::Single FindEventTime(::UnityEngine::AnimationClip* arg, ::System::String&* arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::UnityEngine::AnimationClip*, ::System::String&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONUTIL_FINDEVENTTIME_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryJumpToNextEvent(::UnityEngine::Animation* arg, ::System::String&* arg2, float&* arg3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animation*, ::System::String&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONUTIL_TRYJUMPTONEXTEVENT_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

