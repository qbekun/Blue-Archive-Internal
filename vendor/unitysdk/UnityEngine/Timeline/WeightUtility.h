#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class Playable; }

#define UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET UNITYSDK_OFFSET(0xA1AF660)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int WeightUtility_TypeDefinitionIndex = 36342;

	class WeightUtility : public Il2CppObject
	{
	public:
		::System::Single NormalizeMixer(::UnityEngine::Playables::Playable* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_WEIGHTUTILITY_NORMALIZEMIXER_OFFSET))(arg, nullptr);
		}

	};
}

