#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Animations { class JobMethodIndex; }

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int JobMethodIndex_TypeDefinitionIndex = 36490;

	class JobMethodIndex : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Animations::JobMethodIndex* ProcessRootMotionMethodIndex; // 0x0
		::UnityEngine::Animations::JobMethodIndex* ProcessAnimationMethodIndex; // 0x0
		::UnityEngine::Animations::JobMethodIndex* MethodIndexCount; // 0x0

	};
}

