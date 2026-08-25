#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Character&; }

#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0xA132630)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0xA1329B0)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA132720)
#define TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1329C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontUtilities_TypeDefinitionIndex = 33671;

	class TMP_FontUtilities : public Il2CppObject
	{
	public:
		Il2CppObject* k_searchedFontAssets; // 0x0

		::TMPro::TMP_FontAsset* SearchForCharacter(::TMPro::TMP_FontAsset* arg, ::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::TMPro::TMP_FontAsset* SearchForCharacter(Il2CppObject* arg, ::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(Il2CppObject*, ::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::TMPro::TMP_FontAsset* SearchForCharacterInternal(::TMPro::TMP_FontAsset* arg, ::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(::TMPro::TMP_FontAsset*, ::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::TMPro::TMP_FontAsset* SearchForCharacterInternal(Il2CppObject* arg, ::System::UInt32 arg, ::TMPro::TMP_Character&* arg)
		{
			return (return (::TMPro::TMP_FontAsset*(*)(Il2CppObject*, ::System::UInt32, ::TMPro::TMP_Character&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTUTILITIES_SEARCHFORCHARACTERINTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

