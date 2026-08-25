#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Rect; }
class BMFont;
namespace UnityEngine { class Object; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class FontStyle; }
class UISpriteData;
class INGUIFont;
class INGUIAtlas;
class BMSymbol;
namespace UnityEngine { class Texture2D; }

#define UIFONT_GET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x22FAE20)
#define UIFONT_GET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x22FAF60)
#define UIFONT_SET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x22FAFE0)
#define UIFONT_SET_ATLAS_OFFSET UNITYSDK_OFFSET(0x22FB130)
#define UIFONT_UPDATEUVRECT_OFFSET UNITYSDK_OFFSET(0x22FBC60)
#define UIFONT_SET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x22FC530)
#define UIFONT_REFERENCES_OFFSET UNITYSDK_OFFSET(0x22FC680)
#define UIFONT_SET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x22FC7C0)
#define UIFONT_GET_FINALFONT_OFFSET UNITYSDK_OFFSET(0x22FCB50)
#define UIFONT_SET_DYNAMICFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x22FCC20)
#define UIFONT_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x22FB410)
#define UIFONT_GET_PACKEDFONTSHADER_OFFSET UNITYSDK_OFFSET(0x22FCEE0)
#define UIFONT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22FD480)
#define UIFONT_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x22FD580)
#define UIFONT_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0x22FB910)
#define UIFONT_GET_DYNAMICFONT_OFFSET UNITYSDK_OFFSET(0x22FD890)
#define UIFONT_GET_PREMULTIPLIEDALPHA_OFFSET UNITYSDK_OFFSET(0x22FD9E0)
#define UIFONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x22FD180)
#define UIFONT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x22FDCC0)
#define UIFONT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x22FDE30)
#define UIFONT_GET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x22FDCD0)
#define UIFONT_SET_DEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x22FDFB0)
#define UIFONT_GET_BMFONT_OFFSET UNITYSDK_OFFSET(0x22FE100)
#define UIFONT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x22FE250)
#define UIFONT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x22FE2D0)
#define UIFONT_GET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0x22FE2E0)
#define UIFONT_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x22FE440)
#define UIFONT_RENAMESYMBOL_OFFSET UNITYSDK_OFFSET(0x22FE5A0)
#define UIFONT_GET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0x22FE760)
#define UIFONT_REMOVESYMBOL_OFFSET UNITYSDK_OFFSET(0x22FE8C0)
#define UIFONT_MATCHSYMBOL_OFFSET UNITYSDK_OFFSET(0x22FE940)
#define UIFONT_ADDSYMBOL_OFFSET UNITYSDK_OFFSET(0x22FEC80)
#define UIFONT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x22FECC0)
#define UIFONT_USESSPRITE_OFFSET UNITYSDK_OFFSET(0x22FEE80)
#define UIFONT_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x22FB750)
#define UIFONT_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0x22FEF90)
#define UIFONT_GETSYMBOL_OFFSET UNITYSDK_OFFSET(0x22FE5E0)
#define UIFONT_SET_REPLACEMENT_OFFSET UNITYSDK_OFFSET(0x22FF130)
#define UIFONT_GETSPRITE_OFFSET UNITYSDK_OFFSET(0x22FF390)
#define UIFONT_SET_BMFONT_OFFSET UNITYSDK_OFFSET(0x22FF440)
#define UIFONT_TRIM_OFFSET UNITYSDK_OFFSET(0x22FBEA0)
#define UIFONT_GET_HASSYMBOLS_OFFSET UNITYSDK_OFFSET(0x22FF5A0)
#define UIFONT_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x22FC9A0)
#define UIFONT_GET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x22FCD90)
#define UIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET UNITYSDK_OFFSET(0x22FD9F0)
#define UIFONT_SET_SYMBOLS_OFFSET UNITYSDK_OFFSET(0x22FF700)
#define UIFONT_GET_ATLAS_OFFSET UNITYSDK_OFFSET(0x22FEB20)

	inline static constexpr unsigned int UIFont_TypeDefinitionIndex = 223;

	class UIFont : public Il2CppObject
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

		::UnityEngine::FontStyle* get_dynamicFontStyle()
		{
			return ((::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_DYNAMICFONTSTYLE_OFFSET))(nullptr);
		}

		INGUIFont* get_replacement()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_REPLACEMENT_OFFSET))(nullptr);
		}

		::System::Void set_texHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_TEXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_atlas(INGUIAtlas* arg)
		{
			((::System::Void(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_ATLAS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateUVRect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_UPDATEUVRECT_OFFSET))(nullptr);
		}

		::System::Void set_texWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_TEXWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean References(INGUIFont* arg)
		{
			return ((::System::Boolean(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_REFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void set_dynamicFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_DYNAMICFONT_OFFSET))(arg, nullptr);
		}

		INGUIFont* get_finalFont()
		{
			return ((INGUIFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_FINALFONT_OFFSET))(nullptr);
		}

		::System::Void set_dynamicFontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_DYNAMICFONTSTYLE_OFFSET))(arg, nullptr);
		}

		UISpriteData* get_sprite()
		{
			return ((UISpriteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Boolean get_packedFontShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_PACKEDFONTSHADER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_uvRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_UVRECT_OFFSET))(arg, nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_MARKASCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_dynamicFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_DYNAMICFONT_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_PREMULTIPLIEDALPHA_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Int32 get_size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_isDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_ISDYNAMIC_OFFSET))(nullptr);
		}

		::System::Int32 get_defaultSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_DEFAULTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_defaultSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_DEFAULTSIZE_OFFSET))(arg, nullptr);
		}

		BMFont* get_bmFont()
		{
			return ((BMFont*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_BMFONT_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_size(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_texWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_TEXWIDTH_OFFSET))(nullptr);
		}

		::System::String* get_spriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Void RenameSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_RENAMESYMBOL_OFFSET))(str, str2, nullptr);
		}

		::System::Int32 get_texHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_TEXHEIGHT_OFFSET))(nullptr);
		}

		::System::Void RemoveSymbol(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_REMOVESYMBOL_OFFSET))(str, nullptr);
		}

		BMSymbol* MatchSymbol(::System::String* str, ::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_MATCHSYMBOL_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void AddSymbol(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_ADDSYMBOL_OFFSET))(str, str2, nullptr);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_TEXTURE_OFFSET))(nullptr);
		}

		::System::Boolean UsesSprite(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_USESSPRITE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Rect* get_uvRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_UVRECT_OFFSET))(nullptr);
		}

		::System::Void set_spriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		BMSymbol* GetSymbol(::System::String* str, ::System::Boolean arg)
		{
			return ((BMSymbol*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GETSYMBOL_OFFSET))(str, arg, nullptr);
		}

		::System::Void set_replacement(INGUIFont* arg)
		{
			((::System::Void(*)(INGUIFont*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_REPLACEMENT_OFFSET))(arg, nullptr);
		}

		UISpriteData* GetSprite(::System::String* str)
		{
			return ((UISpriteData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GETSPRITE_OFFSET))(str, nullptr);
		}

		::System::Void set_bmFont(BMFont* arg)
		{
			((::System::Void(*)(BMFont*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_BMFONT_OFFSET))(arg, nullptr);
		}

		::System::Void Trim()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_TRIM_OFFSET))(nullptr);
		}

		::System::Boolean get_hasSymbols()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_HASSYMBOLS_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_symbols()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_SYMBOLS_OFFSET))(nullptr);
		}

		::System::Boolean get_premultipliedAlphaShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_PREMULTIPLIEDALPHASHADER_OFFSET))(nullptr);
		}

		::System::Void set_symbols(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFONT_SET_SYMBOLS_OFFSET))(arg, nullptr);
		}

		INGUIAtlas* get_atlas()
		{
			return ((INGUIAtlas*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFONT_GET_ATLAS_OFFSET))(nullptr);
		}

	};

