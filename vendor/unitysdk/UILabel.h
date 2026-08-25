#pragma once
#include "unitysdk.h"

class Crispness;
namespace UnityEngine { class Font; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class FontStyle; }
class Alignment;
class Effect;
namespace UnityEngine { class Color; }
class SymbolStyle;
namespace UnityEngine { class Vector2; }
class Overflow;
class Modifier;
namespace FlatData { class Language; }
class ModifierFunc;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
class INGUIFont;
class INGUIAtlas;
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class KeyCode; }
class UIGeometry;

#define UILABEL_GET_MSCALE_OFFSET UNITYSDK_OFFSET(0x2309AD0)
#define UILABEL_SET_MSCALE_OFFSET UNITYSDK_OFFSET(0x2309AE0)
#define UILABEL_GET_FONTSCALE_OFFSET UNITYSDK_OFFSET(0x2309B50)
#define UILABEL_GET_EFFECTCOLOR2_OFFSET UNITYSDK_OFFSET(0x2309B60)
#define UILABEL_SET_EFFECTCOLOR2_OFFSET UNITYSDK_OFFSET(0x2309B70)
#define UILABEL_GET_EFFECTDISTANCE2_OFFSET UNITYSDK_OFFSET(0x2309C00)
#define UILABEL_SET_EFFECTDISTANCE2_OFFSET UNITYSDK_OFFSET(0x2309C10)
#define UILABEL_GET_FINALFONTSIZE_OFFSET UNITYSDK_OFFSET(0x2309C50)
#define UILABEL_GET_SHOULDBEPROCESSED_OFFSET UNITYSDK_OFFSET(0x2309F40)
#define UILABEL_SET_SHOULDBEPROCESSED_OFFSET UNITYSDK_OFFSET(0x2309BE0)
#define UILABEL_GET_ISANCHOREDHORIZONTALLY_OFFSET UNITYSDK_OFFSET(0x2309F50)
#define UILABEL_GET_ISANCHOREDVERTICALLY_OFFSET UNITYSDK_OFFSET(0x2309F80)
#define UILABEL_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2309FB0)
#define UILABEL_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x230A120)
#define UILABEL_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x230A130)
#define UILABEL_SET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x230A2A0)
#define UILABEL_GET_FONT_OFFSET UNITYSDK_OFFSET(0x230A2B0)
#define UILABEL_SET_FONT_OFFSET UNITYSDK_OFFSET(0x230A350)
#define UILABEL_GET_BITMAPFONT_OFFSET UNITYSDK_OFFSET(0x22FD730)
#define UILABEL_SET_BITMAPFONT_OFFSET UNITYSDK_OFFSET(0x22FD770)
#define UILABEL_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x230A3A0)
#define UILABEL_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x230A470)
#define UILABEL_GET_TRUETYPEFONT_OFFSET UNITYSDK_OFFSET(0x2309E30)
#define UILABEL_SET_TRUETYPEFONT_OFFSET UNITYSDK_OFFSET(0x230A540)
#define UILABEL_GET_AMBIGIOUSFONT_OFFSET UNITYSDK_OFFSET(0x230A970)
#define UILABEL_SET_AMBIGIOUSFONT_OFFSET UNITYSDK_OFFSET(0x230A9D0)
#define UILABEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x230AA50)
#define UILABEL_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x2305D60)
#define UILABEL_GET_DEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0x230AE70)
#define UILABEL_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x230AF90)
#define UILABEL_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x230AFA0)
#define UILABEL_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x230AFE0)
#define UILABEL_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0x230AFF0)
#define UILABEL_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x230B010)
#define UILABEL_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x23051F0)
#define UILABEL_GET_APPLYGRADIENT_OFFSET UNITYSDK_OFFSET(0x230B020)
#define UILABEL_SET_APPLYGRADIENT_OFFSET UNITYSDK_OFFSET(0x230B030)
#define UILABEL_GET_GRADIENTTOP_OFFSET UNITYSDK_OFFSET(0x230B060)
#define UILABEL_SET_GRADIENTTOP_OFFSET UNITYSDK_OFFSET(0x230B070)
#define UILABEL_GET_GRADIENTBOTTOM_OFFSET UNITYSDK_OFFSET(0x230B0F0)
#define UILABEL_SET_GRADIENTBOTTOM_OFFSET UNITYSDK_OFFSET(0x230B100)
#define UILABEL_GET_SPACINGX_OFFSET UNITYSDK_OFFSET(0x230B180)
#define UILABEL_SET_SPACINGX_OFFSET UNITYSDK_OFFSET(0x230B190)
#define UILABEL_GET_SPACINGY_OFFSET UNITYSDK_OFFSET(0x230B1C0)
#define UILABEL_SET_SPACINGY_OFFSET UNITYSDK_OFFSET(0x230B1D0)
#define UILABEL_GET_USEFLOATSPACING_OFFSET UNITYSDK_OFFSET(0x230B200)
#define UILABEL_SET_USEFLOATSPACING_OFFSET UNITYSDK_OFFSET(0x230B210)
#define UILABEL_GET_FLOATSPACINGX_OFFSET UNITYSDK_OFFSET(0x230B240)
#define UILABEL_SET_FLOATSPACINGX_OFFSET UNITYSDK_OFFSET(0x230B250)
#define UILABEL_GET_FLOATSPACINGY_OFFSET UNITYSDK_OFFSET(0x230B310)
#define UILABEL_SET_FLOATSPACINGY_OFFSET UNITYSDK_OFFSET(0x230B320)
#define UILABEL_GET_EFFECTIVESPACINGY_OFFSET UNITYSDK_OFFSET(0x230B3E0)
#define UILABEL_GET_EFFECTIVESPACINGX_OFFSET UNITYSDK_OFFSET(0x230B400)
#define UILABEL_GET_OVERFLOWELLIPSIS_OFFSET UNITYSDK_OFFSET(0x230B420)
#define UILABEL_SET_OVERFLOWELLIPSIS_OFFSET UNITYSDK_OFFSET(0x23058E0)
#define UILABEL_GET_OVERFLOWWIDTH_OFFSET UNITYSDK_OFFSET(0x230B430)
#define UILABEL_SET_OVERFLOWWIDTH_OFFSET UNITYSDK_OFFSET(0x230B440)
#define UILABEL_GET_OVERFLOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x230B470)
#define UILABEL_SET_OVERFLOWHEIGHT_OFFSET UNITYSDK_OFFSET(0x230B480)
#define UILABEL_GET_KEEPCRISP_OFFSET UNITYSDK_OFFSET(0x230B4B0)
#define UILABEL_GET_SUPPORTENCODING_OFFSET UNITYSDK_OFFSET(0x230B520)
#define UILABEL_SET_SUPPORTENCODING_OFFSET UNITYSDK_OFFSET(0x2305390)
#define UILABEL_GET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x230B530)
#define UILABEL_SET_UNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x230B540)
#define UILABEL_GET_SYMBOLSTYLE_OFFSET UNITYSDK_OFFSET(0x230B570)
#define UILABEL_SET_SYMBOLSTYLE_OFFSET UNITYSDK_OFFSET(0x230B580)
#define UILABEL_GET_OVERFLOWMETHOD_OFFSET UNITYSDK_OFFSET(0x230B5A0)
#define UILABEL_SET_OVERFLOWMETHOD_OFFSET UNITYSDK_OFFSET(0x230B5B0)
#define UILABEL_GET_LINEWIDTH_OFFSET UNITYSDK_OFFSET(0x230B5D0)
#define UILABEL_SET_LINEWIDTH_OFFSET UNITYSDK_OFFSET(0x230B5E0)
#define UILABEL_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x230B5F0)
#define UILABEL_SET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x230B600)
#define UILABEL_GET_MULTILINE_OFFSET UNITYSDK_OFFSET(0x2303F50)
#define UILABEL_SET_MULTILINE_OFFSET UNITYSDK_OFFSET(0x230B610)
#define UILABEL_GET_LOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x230B670)
#define UILABEL_GET_WORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x230CB30)
#define UILABEL_GET_DRAWINGDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x230CB60)
#define UILABEL_GET_MAXLINECOUNT_OFFSET UNITYSDK_OFFSET(0x230CBA0)
#define UILABEL_SET_MAXLINECOUNT_OFFSET UNITYSDK_OFFSET(0x230CBB0)
#define UILABEL_GET_EFFECTSTYLE_OFFSET UNITYSDK_OFFSET(0x230CBF0)
#define UILABEL_SET_EFFECTSTYLE_OFFSET UNITYSDK_OFFSET(0x230CC00)
#define UILABEL_GET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x230CC20)
#define UILABEL_SET_EFFECTCOLOR_OFFSET UNITYSDK_OFFSET(0x230CC30)
#define UILABEL_GET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x230CCA0)
#define UILABEL_SET_EFFECTDISTANCE_OFFSET UNITYSDK_OFFSET(0x230CCB0)
#define UILABEL_GET_QUADSPERCHARACTER_OFFSET UNITYSDK_OFFSET(0x230CCF0)
#define UILABEL_GET_SHRINKTOFIT_OFFSET UNITYSDK_OFFSET(0x230CD20)
#define UILABEL_SET_SHRINKTOFIT_OFFSET UNITYSDK_OFFSET(0x230CD30)
#define UILABEL_GET_PROCESSEDTEXT_OFFSET UNITYSDK_OFFSET(0x2307F80)
#define UILABEL_GET_PRINTEDSIZE_OFFSET UNITYSDK_OFFSET(0x230CD60)
#define UILABEL_GET_LOCALSIZE_OFFSET UNITYSDK_OFFSET(0x230CD90)
#define UILABEL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x230CDC0)
#define UILABEL_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x230CE50)
#define UILABEL_SET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x230CE60)
#define UILABEL_ONINIT_OFFSET UNITYSDK_OFFSET(0x230CEA0)
#define UILABEL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x230CF40)
#define UILABEL_SETACTIVEFONT_OFFSET UNITYSDK_OFFSET(0x230A650)
#define UILABEL_GET_PRINTEDTEXT_OFFSET UNITYSDK_OFFSET(0x230CFD0)
#define UILABEL_ONFONTCHANGED_OFFSET UNITYSDK_OFFSET(0x230D080)
#define UILABEL_GETSIDES_OFFSET UNITYSDK_OFFSET(0x230D5A0)
#define UILABEL_UPGRADEFROM265_OFFSET UNITYSDK_OFFSET(0x230D5E0)
#define UILABEL_ONANCHOR_OFFSET UNITYSDK_OFFSET(0x230D7B0)
#define UILABEL_PROCESSANDREQUEST_OFFSET UNITYSDK_OFFSET(0x230A880)
#define UILABEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x230D880)
#define UILABEL_ONSTART_OFFSET UNITYSDK_OFFSET(0x230D970)
#define UILABEL_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x230DBF0)
#define UILABEL_PROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x230B6A0)
#define UILABEL_MAKEPIXELPERFECT_OFFSET UNITYSDK_OFFSET(0x230E850)
#define UILABEL_ASSUMENATURALSIZE_OFFSET UNITYSDK_OFFSET(0x230EFC0)
#define UILABEL_GETCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x230F2F0)
#define UILABEL_GETCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x230F360)
#define UILABEL_GETCHARACTERINDEXATPOSITION_OFFSET UNITYSDK_OFFSET(0x2308910)
#define UILABEL_GETCHARACTERINDEXATPOSITION_OFFSET UNITYSDK_OFFSET(0x230F370)
#define UILABEL_GETWORDATPOSITION_OFFSET UNITYSDK_OFFSET(0x230FB10)
#define UILABEL_GETWORDATPOSITION_OFFSET UNITYSDK_OFFSET(0x230FCF0)
#define UILABEL_GETWORDATCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x230FB90)
#define UILABEL_GETURLATPOSITION_OFFSET UNITYSDK_OFFSET(0x230FD10)
#define UILABEL_GETURLATPOSITION_OFFSET UNITYSDK_OFFSET(0x230FF10)
#define UILABEL_GETURLATCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x230FD90)
#define UILABEL_GETCHARACTERINDEX_OFFSET UNITYSDK_OFFSET(0x23079B0)
#define UILABEL_PRINTOVERLAY_OFFSET UNITYSDK_OFFSET(0x2308EB0)
#define UILABEL_GET_PREMULTIPLIEDALPHASHADER_OFFSET UNITYSDK_OFFSET(0x230FF30)
#define UILABEL_GET_PACKEDFONTSHADER_OFFSET UNITYSDK_OFFSET(0x2310000)
#define UILABEL_ONFILL_OFFSET UNITYSDK_OFFSET(0x23100D0)
#define UILABEL_APPLYOFFSET_OFFSET UNITYSDK_OFFSET(0x230F7C0)
#define UILABEL_APPLYSHADOW_OFFSET UNITYSDK_OFFSET(0x2311140)
#define UILABEL_APPLYSHADOW_OFFSET UNITYSDK_OFFSET(0x2311580)
#define UILABEL_APPLYSHADOWANDGETOUTLINE_OFFSET UNITYSDK_OFFSET(0x23119C0)
#define UILABEL_CALCULATEOFFSETTOFIT_OFFSET UNITYSDK_OFFSET(0x2308DD0)
#define UILABEL_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x2312370)
#define UILABEL_SETCURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0x2312440)
#define UILABEL_SETCURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0x2312610)
#define UILABEL_WRAP_OFFSET UNITYSDK_OFFSET(0x2312720)
#define UILABEL_WRAP_OFFSET UNITYSDK_OFFSET(0x2312740)
#define UILABEL_UPDATENGUITEXT_OFFSET UNITYSDK_OFFSET(0x230DC10)
#define UILABEL_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x2312820)
#define UILABEL_GET_HASH_OFFSET UNITYSDK_OFFSET(0x23128B0)
#define UILABEL_SET_HASH_OFFSET UNITYSDK_OFFSET(0x2312900)
#define UILABEL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2312910)
#define UILABEL_SETTEXT_OFFSET UNITYSDK_OFFSET(0x2312A50)
#define UILABEL_SETTEXTFORWIDGESPOSITION_OFFSET UNITYSDK_OFFSET(0x2312C60)
#define UILABEL_CHECKANDDISPLAYERROR_OFFSET UNITYSDK_OFFSET(0x2312BD0)
#define UILABEL_PROCESSKILOFORMAT_OFFSET UNITYSDK_OFFSET(0x230AA60)
#define UILABEL_CONVERTTOKILOFORMAT_OFFSET UNITYSDK_OFFSET(0x2312CC0)
#define UILABEL_ADDCOMMASTONUMBERSINTEXT_OFFSET UNITYSDK_OFFSET(0x230AC20)
#define UILABEL_SETFONTLOCALIZE_OFFSET UNITYSDK_OFFSET(0x2312A00)
#define UILABEL_SETFONTLOCALIZE_OFFSET UNITYSDK_OFFSET(0x2312E50)
#define UILABEL_CHECKCHANGEFONT_OFFSET UNITYSDK_OFFSET(0x230AD90)
#define UILABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2312F40)
#define UILABEL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2313120)

	inline static constexpr unsigned int UILabel_TypeDefinitionIndex = 241;

	class UILabel : public Il2CppObject
	{
	public:
		Crispness* keepCrispWhenShrunk; // 0x190
		::UnityEngine::Font* mTrueTypeFont; // 0x198
		::UnityEngine::Object* mFont; // 0x1A0
		::System::String* mText; // 0x1A8
		::System::Int32 mFontSize; // 0x1B0
		::UnityEngine::FontStyle* mFontStyle; // 0x1B4
		Alignment* mAlignment; // 0x1B8
		::System::Boolean mEncoding; // 0x1BC
		::System::Single mUnderlineOffset; // 0x1C0
		::System::Int32 mMaxLineCount; // 0x1C4
		Effect* mEffectStyle; // 0x1C8
		::UnityEngine::Color* mEffectColor; // 0x1CC
		SymbolStyle* mSymbols; // 0x1DC
		::UnityEngine::Vector2* mEffectDistance; // 0x1E0
		Overflow* mOverflow; // 0x1E8
		::System::Boolean mApplyGradient; // 0x1EC
		::UnityEngine::Color* mGradientTop; // 0x1F0
		::UnityEngine::Color* mGradientBottom; // 0x200
		::System::Int32 mSpacingX; // 0x210
		::System::Int32 mSpacingY; // 0x214
		::System::Boolean mUseFloatSpacing; // 0x218
		::System::Single mFloatSpacingX; // 0x21C
		::System::Single mFloatSpacingY; // 0x220
		::System::Boolean mOverflowEllipsis; // 0x224
		::System::Int32 mOverflowWidth; // 0x228
		::System::Int32 mOverflowHeight; // 0x22C
		Modifier* mModifier; // 0x230
		::System::Boolean mShrinkToFit; // 0x234
		::System::Int32 mMaxLineWidth; // 0x238
		::System::Int32 mMaxLineHeight; // 0x23C
		::System::Single mLineWidth; // 0x240
		::System::Boolean mMultiline; // 0x244
		::UnityEngine::Font* mActiveTTF; // 0x248
		::System::Single mDensity; // 0x250
		::System::Boolean mShouldBeProcessed; // 0x254
		::System::String* mProcessedText; // 0x258
		::System::Boolean mPremultiply; // 0x260
		::UnityEngine::Vector2* mCalculatedSize; // 0x264
		::System::Int32 mFinalFontSize; // 0x26C
		::System::Int32 mLastWidth; // 0x270
		::System::Int32 mLastHeight; // 0x274
		::System::Single _mScale; // 0x278
		::FlatData::Language* currentSettingLanguage; // 0x27C
		::UnityEngine::Color* mEffectColor2; // 0x280
		::UnityEngine::Vector2* mEffectDistance2; // 0x290
		ModifierFunc* customModifier; // 0x298
		Il2CppObject* mList; // 0x0
		Il2CppObject* mFontUsage; // 0x8
		Il2CppObject* mTempDrawcalls; // 0x10
		::System::Boolean mTexRebuildAdded; // 0x18
		Il2CppObject* mTempVerts; // 0x20
		Il2CppObject* mTempIndices; // 0x28
		Il2CppObject* vertsForOnFill; // 0x30
		Il2CppObject* uvsForOnFill; // 0x38
		Il2CppObject* colsForOnFill; // 0x40
		::System::Boolean UseLocalizeFont; // 0x2A0
		::System::Boolean IsBold; // 0x2A1
		::System::String* LocalizeKey; // 0x2A8
		::System::UInt32 _hash; // 0x2B0
		::System::Boolean IgnoreLineAlignmentSymbol; // 0x2B4
		::System::Boolean UseKiloFormat; // 0x2B5
		::System::Boolean CommaSeparated; // 0x2B6

		::System::Single get_mScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MSCALE_OFFSET))(nullptr);
		}

		::System::Void set_mScale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MSCALE_OFFSET))(arg, nullptr);
		}

		::System::Single get_FontScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FONTSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_effectColor2()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTCOLOR2_OFFSET))(nullptr);
		}

		::System::Void set_effectColor2(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_EFFECTCOLOR2_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_effectDistance2()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTDISTANCE2_OFFSET))(nullptr);
		}

		::System::Void set_effectDistance2(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_EFFECTDISTANCE2_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_finalFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FINALFONTSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_shouldBeProcessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SHOULDBEPROCESSED_OFFSET))(nullptr);
		}

		::System::Void set_shouldBeProcessed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SHOULDBEPROCESSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isAnchoredHorizontally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_ISANCHOREDHORIZONTALLY_OFFSET))(nullptr);
		}

		::System::Boolean get_isAnchoredVertically()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_ISANCHOREDVERTICALLY_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_mainTexture(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MAINTEXTURE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_font()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FONT_OFFSET))(nullptr);
		}

		::System::Void set_font(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_FONT_OFFSET))(arg, nullptr);
		}

		INGUIFont* get_bitmapFont()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_BITMAPFONT_OFFSET))(nullptr);
		}

		::System::Void set_bitmapFont(INGUIFont* arg)
		{
			((::System::Void(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_BITMAPFONT_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Font* get_trueTypeFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_TRUETYPEFONT_OFFSET))(nullptr);
		}

		::System::Void set_trueTypeFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_TRUETYPEFONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Object* get_ambigiousFont()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_AMBIGIOUSFONT_OFFSET))(nullptr);
		}

		::System::Void set_ambigiousFont(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_AMBIGIOUSFONT_OFFSET))(arg, nullptr);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_defaultFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_DEFAULTFONTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_fontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::FontStyle* get_fontStyle()
		{
			return ((::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FONTSTYLE_OFFSET))(nullptr);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_FONTSTYLE_OFFSET))(arg, nullptr);
		}

		Alignment* get_alignment()
		{
			return ((Alignment*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Void set_alignment(Alignment* arg)
		{
			((::System::Void(*)(Alignment*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_applyGradient()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_APPLYGRADIENT_OFFSET))(nullptr);
		}

		::System::Void set_applyGradient(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_APPLYGRADIENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_gradientTop()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_GRADIENTTOP_OFFSET))(nullptr);
		}

		::System::Void set_gradientTop(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_GRADIENTTOP_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_gradientBottom()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_GRADIENTBOTTOM_OFFSET))(nullptr);
		}

		::System::Void set_gradientBottom(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_GRADIENTBOTTOM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_spacingX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SPACINGX_OFFSET))(nullptr);
		}

		::System::Void set_spacingX(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SPACINGX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_spacingY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SPACINGY_OFFSET))(nullptr);
		}

		::System::Void set_spacingY(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SPACINGY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useFloatSpacing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_USEFLOATSPACING_OFFSET))(nullptr);
		}

		::System::Void set_useFloatSpacing(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_USEFLOATSPACING_OFFSET))(arg, nullptr);
		}

		::System::Single get_floatSpacingX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FLOATSPACINGX_OFFSET))(nullptr);
		}

		::System::Void set_floatSpacingX(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_FLOATSPACINGX_OFFSET))(arg, nullptr);
		}

		::System::Single get_floatSpacingY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_FLOATSPACINGY_OFFSET))(nullptr);
		}

		::System::Void set_floatSpacingY(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_FLOATSPACINGY_OFFSET))(arg, nullptr);
		}

		::System::Single get_effectiveSpacingY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTIVESPACINGY_OFFSET))(nullptr);
		}

		::System::Single get_effectiveSpacingX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTIVESPACINGX_OFFSET))(nullptr);
		}

		::System::Boolean get_overflowEllipsis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_OVERFLOWELLIPSIS_OFFSET))(nullptr);
		}

		::System::Void set_overflowEllipsis(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_OVERFLOWELLIPSIS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_overflowWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_OVERFLOWWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_overflowWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_OVERFLOWWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_overflowHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_OVERFLOWHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_overflowHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_OVERFLOWHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_keepCrisp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_KEEPCRISP_OFFSET))(nullptr);
		}

		::System::Boolean get_supportEncoding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SUPPORTENCODING_OFFSET))(nullptr);
		}

		::System::Void set_supportEncoding(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SUPPORTENCODING_OFFSET))(arg, nullptr);
		}

		::System::Single get_underlineOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_UNDERLINEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_underlineOffset(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_UNDERLINEOFFSET_OFFSET))(arg, nullptr);
		}

		SymbolStyle* get_symbolStyle()
		{
			return ((SymbolStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SYMBOLSTYLE_OFFSET))(nullptr);
		}

		::System::Void set_symbolStyle(SymbolStyle* arg)
		{
			((::System::Void(*)(SymbolStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SYMBOLSTYLE_OFFSET))(arg, nullptr);
		}

		Overflow* get_overflowMethod()
		{
			return ((Overflow*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_OVERFLOWMETHOD_OFFSET))(nullptr);
		}

		::System::Void set_overflowMethod(Overflow* arg)
		{
			((::System::Void(*)(Overflow*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_OVERFLOWMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_lineWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_LINEWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_lineWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_LINEWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_lineHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_LINEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_lineHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_LINEHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_multiLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MULTILINE_OFFSET))(nullptr);
		}

		::System::Void set_multiLine(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MULTILINE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_localCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_LOCALCORNERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_worldCorners()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_WORLDCORNERS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector4* get_drawingDimensions()
		{
			return ((::UnityEngine::Vector4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_DRAWINGDIMENSIONS_OFFSET))(nullptr);
		}

		::System::Int32 get_maxLineCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MAXLINECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_maxLineCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MAXLINECOUNT_OFFSET))(arg, nullptr);
		}

		Effect* get_effectStyle()
		{
			return ((Effect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTSTYLE_OFFSET))(nullptr);
		}

		::System::Void set_effectStyle(Effect* arg)
		{
			((::System::Void(*)(Effect*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_EFFECTSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_effectColor()
		{
			return ((::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_effectColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_EFFECTCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_effectDistance()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_EFFECTDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_effectDistance(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_EFFECTDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_quadsPerCharacter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_QUADSPERCHARACTER_OFFSET))(nullptr);
		}

		::System::Boolean get_shrinkToFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_SHRINKTOFIT_OFFSET))(nullptr);
		}

		::System::Void set_shrinkToFit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_SHRINKTOFIT_OFFSET))(arg, nullptr);
		}

		::System::String* get_processedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_PROCESSEDTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_printedSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_PRINTEDSIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_localSize()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_LOCALSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_ISVALID_OFFSET))(nullptr);
		}

		Modifier* get_modifier()
		{
			return ((Modifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_MODIFIER_OFFSET))(nullptr);
		}

		::System::Void set_modifier(Modifier* arg)
		{
			((::System::Void(*)(Modifier*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_MODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void OnInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONINIT_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetActiveFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETACTIVEFONT_OFFSET))(arg, nullptr);
		}

		::System::String* get_printedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_PRINTEDTEXT_OFFSET))(nullptr);
		}

		::System::Void OnFontChanged(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONFONTCHANGED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSides(::UnityEngine::Transform* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETSIDES_OFFSET))(arg, nullptr);
		}

		::System::Void UpgradeFrom265()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_UPGRADEFROM265_OFFSET))(nullptr);
		}

		::System::Void OnAnchor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONANCHOR_OFFSET))(nullptr);
		}

		::System::Void ProcessAndRequest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_PROCESSANDREQUEST_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONSTART_OFFSET))(nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Void ProcessText(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_PROCESSTEXT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MakePixelPerfect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_MAKEPIXELPERFECT_OFFSET))(nullptr);
		}

		::System::Void AssumeNaturalSize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ASSUMENATURALSIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetCharacterIndex(::UnityEngine::Vector3* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETCHARACTERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharacterIndex(::UnityEngine::Vector2* arg)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETCHARACTERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharacterIndexAtPosition(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETCHARACTERINDEXATPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetCharacterIndexAtPosition(::UnityEngine::Vector2* arg, ::System::Boolean arg2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETCHARACTERINDEXATPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetWordAtPosition(::UnityEngine::Vector3* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETWORDATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* GetWordAtPosition(::UnityEngine::Vector2* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETWORDATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* GetWordAtCharacterIndex(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETWORDATCHARACTERINDEX_OFFSET))(arg, nullptr);
		}

		::System::String* GetUrlAtPosition(::UnityEngine::Vector3* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETURLATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* GetUrlAtPosition(::UnityEngine::Vector2* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETURLATPOSITION_OFFSET))(arg, nullptr);
		}

		::System::String* GetUrlAtCharacterIndex(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETURLATCHARACTERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetCharacterIndex(::System::Int32 arg, ::UnityEngine::KeyCode* arg2)
		{
			return ((::System::Int32(*)(::System::Int32, ::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GETCHARACTERINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrintOverlay(::System::Int32 arg, ::System::Int32 arg2, UIGeometry* arg3, UIGeometry* arg4, ::UnityEngine::Color* arg5, ::UnityEngine::Color* arg6)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, UIGeometry*, UIGeometry*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_PRINTOVERLAY_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean get_premultipliedAlphaShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_PREMULTIPLIEDALPHASHADER_OFFSET))(nullptr);
		}

		::System::Boolean get_packedFontShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_PACKEDFONTSHADER_OFFSET))(nullptr);
		}

		::System::Void OnFill(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONFILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::UnityEngine::Vector2* ApplyOffset(Il2CppObject* arg, ::System::Int32 arg2)
		{
			return ((::UnityEngine::Vector2*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_APPLYOFFSET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyShadow(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Single arg6, ::System::Single arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_APPLYSHADOW_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void ApplyShadow(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Single arg6, ::System::Single arg7, ::UnityEngine::Color* arg8)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_APPLYSHADOW_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Boolean ApplyShadowAndGetOutline(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Single arg9, ::System::Single arg10, ::System::Single arg11, ::System::Single arg12)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_APPLYSHADOWANDGETOUTLINE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Int32 CalculateOffsetToFit(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_CALCULATEOFFSETTOFIT_OFFSET))(str, nullptr);
		}

		::System::Void SetCurrentProgress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETCURRENTPROGRESS_OFFSET))(nullptr);
		}

		::System::Void SetCurrentPercent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETCURRENTPERCENT_OFFSET))(nullptr);
		}

		::System::Void SetCurrentSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETCURRENTSELECTION_OFFSET))(nullptr);
		}

		::System::Boolean Wrap(::System::String* str, ::System::String&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_WRAP_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean Wrap(::System::String* str, ::System::String&* arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_WRAP_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void UpdateNGUIText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_UPDATENGUITEXT_OFFSET))(nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_Hash()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_GET_HASH_OFFSET))(nullptr);
		}

		::System::Void set_Hash(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SET_HASH_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETTEXT_OFFSET))(nullptr);
		}

		::System::Void SetTextForWidgesPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETTEXTFORWIDGESPOSITION_OFFSET))(nullptr);
		}

		::System::Void CheckAndDisplayError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_CHECKANDDISPLAYERROR_OFFSET))(nullptr);
		}

		::System::String* ProcessKiloFormat(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_PROCESSKILOFORMAT_OFFSET))(str, nullptr);
		}

		::System::String* ConvertToKiloFormat(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_CONVERTTOKILOFORMAT_OFFSET))(str, nullptr);
		}

		::System::String* AddCommasToNumbersInText(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_ADDCOMMASTONUMBERSINTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetFontLocalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETFONTLOCALIZE_OFFSET))(nullptr);
		}

		::System::Void SetFontLocalize(::FlatData::Language* arg)
		{
			((::System::Void(*)(::FlatData::Language*, ::PVOID))((::PBYTE)hIl2Cpp + UILABEL_SETFONTLOCALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckChangeFont()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_CHECKCHANGEFONT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABEL_.CCTOR_OFFSET))(nullptr);
		}

	};

