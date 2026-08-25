#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontStyles; }
namespace UnityEngine::TextCore::Text { class TextInfo; }
namespace UnityEngine::TextCore::Text { class LineInfo; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::TextCore::Text { class FontStyleStack; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class Extents; }

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int WordWrapState_TypeDefinitionIndex = 35598;

	class WordWrapState : public Il2CppObject
	{
	public:
		::System::Int32 previousWordBreak; // 0x10
		::System::Int32 totalCharacterCount; // 0x14
		::System::Int32 visibleCharacterCount; // 0x18
		::System::Int32 visibleSpriteCount; // 0x1C
		::System::Int32 visibleLinkCount; // 0x20
		::System::Int32 firstCharacterIndex; // 0x24
		::System::Int32 firstVisibleCharacterIndex; // 0x28
		::System::Int32 lastCharacterIndex; // 0x2C
		::System::Int32 lastVisibleCharIndex; // 0x30
		::System::Int32 lineNumber; // 0x34
		::System::Single maxCapHeight; // 0x38
		::System::Single maxAscender; // 0x3C
		::System::Single maxDescender; // 0x40
		::System::Single maxLineAscender; // 0x44
		::System::Single maxLineDescender; // 0x48
		::System::Single previousLineAscender; // 0x4C
		::System::Single xAdvance; // 0x50
		::System::Single preferredWidth; // 0x54
		::System::Single preferredHeight; // 0x58
		::System::Single previousLineScale; // 0x5C
		::System::Int32 wordCount; // 0x60
		::UnityEngine::TextCore::Text::FontStyles* fontStyle; // 0x64
		::System::Single fontScale; // 0x68
		::System::Single fontScaleMultiplier; // 0x6C
		::System::Single currentFontSize; // 0x70
		::System::Single baselineOffset; // 0x74
		::System::Single lineOffset; // 0x78
		::UnityEngine::TextCore::Text::TextInfo* textInfo; // 0x80
		::UnityEngine::TextCore::Text::LineInfo* lineInfo; // 0x88
		::UnityEngine::Color32* vertexColor; // 0xE8
		::UnityEngine::Color32* underlineColor; // 0xEC
		::UnityEngine::Color32* strikethroughColor; // 0xF0
		::UnityEngine::Color32* highlightColor; // 0xF4
		::UnityEngine::TextCore::Text::FontStyleStack* basicStyleStack; // 0xF8
		Il2CppObject* colorStack; // 0x108
		Il2CppObject* underlineColorStack; // 0x128
		Il2CppObject* strikethroughColorStack; // 0x148
		Il2CppObject* highlightColorStack; // 0x168
		Il2CppObject* colorGradientStack; // 0x188
		Il2CppObject* sizeStack; // 0x1B0
		Il2CppObject* indentStack; // 0x1D0
		Il2CppObject* fontWeightStack; // 0x1F0
		Il2CppObject* styleStack; // 0x210
		Il2CppObject* baselineStack; // 0x230
		Il2CppObject* actionStack; // 0x250
		Il2CppObject* materialReferenceStack; // 0x270
		Il2CppObject* lineJustificationStack; // 0x2C8
		::System::Int32 spriteAnimationId; // 0x2E8
		::UnityEngine::TextCore::Text::FontAsset* currentFontAsset; // 0x2F0
		::UnityEngine::TextCore::Text::SpriteAsset* currentSpriteAsset; // 0x2F8
		::UnityEngine::Material* currentMaterial; // 0x300
		::System::Int32 currentMaterialIndex; // 0x308
		::UnityEngine::TextCore::Text::Extents* meshExtents; // 0x30C
		::System::Boolean tagNoParsing; // 0x31C
		::System::Boolean isNonBreakingSpace; // 0x31D

	};
}

