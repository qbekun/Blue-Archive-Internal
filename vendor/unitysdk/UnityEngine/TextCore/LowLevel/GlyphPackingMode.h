#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphPackingMode; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphPackingMode_TypeDefinitionIndex = 37520;

	class GlyphPackingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphPackingMode* BestShortSideFit; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphPackingMode* BestLongSideFit; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphPackingMode* BestAreaFit; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphPackingMode* BottomLeftRule; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphPackingMode* ContactPointRule; // 0x0

	};
}

