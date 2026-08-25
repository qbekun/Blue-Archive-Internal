#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class TouchPhase; }

namespace UnityEngine
{
	inline static constexpr unsigned int TouchPhase_TypeDefinitionIndex = 37741;

	class TouchPhase : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TouchPhase* Began; // 0x0
		::UnityEngine::TouchPhase* Moved; // 0x0
		::UnityEngine::TouchPhase* Stationary; // 0x0
		::UnityEngine::TouchPhase* Ended; // 0x0
		::UnityEngine::TouchPhase* Canceled; // 0x0

	};
}

