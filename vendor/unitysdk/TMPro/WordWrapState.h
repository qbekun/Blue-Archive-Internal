#pragma once
#include "../unitysdk.h"

namespace TMPro { class HorizontalAlignmentOptions; }
namespace TMPro { class FontStyles; }
namespace TMPro { class TMP_TextInfo; }
namespace TMPro { class TMP_LineInfo; }
namespace UnityEngine { class Color32; }
namespace TMPro { class TMP_FontStyleStack; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }
namespace TMPro { class Extents; }

namespace TMPro
{
	inline static constexpr unsigned int WordWrapState_TypeDefinitionIndex = 33626;

	class WordWrapState : public Il2CppObject
	{
	public:
		::System::Int32 previous_WordBreak; // 0x10
		::System::Int32 total_CharacterCount; // 0x14
		::System::Int32 visible_CharacterCount; // 0x18
		::System::Int32 visible_SpriteCount; // 0x1C
		::System::Int32 visible_LinkCount; // 0x20
		::System::Int32 firstCharacterIndex; // 0x24
		::System::Int32 firstVisibleCharacterIndex; // 0x28
		::System::Int32 lastCharacterIndex; // 0x2C
		::System::Int32 lastVisibleCharIndex; // 0x30
		::System::Int32 lineNumber; // 0x34
		::System::Single maxCapHeight; // 0x38
		::System::Single maxAscender; // 0x3C
		::System::Single maxDescender; // 0x40
		::System::Single startOfLineAscender; // 0x44
		::System::Single maxLineAscender; // 0x48
		::System::Single maxLineDescender; // 0x4C
		::System::Single pageAscender; // 0x50
		::TMPro::HorizontalAlignmentOptions* horizontalAlignment; // 0x54
		::System::Single marginLeft; // 0x58
		::System::Single marginRight; // 0x5C
		::System::Single xAdvance; // 0x60
		::System::Single preferredWidth; // 0x64
		::System::Single preferredHeight; // 0x68
		::System::Single previousLineScale; // 0x6C
		::System::Int32 wordCount; // 0x70
		::TMPro::FontStyles* fontStyle; // 0x74
		::System::Int32 italicAngle; // 0x78
		::System::Single fontScaleMultiplier; // 0x7C
		::System::Single currentFontSize; // 0x80
		::System::Single baselineOffset; // 0x84
		::System::Single lineOffset; // 0x88
		::System::Boolean isDrivenLineSpacing; // 0x8C
		::System::Single glyphHorizontalAdvanceAdjustment; // 0x90
		::System::Single cSpace; // 0x94
		::System::Single mSpace; // 0x98
		::TMPro::TMP_TextInfo* textInfo; // 0xA0
		::TMPro::TMP_LineInfo* lineInfo; // 0xA8
		::UnityEngine::Color32* vertexColor; // 0x104
		::UnityEngine::Color32* underlineColor; // 0x108
		::UnityEngine::Color32* strikethroughColor; // 0x10C
		::UnityEngine::Color32* highlightColor; // 0x110
		::TMPro::TMP_FontStyleStack* basicStyleStack; // 0x114
		Il2CppObject* italicAngleStack; // 0x120
		Il2CppObject* colorStack; // 0x140
		Il2CppObject* underlineColorStack; // 0x160
		Il2CppObject* strikethroughColorStack; // 0x180
		Il2CppObject* highlightColorStack; // 0x1A0
		Il2CppObject* highlightStateStack; // 0x1C0
		Il2CppObject* colorGradientStack; // 0x1F0
		Il2CppObject* sizeStack; // 0x218
		Il2CppObject* indentStack; // 0x238
		Il2CppObject* fontWeightStack; // 0x258
		Il2CppObject* styleStack; // 0x278
		Il2CppObject* baselineStack; // 0x298
		Il2CppObject* actionStack; // 0x2B8
		Il2CppObject* materialReferenceStack; // 0x2D8
		Il2CppObject* lineJustificationStack; // 0x330
		::System::Int32 spriteAnimationID; // 0x350
		::TMPro::TMP_FontAsset* currentFontAsset; // 0x358
		::TMPro::TMP_SpriteAsset* currentSpriteAsset; // 0x360
		::UnityEngine::Material* currentMaterial; // 0x368
		::System::Int32 currentMaterialIndex; // 0x370
		::TMPro::Extents* meshExtents; // 0x374
		::System::Boolean tagNoParsing; // 0x384
		::System::Boolean isNonBreakingSpace; // 0x385

	};
}

