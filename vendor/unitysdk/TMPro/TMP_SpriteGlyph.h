#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine::TextCore { class GlyphMetrics; }
namespace UnityEngine::TextCore { class GlyphRect; }

#define TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17ABE0)
#define TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17B030)
#define TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17B0E0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteGlyph_TypeDefinitionIndex = 33725;

	class TMP_SpriteGlyph : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* sprite; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::UnityEngine::TextCore::GlyphMetrics* arg, ::UnityEngine::TextCore::GlyphRect* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics*, ::UnityEngine::TextCore::GlyphRect*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::UnityEngine::TextCore::GlyphMetrics* arg, ::UnityEngine::TextCore::GlyphRect* arg, ::System::Single arg, ::System::Int32 arg, ::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics*, ::UnityEngine::TextCore::GlyphRect*, ::System::Single, ::System::Int32, ::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEGLYPH_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

