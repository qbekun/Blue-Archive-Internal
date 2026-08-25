#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define QUESTIONSELECTIONANIMATIONINFO_GETCLIP_OFFSET UNITYSDK_OFFSET(0x27E2FC0)

	inline static constexpr unsigned int QuestionSelectionAnimationInfo_TypeDefinitionIndex = 7672;

	class QuestionSelectionAnimationInfo : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationClip* OpenByCharcter; // 0x10
		::UnityEngine::AnimationClip* OpenByNonCharcter; // 0x18

		::UnityEngine::AnimationClip* GetClip(::System::Boolean arg)
		{
			return ((::UnityEngine::AnimationClip*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + QUESTIONSELECTIONANIMATIONINFO_GETCLIP_OFFSET))(arg, nullptr);
		}

	};

