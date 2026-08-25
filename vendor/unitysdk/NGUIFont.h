#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Rect; }
class BMFont;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
class UISpriteData;
class BMSymbol;
class INGUIFont;
namespace UnityEngine { class Texture2D; }
class INGUIAtlas;

#define NGUIFONT_GETSYMBOL_OFFSET UNITYSDK_OFFSET(0x21C2CB0)
#define NGUIFONT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x21C2F80)
#define NGUIFONT_GET_FINALFONT_OFFSET UNITYSDK_OFFSET(0x21C3180)
#define NGUIFONT_GET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x21C3250)
#define NGUIFONT_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x21C3390)
#define NGUIFONT_GET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x21C3820)
#define NGUIFONT_GET_BMFONT_OFFSET UNITYSDK_OFFSET(0x21C3980)
#define NGUIFONT_UPDATEUVRECT_OFFSET UNITYSDK_OFFSET(0x21C3AD0)
#define NGUIFONT_GET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x21C2E30)
#define NGUIFONT_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x21C43A0)
#define NGUIFONT_TRIM_OFFSET UNITYSDK_OFFSET(0x21C3D10)
#define NGUIFONT_MATCHSYMBOL_OFFSET UNITYSDK_OFFSET(0x21C46C0)
#define NGUIFONT_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x21C49E0)
#define NGUIFONT_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x21C4B80)
#define NGUIFONT_GET_HASSYMBOLS_OFFSET UNITYSDK_OFFSET(0x21C4D30)
#define NGUIFONT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x21C4E90)
#define NGUIFONT_REFERENCES_OFFSET UNITYSDK_OFFSET(0x21C4F10)
#define NGUIFONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x21C5050)
#define NGUIFONT_GET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x21C5350)
#define NGUIFONT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x21C54B0)
#define NGUIFONT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x21C4500)
#define NGUIFONT_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x21C54C0)
#define NGUIFONT_GET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x21C59B0)
#define NGUIFONT_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x21C5670)
#define NGUIFONT_SET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x21C5B10)
#define NGUIFONT_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x21C5C60)
#define NGUIFONT_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x21C5D10)
#define NGUIFONT_SET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x21C5ED0)
#define NGUIFONT_SET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x21C6020)
#define NGUIFONT_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x21C3520)
#define NGUIFONT_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21C6170)
#define NGUIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET UNITYSDK_OFFSET(0x21C63D0)
#define NGUIFONT_SET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x21C66A0)
#define NGUIFONT_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x21C2830)
#define NGUIFONT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x21C6800)
#define NGUIFONT_RENAMESYMBOL_OFFSET UNITYSDK_OFFSET(0x21C6810)
#define NGUIFONT_USESSPRITE_OFFSET UNITYSDK_OFFSET(0x21C6990)
#define NGUIFONT_GET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x21C6A90)
#define NGUIFONT_SET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x21C6BE0)
#define NGUIFONT_SET_BMFONT_OFFSET UNITYSDK_OFFSET(0x21C6D50)
#define NGUIFONT_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x21C26D0)
#define NGUIFONT_REMOVESYMBOL_OFFSET UNITYSDK_OFFSET(0x21C6EB0)
#define NGUIFONT_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x21C3100)
#define NGUIFONT_SET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x21C7050)
#define NGUIFONT_GET_PACKEDFONTSHADER_OFFSET UNITYSDK_OFFSET(0x21C7230)
#define NGUIFONT_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x21C74D0)
#define NGUIFONT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21C74E0)

	inline static constexpr unsigned int NGUIFont_TypeDefinitionIndex = 186;

	class NGUIFont : public Il2CppObject
	{
	public:
		::UnityEngine::Material* mMat; // 0x18
		::UnityEngine::Rect* mUVRect; // 0x20
		BMFont* mFont; // 0x30
		::UnityEngine::Object* mAtlas; // 0x38
		::UnityEngine::Object* mReplacement; // 0x40
		Il2CppObject* mSymbols; // 0x48
		::UnityEngine::Font* mDynamicFont; // 0x50
		::System::Int32 mDynamicFontSize; // 0x58
		::UnityEngine::FontStyle* mDynamicFontStyle; // 0x5C
		UISpriteData* mSprite; // 0x60
		::System::Int32 mPMA; // 0x68
		::System::Int32 mPacked; // 0x6C

		BMSymbol* GetSymbol(::System::String* str, ::System::Boolean arg)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GETSYMBOL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_ISDYNAMIC_OFFSET))(nullptr);
		}

		INGUIFont* get_finalFont()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_FINALFONT_OFFSET))(nullptr);
		}

		::UnityEngine::FontStyle* get_dynamicFontStyle()
		{
			return ((::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_DYNAMICFONTSTYLE_OFFSET))(nullptr);
		}

		::System::Void AddSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_ADDSYMBOL_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 get_defaultSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_DEFAULTSIZE_OFFSET))(nullptr);
		}

		BMFont* get_bmFont()
		{
			return ((BMFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_BMFONT_OFFSET))(nullptr);
		}

		::System::Void UpdateUVRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_UPDATEUVRECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_symbols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_SYMBOLS_OFFSET))(nullptr);
		}

		::System::String* get_spriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Void Trim()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_TRIM_OFFSET))(nullptr);
		}

		BMSymbol* MatchSymbol(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_MATCHSYMBOL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void set_spriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasSymbols()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_HASSYMBOLS_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean References(INGUIFont* arg)
		{
			return ((::System::Boolean(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_REFERENCES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_texWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_TEXWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Void set_uvRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_UVRECT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_texHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_TEXHEIGHT_OFFSET))(nullptr);
		}

		UISpriteData* get_sprite()
		{
			return ((UISpriteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void set_texWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_TEXWIDTH_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GETSPRITE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rect* get_uvRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_UVRECT_OFFSET))(nullptr);
		}

		::System::Void set_texHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_TEXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_DEFAULTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_MARKASCHANGED_OFFSET))(nullptr);
		}

		::System::Void set_replacement(INGUIFont* arg)
		{
			((::System::Void(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_premultipliedAlphaShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET))(nullptr);
		}

		::System::Void set_symbols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_SYMBOLS_OFFSET))(arg, nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_size(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void RenameSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_RENAMESYMBOL_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean UsesSprite(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_USESSPRITE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Font* get_dynamicFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_DYNAMICFONT_OFFSET))(nullptr);
		}

		::System::Void set_dynamicFontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_DYNAMICFONTSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_bmFont(BMFont* arg)
		{
			((::System::Void(*)(BMFont*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_BMFONT_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void RemoveSymbol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_REMOVESYMBOL_OFFSET))(str, nullptr);
		}

		INGUIFont* get_replacement()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_REPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_dynamicFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_SET_DYNAMICFONT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_packedFontShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_PACKEDFONTSHADER_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGUIFONT_.CTOR_OFFSET))(nullptr);
		}

	};

