#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpriteMaskInteraction; }

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteMaskInteraction_TypeDefinitionIndex = 31217;

	class SpriteMaskInteraction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SpriteMaskInteraction* None; // 0x0
		::UnityEngine::SpriteMaskInteraction* VisibleInsideMask; // 0x0
		::UnityEngine::SpriteMaskInteraction* VisibleOutsideMask; // 0x0

	};
}

