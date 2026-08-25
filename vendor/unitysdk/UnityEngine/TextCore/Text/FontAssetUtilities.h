#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class Character; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class FontStyles; }
namespace UnityEngine::TextCore::Text { class TextFontWeight; }
namespace UnityEngine::TextCore::Text { class SpriteCharacter; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2D41E0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D42F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET UNITYSDK_OFFSET(0xA2D46F0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA2D48C0)
#define UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D4BC0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontAssetUtilities_TypeDefinitionIndex = 35567;

	class FontAssetUtilities : public Il2CppObject
	{
	public:
		Il2CppObject* k_SearchedAssets; // 0x0

		::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAsset(::System::UInt32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::System::Boolean arg, ::UnityEngine::TextCore::Text::FontStyles* arg, ::UnityEngine::TextCore::Text::TextFontWeight* arg, bool&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::Character*(*)(::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, ::System::Boolean, ::UnityEngine::TextCore::Text::FontStyles*, ::UnityEngine::TextCore::Text::TextFontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAsset_Internal(::System::UInt32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::System::Boolean arg, ::UnityEngine::TextCore::Text::FontStyles* arg, ::UnityEngine::TextCore::Text::TextFontWeight* arg, bool&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::Character*(*)(::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, ::System::Boolean, ::UnityEngine::TextCore::Text::FontStyles*, ::UnityEngine::TextCore::Text::TextFontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::Character* GetCharacterFromFontAssets(::System::UInt32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, Il2CppObject* arg, ::System::Boolean arg, ::UnityEngine::TextCore::Text::FontStyles* arg, ::UnityEngine::TextCore::Text::TextFontWeight* arg, bool&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::Character*(*)(::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, Il2CppObject*, ::System::Boolean, ::UnityEngine::TextCore::Text::FontStyles*, ::UnityEngine::TextCore::Text::TextFontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteCharacter* GetSpriteCharacterFromSpriteAsset(::System::UInt32 arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteCharacter*(*)(::System::UInt32, ::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(::System::UInt32 arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteCharacter*(*)(::System::UInt32, ::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

