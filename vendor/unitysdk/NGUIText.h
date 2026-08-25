#pragma once
#include "unitysdk.h"

class INGUIFont;
namespace UnityEngine { class Font; }
class GlyphInfo;
namespace UnityEngine { class FontStyle; }
class Alignment;
namespace UnityEngine { class Color; }
class SymbolStyle;
namespace UnityEngine { class CharacterInfo; }
class BMSymbol;
namespace UnityEngine { class Vector2; }

#define NGUITEXT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x199C530)
#define NGUITEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x199C580)
#define NGUITEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x199C5E0)
#define NGUITEXT_PREPARE_OFFSET UNITYSDK_OFFSET(0x199CBE0)
#define NGUITEXT_GETSYMBOL_OFFSET UNITYSDK_OFFSET(0x199CD20)
#define NGUITEXT_GETGLYPHWIDTH_OFFSET UNITYSDK_OFFSET(0x199CE60)
#define NGUITEXT_GETGLYPH_OFFSET UNITYSDK_OFFSET(0x199D170)
#define NGUITEXT_PARSEALPHA_OFFSET UNITYSDK_OFFSET(0x199DC80)
#define NGUITEXT_PARSECOLOR_OFFSET UNITYSDK_OFFSET(0x199DD40)
#define NGUITEXT_PARSECOLOR24_OFFSET UNITYSDK_OFFSET(0x199DDA0)
#define NGUITEXT_PARSECOLOR32_OFFSET UNITYSDK_OFFSET(0x199DF80)
#define NGUITEXT_ENCODECOLOR_OFFSET UNITYSDK_OFFSET(0x199E1F0)
#define NGUITEXT_ENCODECOLOR_OFFSET UNITYSDK_OFFSET(0x199E2E0)
#define NGUITEXT_ENCODEALPHA_OFFSET UNITYSDK_OFFSET(0x199E540)
#define NGUITEXT_ENCODECOLOR24_OFFSET UNITYSDK_OFFSET(0x199E280)
#define NGUITEXT_ENCODECOLOR32_OFFSET UNITYSDK_OFFSET(0x199E690)
#define NGUITEXT_PARSESYMBOL_OFFSET UNITYSDK_OFFSET(0x199E6E0)
#define NGUITEXT_ISHEX_OFFSET UNITYSDK_OFFSET(0x199F4F0)
#define NGUITEXT_PARSESYMBOL_OFFSET UNITYSDK_OFFSET(0x199E780)
#define NGUITEXT_STRIPSYMBOLS_OFFSET UNITYSDK_OFFSET(0x199F530)
#define NGUITEXT_ALIGN_OFFSET UNITYSDK_OFFSET(0x199F650)
#define NGUITEXT_GETEXACTCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x19A0170)
#define NGUITEXT_GETAPPROXIMATECHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x19A02D0)
#define NGUITEXT_ISSPACE_OFFSET UNITYSDK_OFFSET(0x19A0460)
#define NGUITEXT_ENDLINE_OFFSET UNITYSDK_OFFSET(0x19A0480)
#define NGUITEXT_ISWRAPCHARACTER_OFFSET UNITYSDK_OFFSET(0x19A0550)
#define NGUITEXT_REPLACESPACEWITHNEWLINE_OFFSET UNITYSDK_OFFSET(0x19A0600)
#define NGUITEXT_CALCULATEPRINTEDSIZE_OFFSET UNITYSDK_OFFSET(0x19A06B0)
#define NGUITEXT_SPLITTEXTCHUNK_OFFSET UNITYSDK_OFFSET(0x19A0ED0)
#define NGUITEXT_CALCULATEOFFSETTOFIT_OFFSET UNITYSDK_OFFSET(0x19A16D0)
#define NGUITEXT_GETENDOFLINETHATFITS_OFFSET UNITYSDK_OFFSET(0x19A1C90)
#define NGUITEXT_WRAPTEXT_OFFSET UNITYSDK_OFFSET(0x19A1D00)
#define NGUITEXT_WRAPTEXT_OFFSET UNITYSDK_OFFSET(0x19A1D70)
#define NGUITEXT_PRINT_OFFSET UNITYSDK_OFFSET(0x19A3B10)
#define NGUITEXT_PRINTAPPROXIMATECHARACTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19A7140)
#define NGUITEXT_PRINTEXACTCHARACTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19A7BC0)
#define NGUITEXT_PRINTCARETANDSELECTION_OFFSET UNITYSDK_OFFSET(0x19A85B0)
#define NGUITEXT_REPLACELINK_OFFSET UNITYSDK_OFFSET(0x19AA170)
#define NGUITEXT_INSERTHYPERLINK_OFFSET UNITYSDK_OFFSET(0x19AA7D0)
#define NGUITEXT_REPLACELINKS_OFFSET UNITYSDK_OFFSET(0x19AAB70)
#define NGUITEXT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x19AAC90)

	inline static constexpr unsigned int NGUIText_TypeDefinitionIndex = 113;

	class NGUIText : public Il2CppObject
	{
	public:
		INGUIFont* bitmapFont; // 0x0
		::UnityEngine::Font* dynamicFont; // 0x8
		GlyphInfo* glyph; // 0x10
		::System::Int32 fontSize; // 0x18
		::System::Single fontScale; // 0x1C
		::System::Single pixelDensity; // 0x20
		::UnityEngine::FontStyle* fontStyle; // 0x24
		Alignment* alignment; // 0x28
		::UnityEngine::Color* tint; // 0x2C
		::System::Int32 rectWidth; // 0x3C
		::System::Int32 rectHeight; // 0x40
		::System::Int32 regionWidth; // 0x44
		::System::Int32 regionHeight; // 0x48
		::System::Int32 maxLines; // 0x4C
		::System::Boolean gradient; // 0x50
		::UnityEngine::Color* gradientBottom; // 0x54
		::UnityEngine::Color* gradientTop; // 0x64
		::System::Boolean encoding; // 0x74
		::System::Single spacingX; // 0x78
		::System::Single spacingY; // 0x7C
		::System::Single underlineOffset; // 0x80
		::System::Boolean premultiply; // 0x84
		SymbolStyle* symbolStyle; // 0x88
		::System::Int32 finalSize; // 0x8C
		::System::Single finalSpacingX; // 0x90
		::System::Single finalLineHeight; // 0x94
		::System::Single baseline; // 0x98
		::System::Boolean useSymbols; // 0x9C
		::UnityEngine::Color* mInvisible; // 0xA0
		Il2CppObject* mColors; // 0xB0
		::System::Single mAlpha; // 0xB8
		::UnityEngine::CharacterInfo* mTempChar; // 0xBC
		Il2CppObject* mSizes; // 0xF0
		::UnityEngine::Color* s_c0; // 0xF8
		::UnityEngine::Color* s_c1; // 0x108
		::System::Single sizeShrinkage; // 0x0
		::Il2CppArray<::System::Object*>* mBoldOffset; // 0x118

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GET_ISDYNAMIC_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PREPARE_OFFSET))(str, nullptr);
		}

		BMSymbol* GetSymbol(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETSYMBOL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Single GetGlyphWidth(::System::Int32 arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETGLYPHWIDTH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		GlyphInfo* GetGlyph(::System::Int32 arg, ::System::Int32 arg2, ::System::Single arg3)
		{
			return ((GlyphInfo*(*)(::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETGLYPH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single ParseAlpha(::System::String* str, ::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSEALPHA_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Color* ParseColor(::System::String* str, ::System::Int32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSECOLOR_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Color* ParseColor24(::System::String* str, ::System::Int32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSECOLOR24_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Color* ParseColor32(::System::String* str, ::System::Int32 arg)
		{
			return ((::UnityEngine::Color*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSECOLOR32_OFFSET))(str, arg, nullptr);
		}

		::System::String* EncodeColor(::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENCODECOLOR_OFFSET))(arg, nullptr);
		}

		::System::String* EncodeColor(::System::String* str, ::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENCODECOLOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* EncodeAlpha(::System::Single arg)
		{
			return ((::System::String*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENCODEALPHA_OFFSET))(arg, nullptr);
		}

		::System::String* EncodeColor24(::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENCODECOLOR24_OFFSET))(arg, nullptr);
		}

		::System::String* EncodeColor32(::UnityEngine::Color* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENCODECOLOR32_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseSymbol(::System::String* str, int32_t&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSESYMBOL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsHex(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ISHEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean ParseSymbol(::System::String* str, int32_t&* arg, Il2CppObject* arg2, ::System::Boolean arg3, int32_t&* arg4, bool&* arg5, bool&* arg6, bool&* arg7, bool&* arg8, bool&* arg9)
		{
			return ((::System::Boolean(*)(::System::String*, int32_t&*, Il2CppObject*, ::System::Boolean, int32_t&*, bool&*, bool&*, bool&*, bool&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PARSESYMBOL_OFFSET))(str, arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::String* StripSymbols(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_STRIPSYMBOLS_OFFSET))(str, nullptr);
		}

		::System::Void Align(Il2CppObject* arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ALIGN_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int32 GetExactCharacterIndex(Il2CppObject* arg, Il2CppObject* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETEXACTCHARACTERINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 GetApproximateCharacterIndex(Il2CppObject* arg, Il2CppObject* arg2, ::UnityEngine::Vector2* arg3)
		{
			return ((::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETAPPROXIMATECHARACTERINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsSpace(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ISSPACE_OFFSET))(arg, nullptr);
		}

		::System::Void EndLine(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ENDLINE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsWrapCharacter(::System::Char arg)
		{
			return ((::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_ISWRAPCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void ReplaceSpaceWithNewline(::System::Text::StringBuilder&* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder&*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_REPLACESPACEWITHNEWLINE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalculatePrintedSize(::System::String* str)
		{
			return ((::UnityEngine::Vector2*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_CALCULATEPRINTEDSIZE_OFFSET))(str, nullptr);
		}

		::System::Boolean SplitTextChunk(::System::String&* arg, ::System::Boolean arg2, ::System::Boolean arg3, float&* arg4, ::System::String&* arg5, ::System::Boolean arg6)
		{
			return ((::System::Boolean(*)(::System::String&*, ::System::Boolean, ::System::Boolean, float&*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_SPLITTEXTCHUNK_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int32 CalculateOffsetToFit(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_CALCULATEOFFSETTOFIT_OFFSET))(str, nullptr);
		}

		::System::String* GetEndOfLineThatFits(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_GETENDOFLINETHATFITS_OFFSET))(str, nullptr);
		}

		::System::Boolean WrapText(::System::String* str, ::System::String&* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_WRAPTEXT_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Boolean WrapText(::System::String* str, ::System::String&* arg, ::System::Boolean arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_WRAPTEXT_OFFSET))(str, arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Print(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PRINT_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void PrintApproximateCharacterPositions(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PRINTAPPROXIMATECHARACTERPOSITIONS_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void PrintExactCharacterPositions(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PRINTEXACTCHARACTERPOSITIONS_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void PrintCaretAndSelection(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_PRINTCARETANDSELECTION_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean ReplaceLink(::System::String&* arg, int32_t&* arg2, ::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			return ((::System::Boolean(*)(::System::String&*, int32_t&*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_REPLACELINK_OFFSET))(arg, arg2, str, str2, str3, nullptr);
		}

		::System::Boolean InsertHyperlink(::System::String&* arg, int32_t&* arg2, ::System::String* str, ::System::String* str2, ::System::String* str3, ::System::String* str4)
		{
			return ((::System::Boolean(*)(::System::String&*, int32_t&*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_INSERTHYPERLINK_OFFSET))(arg, arg2, str, str2, str3, str4, nullptr);
		}

		::System::Void ReplaceLinks(::System::String&* arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String&*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_REPLACELINKS_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUITEXT_.CCTOR_OFFSET))(nullptr);
		}

	};

