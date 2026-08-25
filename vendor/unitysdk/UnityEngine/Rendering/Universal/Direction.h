#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class Direction; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 32442;

	class Direction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::Direction* dRightToLeft; // 0x0
		::UnityEngine::Rendering::Universal::Direction* dLeftToRight; // 0x0

	};
}

