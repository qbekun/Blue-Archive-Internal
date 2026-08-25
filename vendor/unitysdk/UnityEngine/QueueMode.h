#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class QueueMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int QueueMode_TypeDefinitionIndex = 36445;

	class QueueMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::QueueMode* CompleteOthers; // 0x0
		::UnityEngine::QueueMode* PlayNow; // 0x0

	};
}

