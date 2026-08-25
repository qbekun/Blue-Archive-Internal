#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LineTextureMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int LineTextureMode_TypeDefinitionIndex = 31058;

	class LineTextureMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::LineTextureMode* Stretch; // 0x0
		::UnityEngine::LineTextureMode* Tile; // 0x0
		::UnityEngine::LineTextureMode* DistributePerSegment; // 0x0
		::UnityEngine::LineTextureMode* RepeatPerSegment; // 0x0

	};
}

