#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_Settings; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Vector2; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_StyleSheet; }
namespace UnityEngine { class TextAsset; }

#define TMPRO_TMP_SETTINGS_GET_ENABLEWORDWRAPPING_OFFSET UNITYSDK_OFFSET(0xA174FA0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0xA175090)
#define TMPRO_TMP_SETTINGS_GET_MISSINGGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0xA1750B0)
#define TMPRO_TMP_SETTINGS_GETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA1750D0)
#define TMPRO_TMP_SETTINGS_SET_ISTEXTOBJECTSCALESTATIC_OFFSET UNITYSDK_OFFSET(0xA175140)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROTEXTCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0xA175160)
#define TMPRO_TMP_SETTINGS_GET_ENABLEPARSEESCAPECHARACTERS_OFFSET UNITYSDK_OFFSET(0xA175180)
#define TMPRO_TMP_SETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA1751A0)
#define TMPRO_TMP_SETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA1751C0)
#define TMPRO_TMP_SETTINGS_GET_ENABLETINTALLSPRITES_OFFSET UNITYSDK_OFFSET(0xA1751F0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0xA175210)
#define TMPRO_TMP_SETTINGS_GET_ENABLEEMOJISUPPORT_OFFSET UNITYSDK_OFFSET(0xA175230)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROUITEXTCONTAINERSIZE_OFFSET UNITYSDK_OFFSET(0xA175250)
#define TMPRO_TMP_SETTINGS_GET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA175270)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA175410)
#define TMPRO_TMP_SETTINGS_GET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0xA175430)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMAXRATIO_OFFSET UNITYSDK_OFFSET(0xA175450)
#define TMPRO_TMP_SETTINGS_GET_WARNINGSDISABLED_OFFSET UNITYSDK_OFFSET(0xA175470)
#define TMPRO_TMP_SETTINGS_GET_FOLLOWINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA175490)
#define TMPRO_TMP_SETTINGS_GET_ENABLEEXTRAPADDING_OFFSET UNITYSDK_OFFSET(0xA1754B0)
#define TMPRO_TMP_SETTINGS_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA1754D0)
#define TMPRO_TMP_SETTINGS_GET_LEADINGCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA1754F0)
#define TMPRO_TMP_SETTINGS_GETCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA175510)
#define TMPRO_TMP_SETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA174FC0)
#define TMPRO_TMP_SETTINGS_LOADDEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0xA175610)
#define TMPRO_TMP_SETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA175710)
#define TMPRO_TMP_SETTINGS_SET_MISSINGCHARACTERSPRITEUNICODE_OFFSET UNITYSDK_OFFSET(0xA175720)
#define TMPRO_TMP_SETTINGS_GET_MISSINGCHARACTERSPRITEUNICODE_OFFSET UNITYSDK_OFFSET(0xA175740)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA175760)
#define TMPRO_TMP_SETTINGS_GET_ENABLERAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0xA175780)
#define TMPRO_TMP_SETTINGS_SET_MISSINGGLYPHCHARACTER_OFFSET UNITYSDK_OFFSET(0xA1757A0)
#define TMPRO_TMP_SETTINGS_SET_ENABLEEMOJISUPPORT_OFFSET UNITYSDK_OFFSET(0xA1757C0)
#define TMPRO_TMP_SETTINGS_GET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0xA1757E0)
#define TMPRO_TMP_SETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA175800)
#define TMPRO_TMP_SETTINGS_LOADLINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA1752B0)
#define TMPRO_TMP_SETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xA175840)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xA175860)
#define TMPRO_TMP_SETTINGS_GET_ISTEXTOBJECTSCALESTATIC_OFFSET UNITYSDK_OFFSET(0xA175880)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMINRATIO_OFFSET UNITYSDK_OFFSET(0xA1758A0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0xA1758C0)
#define TMPRO_TMP_SETTINGS_GETSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA1758E0)
#define TMPRO_TMP_SETTINGS_GET_DEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0xA175960)
#define TMPRO_TMP_SETTINGS_GET_GETFONTFEATURESATRUNTIME_OFFSET UNITYSDK_OFFSET(0xA175980)
#define TMPRO_TMP_SETTINGS_GETSETTINGS_OFFSET UNITYSDK_OFFSET(0xA1759A0)
#define TMPRO_TMP_SETTINGS_GETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA175A10)
#define TMPRO_TMP_SETTINGS_GET_ENABLEKERNING_OFFSET UNITYSDK_OFFSET(0xA175A80)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Settings_TypeDefinitionIndex = 33717;

	class TMP_Settings : public Il2CppObject
	{
	public:
		::TMPro::TMP_Settings* s_Instance; // 0x0
		::System::Boolean m_enableWordWrapping; // 0x18
		::System::Boolean m_enableKerning; // 0x19
		::System::Boolean m_enableExtraPadding; // 0x1A
		::System::Boolean m_enableTintAllSprites; // 0x1B
		::System::Boolean m_enableParseEscapeCharacters; // 0x1C
		::System::Boolean m_EnableRaycastTarget; // 0x1D
		::System::Boolean m_GetFontFeaturesAtRuntime; // 0x1E
		::System::Int32 m_missingGlyphCharacter; // 0x20
		::System::Boolean m_warningsDisabled; // 0x24
		::TMPro::TMP_FontAsset* m_defaultFontAsset; // 0x28
		::System::String* m_defaultFontAssetPath; // 0x30
		::System::Single m_defaultFontSize; // 0x38
		::System::Single m_defaultAutoSizeMinRatio; // 0x3C
		::System::Single m_defaultAutoSizeMaxRatio; // 0x40
		::UnityEngine::Vector2* m_defaultTextMeshProTextContainerSize; // 0x44
		::UnityEngine::Vector2* m_defaultTextMeshProUITextContainerSize; // 0x4C
		::System::Boolean m_autoSizeTextContainer; // 0x54
		::System::Boolean m_IsTextObjectScaleStatic; // 0x55
		Il2CppObject* m_fallbackFontAssets; // 0x58
		::System::Boolean m_matchMaterialPreset; // 0x60
		::TMPro::TMP_SpriteAsset* m_defaultSpriteAsset; // 0x68
		::System::String* m_defaultSpriteAssetPath; // 0x70
		::System::Boolean m_enableEmojiSupport; // 0x78
		::System::UInt32 m_MissingCharacterSpriteUnicode; // 0x7C
		::System::String* m_defaultColorGradientPresetsPath; // 0x80
		::TMPro::TMP_StyleSheet* m_defaultStyleSheet; // 0x88
		::System::String* m_StyleSheetsResourcePath; // 0x90
		::UnityEngine::TextAsset* m_leadingCharacters; // 0x98
		::UnityEngine::TextAsset* m_followingCharacters; // 0xA0
		LineBreakingTable* m_linebreakingRules; // 0xA8
		::System::Boolean m_UseModernHangulLineBreakingRules; // 0xB0

		::System::Boolean get_enableWordWrapping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEWORDWRAPPING_OFFSET))(nullptr);
		}

		::TMPro::TMP_FontAsset* get_defaultFontAsset()
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSET_OFFSET))(nullptr);
		}

		::System::Int32 get_missingGlyphCharacter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MISSINGGLYPHCHARACTER_OFFSET))(nullptr);
		}

		::TMPro::TMP_SpriteAsset* GetSpriteAsset()
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSPRITEASSET_OFFSET))(nullptr);
		}

		::System::Void set_isTextObjectScaleStatic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_ISTEXTOBJECTSCALESTATIC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_defaultTextMeshProTextContainerSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROTEXTCONTAINERSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_enableParseEscapeCharacters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEPARSEESCAPECHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean get_useModernHangulLineBreakingRules()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(nullptr);
		}

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Boolean get_enableTintAllSprites()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLETINTALLSPRITES_OFFSET))(nullptr);
		}

		::System::String* get_defaultSpriteAssetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_enableEmojiSupport()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEEMOJISUPPORT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_defaultTextMeshProUITextContainerSize()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTMESHPROUITEXTCONTAINERSIZE_OFFSET))(nullptr);
		}

		LineBreakingTable* get_linebreakingRules()
		{
			return (return (LineBreakingTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_LINEBREAKINGRULES_OFFSET))(nullptr);
		}

		::TMPro::TMP_SpriteAsset* get_defaultSpriteAsset()
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSPRITEASSET_OFFSET))(nullptr);
		}

		::System::Boolean get_matchMaterialPreset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MATCHMATERIALPRESET_OFFSET))(nullptr);
		}

		::System::Single get_defaultTextAutoSizingMaxRatio()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMAXRATIO_OFFSET))(nullptr);
		}

		::System::Boolean get_warningsDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_WARNINGSDISABLED_OFFSET))(nullptr);
		}

		::UnityEngine::TextAsset* get_followingCharacters()
		{
			return (return (::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_FOLLOWINGCHARACTERS_OFFSET))(nullptr);
		}

		::System::Boolean get_enableExtraPadding()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEEXTRAPADDING_OFFSET))(nullptr);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_AUTOSIZETEXTCONTAINER_OFFSET))(nullptr);
		}

		::UnityEngine::TextAsset* get_leadingCharacters()
		{
			return (return (::UnityEngine::TextAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_LEADINGCHARACTERS_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacters(::UnityEngine::TextAsset* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::TextAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETCHARACTERS_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_Settings* get_instance()
		{
			return (return (::TMPro::TMP_Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_INSTANCE_OFFSET))(nullptr);
		}

		::TMPro::TMP_Settings* LoadDefaultSettings()
		{
			return (return (::TMPro::TMP_Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_LOADDEFAULTSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_missingCharacterSpriteUnicode(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_MISSINGCHARACTERSPRITEUNICODE_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_missingCharacterSpriteUnicode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_MISSINGCHARACTERSPRITEUNICODE_OFFSET))(nullptr);
		}

		::TMPro::TMP_StyleSheet* get_defaultStyleSheet()
		{
			return (return (::TMPro::TMP_StyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTSTYLESHEET_OFFSET))(nullptr);
		}

		::System::Boolean get_enableRaycastTarget()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLERAYCASTTARGET_OFFSET))(nullptr);
		}

		::System::Void set_missingGlyphCharacter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_MISSINGGLYPHCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_enableEmojiSupport(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_ENABLEEMOJISUPPORT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_fallbackFontAssets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_FALLBACKFONTASSETS_OFFSET))(nullptr);
		}

		::System::Void set_useModernHangulLineBreakingRules(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_SET_USEMODERNHANGULLINEBREAKINGRULES_OFFSET))(arg, nullptr);
		}

		::System::Void LoadLinebreakingRules()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_LOADLINEBREAKINGRULES_OFFSET))(nullptr);
		}

		::System::String* get_styleSheetsResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET))(nullptr);
		}

		::System::String* get_defaultFontAssetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_isTextObjectScaleStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ISTEXTOBJECTSCALESTATIC_OFFSET))(nullptr);
		}

		::System::Single get_defaultTextAutoSizingMinRatio()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTTEXTAUTOSIZINGMINRATIO_OFFSET))(nullptr);
		}

		::System::String* get_defaultColorGradientPresetsPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))(nullptr);
		}

		::TMPro::TMP_StyleSheet* GetStyleSheet()
		{
			return (return (::TMPro::TMP_StyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSTYLESHEET_OFFSET))(nullptr);
		}

		::System::Single get_defaultFontSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_DEFAULTFONTSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_getFontFeaturesAtRuntime()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_GETFONTFEATURESATRUNTIME_OFFSET))(nullptr);
		}

		::TMPro::TMP_Settings* GetSettings()
		{
			return (return (::TMPro::TMP_Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETSETTINGS_OFFSET))(nullptr);
		}

		::TMPro::TMP_FontAsset* GetFontAsset()
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GETFONTASSET_OFFSET))(nullptr);
		}

		::System::Boolean get_enableKerning()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SETTINGS_GET_ENABLEKERNING_OFFSET))(nullptr);
		}

	};
}

