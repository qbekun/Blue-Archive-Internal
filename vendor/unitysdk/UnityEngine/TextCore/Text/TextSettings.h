#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine::TextCore::Text { class TextStyleSheet; }
namespace UnityEngine::TextCore::Text { class UnicodeLineBreakingRules; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2E1E30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA2E1E40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2E1E50)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2E1E60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xA2E1E70)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSETPATH_OFFSET UNITYSDK_OFFSET(0xA2E1E80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0xA2E1E90)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKFONTASSETS_OFFSET UNITYSDK_OFFSET(0xA2E1EA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0xA2E1EB0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MATCHMATERIALPRESET_OFFSET UNITYSDK_OFFSET(0xA2E1EC0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGCHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0xA2E1ED0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGCHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0xA2E1EE0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA2E1EF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_CLEARDYNAMICDATAONBUILD_OFFSET UNITYSDK_OFFSET(0xA2E1F00)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA2E1F10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA2E1F20)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0xA2E1F30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSETPATH_OFFSET UNITYSDK_OFFSET(0xA2E1F40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKSPRITEASSETS_OFFSET UNITYSDK_OFFSET(0xA2E1F50)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKSPRITEASSETS_OFFSET UNITYSDK_OFFSET(0xA2E1F60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGSPRITECHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0xA2E1F70)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGSPRITECHARACTERUNICODE_OFFSET UNITYSDK_OFFSET(0xA2E1F80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA2E1F90)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSTYLESHEET_OFFSET UNITYSDK_OFFSET(0xA2E1FA0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xA2E1FB0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_STYLESHEETSRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xA2E1FC0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0xA2E1FD0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET UNITYSDK_OFFSET(0xA2E1FE0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA2E1FF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_LINEBREAKINGRULES_OFFSET UNITYSDK_OFFSET(0xA2E24C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DISPLAYWARNINGS_OFFSET UNITYSDK_OFFSET(0xA2E24D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DISPLAYWARNINGS_OFFSET UNITYSDK_OFFSET(0xA2E24E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_INITIALIZEFONTREFERENCELOOKUP_OFFSET UNITYSDK_OFFSET(0xA2E24F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GETCACHEDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E2720)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E2AE0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextSettings_TypeDefinitionIndex = 35611;

	class TextSettings : public Il2CppObject
	{
	public:
		::System::String* m_Version; // 0x18
		::UnityEngine::TextCore::Text::FontAsset* m_DefaultFontAsset; // 0x20
		::System::String* m_DefaultFontAssetPath; // 0x28
		Il2CppObject* m_FallbackFontAssets; // 0x30
		::System::Boolean m_MatchMaterialPreset; // 0x38
		::System::Int32 m_MissingCharacterUnicode; // 0x3C
		::System::Boolean m_ClearDynamicDataOnBuild; // 0x40
		::UnityEngine::TextCore::Text::SpriteAsset* m_DefaultSpriteAsset; // 0x48
		::System::String* m_DefaultSpriteAssetPath; // 0x50
		Il2CppObject* m_FallbackSpriteAssets; // 0x58
		::System::UInt32 m_MissingSpriteCharacterUnicode; // 0x60
		::UnityEngine::TextCore::Text::TextStyleSheet* m_DefaultStyleSheet; // 0x68
		::System::String* m_StyleSheetsResourcePath; // 0x70
		::System::String* m_DefaultColorGradientPresetsPath; // 0x78
		::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* m_UnicodeLineBreakingRules; // 0x80
		::System::Boolean m_DisplayWarnings; // 0x88
		Il2CppObject* m_FontLookup; // 0x90
		Il2CppObject* m_FontReferences; // 0x98

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_VERSION_OFFSET))(str, nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* get_defaultFontAsset()
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSET_OFFSET))(nullptr);
		}

		::System::Void set_defaultFontAsset(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSET_OFFSET))(arg, nullptr);
		}

		::System::String* get_defaultFontAssetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTFONTASSETPATH_OFFSET))(nullptr);
		}

		::System::Void set_defaultFontAssetPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTFONTASSETPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_fallbackFontAssets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKFONTASSETS_OFFSET))(nullptr);
		}

		::System::Void set_fallbackFontAssets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKFONTASSETS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_matchMaterialPreset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MATCHMATERIALPRESET_OFFSET))(nullptr);
		}

		::System::Void set_matchMaterialPreset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MATCHMATERIALPRESET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_missingCharacterUnicode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGCHARACTERUNICODE_OFFSET))(nullptr);
		}

		::System::Void set_missingCharacterUnicode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGCHARACTERUNICODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_clearDynamicDataOnBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_CLEARDYNAMICDATAONBUILD_OFFSET))(nullptr);
		}

		::System::Void set_clearDynamicDataOnBuild(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_CLEARDYNAMICDATAONBUILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* get_defaultSpriteAsset()
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSET_OFFSET))(nullptr);
		}

		::System::Void set_defaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSET_OFFSET))(arg, nullptr);
		}

		::System::String* get_defaultSpriteAssetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSPRITEASSETPATH_OFFSET))(nullptr);
		}

		::System::Void set_defaultSpriteAssetPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSPRITEASSETPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_fallbackSpriteAssets()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_FALLBACKSPRITEASSETS_OFFSET))(nullptr);
		}

		::System::Void set_fallbackSpriteAssets(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_FALLBACKSPRITEASSETS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_missingSpriteCharacterUnicode()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_MISSINGSPRITECHARACTERUNICODE_OFFSET))(nullptr);
		}

		::System::Void set_missingSpriteCharacterUnicode(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_MISSINGSPRITECHARACTERUNICODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextStyleSheet* get_defaultStyleSheet()
		{
			return (return (::UnityEngine::TextCore::Text::TextStyleSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTSTYLESHEET_OFFSET))(nullptr);
		}

		::System::Void set_defaultStyleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextStyleSheet*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTSTYLESHEET_OFFSET))(arg, nullptr);
		}

		::System::String* get_styleSheetsResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_STYLESHEETSRESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Void set_styleSheetsResourcePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_STYLESHEETSRESOURCEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_defaultColorGradientPresetsPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))(nullptr);
		}

		::System::Void set_defaultColorGradientPresetsPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DEFAULTCOLORGRADIENTPRESETSPATH_OFFSET))(str, nullptr);
		}

		::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* get_lineBreakingRules()
		{
			return (return (::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_LINEBREAKINGRULES_OFFSET))(nullptr);
		}

		::System::Void set_lineBreakingRules(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_LINEBREAKINGRULES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_displayWarnings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GET_DISPLAYWARNINGS_OFFSET))(nullptr);
		}

		::System::Void set_displayWarnings(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_SET_DISPLAYWARNINGS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeFontReferenceLookup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_INITIALIZEFONTREFERENCELOOKUP_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::Text::FontAsset* GetCachedFontAssetInternal(::UnityEngine::Font* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontAsset*(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_GETCACHEDFONTASSETINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

