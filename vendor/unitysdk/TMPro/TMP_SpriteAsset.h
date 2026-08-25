#pragma once
#include "../unitysdk.h"

namespace UnityEngine::TextCore { class FaceInfo; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Material; }
namespace TMPro { class TMP_SpriteAsset; }

#define TMPRO_TMP_SPRITEASSET_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA178C80)
#define TMPRO_TMP_SPRITEASSET_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA178C90)
#define TMPRO_TMP_SPRITEASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA178CA0)
#define TMPRO_TMP_SPRITEASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA178CE0)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA178BE0)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA1792C0)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA1792E0)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA179310)
#define TMPRO_TMP_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA179330)
#define TMPRO_TMP_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA179340)
#define TMPRO_TMP_SPRITEASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA179360)
#define TMPRO_TMP_SPRITEASSET_GETDEFAULTSPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA179A40)
#define TMPRO_TMP_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0xA178D20)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET UNITYSDK_OFFSET(0xA179B10)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET UNITYSDK_OFFSET(0xA179B90)
#define TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0xA179C20)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET UNITYSDK_OFFSET(0xA179DA0)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA17A010)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA17A180)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET UNITYSDK_OFFSET(0xA17A280)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA17A660)
#define TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA17A7D0)
#define TMPRO_TMP_SPRITEASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA17A8B0)
#define TMPRO_TMP_SPRITEASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA17AA40)
#define TMPRO_TMP_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET UNITYSDK_OFFSET(0xA17ABC0)
#define TMPRO_TMP_SPRITEASSET_UPGRADESPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA1793E0)
#define TMPRO_TMP_SPRITEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA17ACD0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_SpriteAsset_TypeDefinitionIndex = 33723;

	class TMP_SpriteAsset : public Il2CppObject
	{
	public:
		Il2CppObject* m_NameLookup; // 0x30
		Il2CppObject* m_GlyphIndexLookup; // 0x38
		::System::String* m_Version; // 0x40
		::UnityEngine::TextCore::FaceInfo* m_FaceInfo; // 0x48
		::UnityEngine::Texture* spriteSheet; // 0xA8
		Il2CppObject* m_SpriteCharacterTable; // 0xB0
		Il2CppObject* m_SpriteCharacterLookup; // 0xB8
		Il2CppObject* m_SpriteGlyphTable; // 0xC0
		Il2CppObject* m_SpriteGlyphLookup; // 0xC8
		Il2CppObject* spriteInfoList; // 0xD0
		Il2CppObject* fallbackSpriteAssets; // 0xD8
		::System::Boolean m_IsSpriteAssetLookupTablesDirty; // 0xE0
		Il2CppObject* k_searchedSpriteAssets; // 0x0

		::System::String* get_version()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_version(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_VERSION_OFFSET))(str, nullptr);
		}

		::UnityEngine::TextCore::FaceInfo* get_faceInfo()
		{
			return (return (::UnityEngine::TextCore::FaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_FACEINFO_OFFSET))(nullptr);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::FaceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_FACEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteCharacterTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteCharacterTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteCharacterLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteCharacterLookupTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteGlyphTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteGlyphTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetDefaultSpriteMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETDEFAULTSPRITEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void UpdateLookupTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET))(nullptr);
		}

		::System::Int32 GetSpriteIndexFromHashcode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSpriteIndexFromUnicode(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSpriteIndexFromName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET))(str, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicode(::TMPro::TMP_SpriteAsset* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(Il2CppObject* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(Il2CppObject*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByUnicodeInternal(::TMPro::TMP_SpriteAsset* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCode(::TMPro::TMP_SpriteAsset* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(Il2CppObject*, ::System::Int32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::TMPro::TMP_SpriteAsset* SearchForSpriteByHashCodeInternal(::TMPro::TMP_SpriteAsset* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::TMPro::TMP_SpriteAsset*(*)(::TMPro::TMP_SpriteAsset*, ::System::Int32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SortGlyphTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void SortCharacterTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTCHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void SortGlyphAndCharacterTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET))(nullptr);
		}

		::System::Void UpgradeSpriteAsset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_UPGRADESPRITEASSET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_SPRITEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

