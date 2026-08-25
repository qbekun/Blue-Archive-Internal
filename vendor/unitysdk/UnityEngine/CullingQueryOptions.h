#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CullingQueryOptions; }

namespace UnityEngine
{
	inline static constexpr unsigned int CullingQueryOptions_TypeDefinitionIndex = 30965;

	class CullingQueryOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CullingQueryOptions* Normal; // 0x0
		::UnityEngine::CullingQueryOptions* IgnoreVisibility; // 0x0
		::UnityEngine::CullingQueryOptions* IgnoreDistance; // 0x0

	};
}

