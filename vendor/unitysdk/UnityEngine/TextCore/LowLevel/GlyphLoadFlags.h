#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphLoadFlags; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphLoadFlags_TypeDefinitionIndex = 37517;

	class GlyphLoadFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_DEFAULT; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_NO_SCALE; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_NO_HINTING; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_RENDER; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_NO_BITMAP; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_FORCE_AUTOHINT; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_MONOCHROME; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_NO_AUTOHINT; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_COLOR; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_COMPUTE_METRICS; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* LOAD_BITMAP_METRICS_ONLY; // 0x0

	};
}

