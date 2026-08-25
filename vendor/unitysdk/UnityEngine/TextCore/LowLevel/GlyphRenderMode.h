#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphRenderMode; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphRenderMode_TypeDefinitionIndex = 37519;

	class GlyphRenderMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SMOOTH_HINTED; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SMOOTH; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* COLOR_HINTED; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* COLOR; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* RASTER_HINTED; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* RASTER; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDF; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDF8; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDF16; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDF32; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDFAA_HINTED; // 0x0
		::UnityEngine::TextCore::LowLevel::GlyphRenderMode* SDFAA; // 0x0

	};
}

