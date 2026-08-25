#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MotionVectorGenerationMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int MotionVectorGenerationMode_TypeDefinitionIndex = 31057;

	class MotionVectorGenerationMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::MotionVectorGenerationMode* Camera; // 0x0
		::UnityEngine::MotionVectorGenerationMode* Object; // 0x0
		::UnityEngine::MotionVectorGenerationMode* ForceNoMotion; // 0x0

	};
}

