#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimatorUpdateMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorUpdateMode_TypeDefinitionIndex = 36461;

	class AnimatorUpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimatorUpdateMode* Normal; // 0x0
		::UnityEngine::AnimatorUpdateMode* AnimatePhysics; // 0x0
		::UnityEngine::AnimatorUpdateMode* UnscaledTime; // 0x0

	};
}

