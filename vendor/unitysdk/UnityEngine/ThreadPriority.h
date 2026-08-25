#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ThreadPriority; }

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadPriority_TypeDefinitionIndex = 30939;

	class ThreadPriority : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ThreadPriority* Low; // 0x0
		::UnityEngine::ThreadPriority* BelowNormal; // 0x0
		::UnityEngine::ThreadPriority* Normal; // 0x0
		::UnityEngine::ThreadPriority* High; // 0x0

	};
}

