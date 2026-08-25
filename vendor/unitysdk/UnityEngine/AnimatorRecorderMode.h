#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimatorRecorderMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorRecorderMode_TypeDefinitionIndex = 36459;

	class AnimatorRecorderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AnimatorRecorderMode* Offline; // 0x0
		::UnityEngine::AnimatorRecorderMode* Playback; // 0x0
		::UnityEngine::AnimatorRecorderMode* Record; // 0x0

	};
}

