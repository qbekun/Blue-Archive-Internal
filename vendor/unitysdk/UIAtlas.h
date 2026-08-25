#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
class Coordinates;
namespace UnityEngine { class Texture; }
class INGUIAtlas;
class UISpriteData;

#define UIATLAS_GET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x21CB3B0)
#define UIATLAS_SET_SPRITEMATERIAL_OFFSET UNITYSDK_OFFSET(0x21CB4C0)
#define UIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x21CBA60)
#define UIATLAS_GET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x21CBC50)
#define UIATLAS_SET_SPRITELIST_OFFSET UNITYSDK_OFFSET(0x21CCE90)
#define UIATLAS_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x21CCF70)
#define UIATLAS_GET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x21CD090)
#define UIATLAS_SET_PIXELSIZE_OFFSET UNITYSDK_OFFSET(0x21CD160)
#define UIATLAS_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21CB480)
#define UIATLAS_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21CD2A0)
#define UIATLAS_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x21CD4D0)
#define UIATLAS_MARKSPRITELISTASCHANGED_OFFSET UNITYSDK_OFFSET(0x21CD780)
#define UIATLAS_SORTALPHABETICALLY_OFFSET UNITYSDK_OFFSET(0x21CD850)
#define UIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x21CD970)
#define UIATLAS_GETLISTOFSPRITES_OFFSET UNITYSDK_OFFSET(0x21CDB40)
#define UIATLAS_REFERENCES_OFFSET UNITYSDK_OFFSET(0x21CDF60)
#define UIATLAS_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x21CB620)
#define UIATLAS_UPGRADE_OFFSET UNITYSDK_OFFSET(0x21CBD50)
#define UIATLAS_.CTOR_OFFSET UNITYSDK_OFFSET(0x21CE050)

	inline static constexpr unsigned int UIAtlas_TypeDefinitionIndex = 194;

	class UIAtlas : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x18
		Il2CppObject* mSprites; // 0x20
		::System::Single mPixelSize; // 0x28
		::UnityEngine::Object* mReplacement; // 0x30
		Coordinates* mCoordinates; // 0x38
		Il2CppObject* sprites; // 0x40
		::System::Int32 mPMA; // 0x48
		Il2CppObject* mSpriteIndices; // 0x50

		::UnityEngine::Material* get_spriteMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_SPRITEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_spriteMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_SET_SPRITEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		Il2CppObject* get_spriteList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_SPRITELIST_OFFSET))(nullptr);
		}

		::System::Void set_spriteList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_SET_SPRITELIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Single get_pixelSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_PIXELSIZE_OFFSET))(nullptr);
		}

		::System::Void set_pixelSize(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_SET_PIXELSIZE_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_replacement()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GET_REPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_replacement(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void MarkSpriteListAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_MARKSPRITELISTASCHANGED_OFFSET))(nullptr);
		}

		::System::Void SortAlphabetically()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_SORTALPHABETICALLY_OFFSET))(nullptr);
		}

		Il2CppObject* GetListOfSprites()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GETLISTOFSPRITES_OFFSET))(nullptr);
		}

		Il2CppObject* GetListOfSprites(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_GETLISTOFSPRITES_OFFSET))(str, nullptr);
		}

		::System::Boolean References(INGUIAtlas* arg)
		{
			return ((::System::Boolean(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_REFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean Upgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_UPGRADE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIATLAS_.CTOR_OFFSET))(nullptr);
		}

	};

