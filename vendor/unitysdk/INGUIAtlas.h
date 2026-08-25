#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
class INGUIAtlas;
class UISpriteData;

#define INGUIATLAS_GET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_SET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_SET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_SET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_REFERENCES_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIATLAS_SORTALPHABETICALLY_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int INGUIAtlas_TypeDefinitionIndex = 181;

	class INGUIAtlas : public Il2CppObject
	{
	public:
		::UnityEngine::Material* get_spriteMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_SPRITEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_spriteMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_SET_SPRITEMATERIAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_spriteList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_SPRITELIST_OFFSET))(nullptr);
		}

		::System::Void set_spriteList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_SET_SPRITELIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_pixelSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_SET_PIXELSIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		INGUIAtlas* get_replacement()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GET_REPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_replacement(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GETSPRITE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetListOfSprites()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GETLISTOFSPRITES_OFFSET))(nullptr);
		}

		Il2CppObject* GetListOfSprites(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_GETLISTOFSPRITES_OFFSET))(str, nullptr);
		}

		::System::Boolean References(INGUIAtlas* arg)
		{
			return ((::System::Boolean(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_REFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Void SortAlphabetically()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIATLAS_SORTALPHABETICALLY_OFFSET))(nullptr);
		}

	};

