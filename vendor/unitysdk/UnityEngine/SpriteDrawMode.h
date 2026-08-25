#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class SpriteDrawMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteDrawMode_TypeDefinitionIndex = 31215;

	class SpriteDrawMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::SpriteDrawMode* Simple; // 0x0
		::UnityEngine::SpriteDrawMode* Sliced; // 0x0
		::UnityEngine::SpriteDrawMode* Tiled; // 0x0

	};
}

