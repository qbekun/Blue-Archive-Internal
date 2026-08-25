#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture; }
class INGUIAtlas;
class UISpriteData;

#define NGUIATLAS_GET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x21C05A0)
#define NGUIATLAS_SET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x21C0760)
#define NGUIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x21C0DF0)
#define NGUIATLAS_GET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x21C1050)
#define NGUIATLAS_SET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x21C11A0)
#define NGUIATLAS_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x21C1300)
#define NGUIATLAS_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x21C14A0)
#define NGUIATLAS_SET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x21C15F0)
#define NGUIATLAS_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21C06E0)
#define NGUIATLAS_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21C17A0)
#define NGUIATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x21C19D0)
#define NGUIATLAS_MARKSPRITELISTASCHANGED_OFFSET UNITYSDK_OFFSET(0x21C1CF0)
#define NGUIATLAS_SORTALPHABETICALLY_OFFSET UNITYSDK_OFFSET(0x21C1DC0)
#define NGUIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x21C1EE0)
#define NGUIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x21C2110)
#define NGUIATLAS_REFERENCES_OFFSET UNITYSDK_OFFSET(0x21C2590)
#define NGUIATLAS_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x21C0930)
#define NGUIATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x21C2B10)

	inline static constexpr unsigned int NGUIAtlas_TypeDefinitionIndex = 184;

	class NGUIAtlas : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x18
		Il2CppObject* mSprites; // 0x20
		::System::Single mPixelSize; // 0x28
		::UnityEngine::Object* mReplacement; // 0x30
		::System::Int32 mPMA; // 0x38
		Il2CppObject* mSpriteIndices; // 0x40

		::UnityEngine::Material* get_spriteMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_SPRITEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_spriteMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_SET_SPRITEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		Il2CppObject* get_spriteList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_SPRITELIST_OFFSET))(nullptr);
		}

		::System::Void set_spriteList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_SET_SPRITELIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_pixelSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_SET_PIXELSIZE_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_replacement()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GET_REPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_replacement(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void MarkSpriteListAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_MARKSPRITELISTASCHANGED_OFFSET))(nullptr);
		}

		::System::Void SortAlphabetically()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_SORTALPHABETICALLY_OFFSET))(nullptr);
		}

		Il2CppObject* GetListOfSprites()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GETLISTOFSPRITES_OFFSET))(nullptr);
		}

		Il2CppObject* GetListOfSprites(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_GETLISTOFSPRITES_OFFSET))(str, nullptr);
		}

		::System::Boolean References(INGUIAtlas* arg)
		{
			return ((::System::Boolean(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_REFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIATLAS_.CTOR_OFFSET))(nullptr);
		}

	};

