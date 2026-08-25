#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }

#define TIMELINETRACKBINDERFORSCENE_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0x20C4BC0)
#define TIMELINETRACKBINDERFORSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C4D20)

	inline static constexpr unsigned int TimelineTrackBinderForScene_TypeDefinitionIndex = 3664;

	class TimelineTrackBinderForScene : public Il2CppObject
	{
	public:
		Il2CppObject* animatorInfoList; // 0x18

		::UnityEngine::Animator* GetAnimator(::System::Int32 arg)
		{
			return ((::UnityEngine::Animator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORSCENE_GETANIMATOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETRACKBINDERFORSCENE_.CTOR_OFFSET))(nullptr);
		}

	};

