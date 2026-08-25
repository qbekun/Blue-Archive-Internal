#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpritePackingRotation; }

namespace UnityEngine
{
	inline static constexpr unsigned int SpritePackingRotation_TypeDefinitionIndex = 31221;

	class SpritePackingRotation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SpritePackingRotation* None; // 0x0
		::UnityEngine::SpritePackingRotation* FlipHorizontal; // 0x0
		::UnityEngine::SpritePackingRotation* FlipVertical; // 0x0
		::UnityEngine::SpritePackingRotation* Rotate180; // 0x0
		::UnityEngine::SpritePackingRotation* Any; // 0x0

	};
}

