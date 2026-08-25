#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAssetUtilities; }
namespace TMPro { class TMP_SpriteCharacter; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_Character; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class FontStyles; }
namespace TMPro { class FontWeight; }

#define TMPRO_TMP_FONTASSETUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA132AA0)
#define TMPRO_TMP_FONTASSETUTILITIES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA132AB0)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA132B00)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET UNITYSDK_OFFSET(0xA132D10)
#define TMPRO_TMP_FONTASSETUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA133300)
#define TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA133380)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET UNITYSDK_OFFSET(0xA133730)
#define TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA132EA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontAssetUtilities_TypeDefinitionIndex = 33672;

	class TMP_FontAssetUtilities : public Il2CppObject
	{
	public:
		::TMPro::TMP_FontAssetUtilities* s_Instance; // 0x0
		Il2CppObject* k_SearchedAssets; // 0x8
		::System::Boolean k_IsFontEngineInitialized; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::TMPro::TMP_FontAssetUtilities* get_instance()
		{
			return (return (::TMPro::TMP_FontAssetUtilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GET_INSTANCE_OFFSET))(nullptr);
		}

		::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset_Internal(::System::UInt32 arg, ::TMPro::TMP_SpriteAsset* arg, ::System::Boolean arg)
		{
			return (return (::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::TMPro::TMP_Character* GetCharacterFromFontAsset(::System::UInt32 arg, ::TMPro::TMP_FontAsset* arg, ::System::Boolean arg, ::TMPro::FontStyles* arg, ::TMPro::FontWeight* arg, bool&* arg)
		{
			return (return (::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles*, ::TMPro::FontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::TMPro::TMP_SpriteCharacter* GetSpriteCharacterFromSpriteAsset(::System::UInt32 arg, ::TMPro::TMP_SpriteAsset* arg, ::System::Boolean arg)
		{
			return (return (::TMPro::TMP_SpriteCharacter*(*)(::System::UInt32, ::TMPro::TMP_SpriteAsset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETSPRITECHARACTERFROMSPRITEASSET_OFFSET))(arg, arg, arg, nullptr);
		}

		::TMPro::TMP_Character* GetCharacterFromFontAssets(::System::UInt32 arg, ::TMPro::TMP_FontAsset* arg, Il2CppObject* arg, ::System::Boolean arg, ::TMPro::FontStyles* arg, ::TMPro::FontWeight* arg, bool&* arg)
		{
			return (return (::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, Il2CppObject*, ::System::Boolean, ::TMPro::FontStyles*, ::TMPro::FontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSETS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_Character* GetCharacterFromFontAsset_Internal(::System::UInt32 arg, ::TMPro::TMP_FontAsset* arg, ::System::Boolean arg, ::TMPro::FontStyles* arg, ::TMPro::FontWeight* arg, bool&* arg)
		{
			return (return (::TMPro::TMP_Character*(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::System::Boolean, ::TMPro::FontStyles*, ::TMPro::FontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTASSETUTILITIES_GETCHARACTERFROMFONTASSET_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

