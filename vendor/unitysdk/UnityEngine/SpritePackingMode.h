#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpritePackingMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int SpritePackingMode_TypeDefinitionIndex = 31220;

	class SpritePackingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SpritePackingMode* Tight; // 0x0
		::UnityEngine::SpritePackingMode* Rectangle; // 0x0

	};
}

