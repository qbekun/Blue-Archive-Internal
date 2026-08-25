#pragma once
#include "unitysdk.h"

class UISpriteData;
class INGUIAtlas;
class BMFont;
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Font; }
class INGUIFont;
class BMSymbol;

#define INGUIFONT_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_REMOVESYMBOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_RENAMESYMBOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_USESSPRITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_BMFONT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_HASSYMBOLS_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_UPDATEUVRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_REFERENCES_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_PACKEDFONTSHADER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_SET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_MATCHSYMBOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_FINALFONT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_BMFONT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define INGUIFONT_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int INGUIFont_TypeDefinitionIndex = 185;

	class INGUIFont : public Il2CppObject
	{
	public:
		UISpriteData* get_sprite()
		{
			return ((UISpriteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void RemoveSymbol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_REMOVESYMBOL_OFFSET))(str, nullptr);
		}

		::System::Void RenameSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_RENAMESYMBOL_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 get_texWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_TEXWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_symbols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_SYMBOLS_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_premultipliedAlphaShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET))(nullptr);
		}

		::System::String* get_spriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Boolean UsesSprite(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_USESSPRITE_OFFSET))(str, nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_ATLAS_OFFSET))(nullptr);
		}

		::System::Void set_bmFont(BMFont* arg)
		{
			((::System::Void(*)(BMFont*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_BMFONT_OFFSET))(arg, nullptr);
		}

		::System::Void set_texWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_TEXWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_ISDYNAMIC_OFFSET))(nullptr);
		}

		::UnityEngine::FontStyle* get_dynamicFontStyle()
		{
			return ((::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_DYNAMICFONTSTYLE_OFFSET))(nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_TEXTURE_OFFSET))(nullptr);
		}

		Il2CppObject* get_symbols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_SYMBOLS_OFFSET))(nullptr);
		}

		::System::Void set_uvRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_UVRECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void set_dynamicFontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_DYNAMICFONTSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_hasSymbols()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_HASSYMBOLS_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_texHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_TEXHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_dynamicFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_DYNAMICFONT_OFFSET))(arg, nullptr);
		}

		::System::Void set_replacement(INGUIFont* arg)
		{
			((::System::Void(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateUVRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_UPDATEUVRECT_OFFSET))(nullptr);
		}

		::System::Boolean References(INGUIFont* arg)
		{
			return ((::System::Boolean(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_REFERENCES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_uvRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_UVRECT_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_spriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_packedFontShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_PACKEDFONTSHADER_OFFSET))(nullptr);
		}

		::System::Int32 get_defaultSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_DEFAULTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_texHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_TEXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_defaultSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_SET_DEFAULTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_MARKASCHANGED_OFFSET))(nullptr);
		}

		BMSymbol* MatchSymbol(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_MATCHSYMBOL_OFFSET))(str, arg, arg2, nullptr);
		}

		INGUIFont* get_finalFont()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_FINALFONT_OFFSET))(nullptr);
		}

		BMFont* get_bmFont()
		{
			return ((BMFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_BMFONT_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_dynamicFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_DYNAMICFONT_OFFSET))(nullptr);
		}

		::System::Void AddSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_ADDSYMBOL_OFFSET))(str, str2, nullptr);
		}

		INGUIFont* get_replacement()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGUIFONT_GET_REPLACEMENT_OFFSET))(nullptr);
		}

	};

