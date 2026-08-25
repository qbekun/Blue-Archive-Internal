#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTreeNode_TypeDefinitionIndex = 36283;

	class IntervalTreeNode : public Il2CppObject
	{
	public:
		::System::Int64 center; // 0x10
		::System::Int32 first; // 0x18
		::System::Int32 last; // 0x1C
		::System::Int32 left; // 0x20
		::System::Int32 right; // 0x24

	};
}

