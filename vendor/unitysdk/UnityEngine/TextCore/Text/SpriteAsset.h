#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore { class FaceInfo; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine::TextCore::Text { class TextSettings; }

#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA2D7DA0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_FACEINFO_OFFSET UNITYSDK_OFFSET(0xA2D7DE0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITESHEET_OFFSET UNITYSDK_OFFSET(0xA2D7E20)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITESHEET_OFFSET UNITYSDK_OFFSET(0xA2D7E30)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2D7E50)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2D83E0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA2D4B90)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0xA2D8400)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2D8420)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2D8430)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA2D8450)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET UNITYSDK_OFFSET(0xA2D7E80)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D8470)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET UNITYSDK_OFFSET(0xA2D84F0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET UNITYSDK_OFFSET(0xA2D8580)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET UNITYSDK_OFFSET(0xA2D8620)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D8840)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D89B0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2D8AB0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D8F10)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D90A0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTGLYPHTABLE_OFFSET UNITYSDK_OFFSET(0xA2D9190)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTCHARACTERTABLE_OFFSET UNITYSDK_OFFSET(0xA2D9320)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET UNITYSDK_OFFSET(0xA2D94B0)
#define UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D94D0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int SpriteAsset_TypeDefinitionIndex = 35579;

	class SpriteAsset : public Il2CppObject
	{
	public:
		Il2CppObject* m_NameLookup; // 0x38
		Il2CppObject* m_GlyphIndexLookup; // 0x40
		::UnityEngine::TextCore::FaceInfo* m_FaceInfo; // 0x48
		::UnityEngine::Texture* m_SpriteAtlasTexture; // 0xA8
		Il2CppObject* m_SpriteCharacterTable; // 0xB0
		Il2CppObject* m_SpriteCharacterLookup; // 0xB8
		Il2CppObject* m_SpriteGlyphTable; // 0xC0
		Il2CppObject* m_SpriteGlyphLookup; // 0xC8
		Il2CppObject* fallbackSpriteAssets; // 0xD0
		::System::Boolean m_IsSpriteAssetLookupTablesDirty; // 0xD8
		Il2CppObject* k_searchedSpriteAssets; // 0x0

		::UnityEngine::TextCore::FaceInfo* get_faceInfo()
		{
			return (return (::UnityEngine::TextCore::FaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_FACEINFO_OFFSET))(nullptr);
		}

		::System::Void set_faceInfo(::UnityEngine::TextCore::FaceInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::FaceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_FACEINFO_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_spriteSheet()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITESHEET_OFFSET))(nullptr);
		}

		::System::Void set_spriteSheet(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITESHEET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteCharacterTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITECHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteCharacterTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITECHARACTERTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteCharacterLookupTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteCharacterLookupTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITECHARACTERLOOKUPTABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteGlyphTable()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GET_SPRITEGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void set_spriteGlyphTable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SET_SPRITEGLYPHTABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void UpdateLookupTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_UPDATELOOKUPTABLES_OFFSET))(nullptr);
		}

		::System::Int32 GetSpriteIndexFromHashcode(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSpriteIndexFromUnicode(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMUNICODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSpriteIndexFromName(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_GETSPRITEINDEXFROMNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicode(::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicodeInternal(Il2CppObject* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(Il2CppObject*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByUnicodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::UInt32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::UInt32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYUNICODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCode(::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg, ::UnityEngine::TextCore::Text::TextSettings* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Int32, ::System::Boolean, int32_t&*, ::UnityEngine::TextCore::Text::TextSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCodeInternal(Il2CppObject* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(Il2CppObject*, ::System::Int32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::SpriteAsset* SearchForSpriteByHashCodeInternal(::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::Int32 arg, ::System::Boolean arg, int32_t&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::SpriteAsset*(*)(::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Int32, ::System::Boolean, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SEARCHFORSPRITEBYHASHCODEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SortGlyphTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTGLYPHTABLE_OFFSET))(nullptr);
		}

		::System::Void SortCharacterTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTCHARACTERTABLE_OFFSET))(nullptr);
		}

		::System::Void SortGlyphAndCharacterTables()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_SORTGLYPHANDCHARACTERTABLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_SPRITEASSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

