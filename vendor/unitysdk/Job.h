#pragma once
#include "unitysdk.h"

namespace UnityEngine::Animations { class AnimationStream; }

#define JOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x4B47A0)
#define JOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x4B4840)

	inline static constexpr unsigned int Job_TypeDefinitionIndex = 35172;

	class Job : public Il2CppObject
	{
	public:
		Il2CppObject* properties; // 0x10
		Il2CppObject* values; // 0x20

		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + JOB_PROCESSANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::AnimationStream*, ::PVOID))((::PBYTE)hIl2Cpp + JOB_PROCESSROOTMOTION_OFFSET))(arg, nullptr);
		}

	};

