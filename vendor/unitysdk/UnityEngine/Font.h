#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class CharacterInfo&; }
namespace UnityEngine { class FontStyle; }

#define UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0xA2E8590)
#define UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET UNITYSDK_OFFSET(0xA2E8650)
#define UNITYENGINE_FONT_ADD_M_FONTTEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2E8710)
#define UNITYENGINE_FONT_REMOVE_M_FONTTEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2E87B0)
#define UNITYENGINE_FONT_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2E8850)
#define UNITYENGINE_FONT_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xA2E8890)
#define UNITYENGINE_FONT_GET_FONTNAMES_OFFSET UNITYSDK_OFFSET(0xA2E88D0)
#define UNITYENGINE_FONT_SET_FONTNAMES_OFFSET UNITYSDK_OFFSET(0xA2E8910)
#define UNITYENGINE_FONT_GET_DYNAMIC_OFFSET UNITYSDK_OFFSET(0xA2E6380)
#define UNITYENGINE_FONT_GET_ASCENT_OFFSET UNITYSDK_OFFSET(0xA2E8950)
#define UNITYENGINE_FONT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA2E8990)
#define UNITYENGINE_FONT_GET_CHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xA2E89D0)
#define UNITYENGINE_FONT_SET_CHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xA2E8A10)
#define UNITYENGINE_FONT_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA2E8A50)
#define UNITYENGINE_FONT_GET_TEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2E8A90)
#define UNITYENGINE_FONT_SET_TEXTUREREBUILDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA2E8AA0)
#define UNITYENGINE_FONT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E8AB0)
#define UNITYENGINE_FONT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E8B60)
#define UNITYENGINE_FONT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E8C90)
#define UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET UNITYSDK_OFFSET(0xA2E8D60)
#define UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET UNITYSDK_OFFSET(0xA2E8E90)
#define UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2E8F50)
#define UNITYENGINE_FONT_GETMAXVERTSFORSTRING_OFFSET UNITYSDK_OFFSET(0xA2E8FD0)
#define UNITYENGINE_FONT_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0xA2E8FF0)
#define UNITYENGINE_FONT_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2E9030)
#define UNITYENGINE_FONT_HASCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2E9070)
#define UNITYENGINE_FONT_GETOSINSTALLEDFONTNAMES_OFFSET UNITYSDK_OFFSET(0xA2E90B0)
#define UNITYENGINE_FONT_GETPATHSTOOSFONTS_OFFSET UNITYSDK_OFFSET(0xA2E90F0)
#define UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET UNITYSDK_OFFSET(0xA2E8B20)
#define UNITYENGINE_FONT_INTERNAL_CREATEFONTFROMPATH_OFFSET UNITYSDK_OFFSET(0xA2E8C50)
#define UNITYENGINE_FONT_INTERNAL_CREATEDYNAMICFONT_OFFSET UNITYSDK_OFFSET(0xA2E8D10)
#define UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xA2E9130)
#define UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xA2E9180)
#define UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0xA2E91E0)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2E9230)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2E9280)
#define UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2E92D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Font_TypeDefinitionIndex = 37674;

	class Font : public Il2CppObject
	{
	public:
		Il2CppObject* textureRebuilt; // 0x0
		FontTextureRebuildCallback* m_FontTextureRebuildCallback; // 0x18

		::System::Void add_textureRebuilt(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_ADD_TEXTUREREBUILT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_textureRebuilt(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REMOVE_TEXTUREREBUILT_OFFSET))(arg, nullptr);
		}

		::System::Void add_m_FontTextureRebuildCallback(FontTextureRebuildCallback* arg)
		{
			((::System::Void(*)(FontTextureRebuildCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_ADD_M_FONTTEXTUREREBUILDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void remove_m_FontTextureRebuildCallback(FontTextureRebuildCallback* arg)
		{
			((::System::Void(*)(FontTextureRebuildCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REMOVE_M_FONTTEXTUREREBUILDCALLBACK_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_material()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_MATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_material(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_fontNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTNAMES_OFFSET))(nullptr);
		}

		::System::Void set_fontNames(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_FONTNAMES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_dynamic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_DYNAMIC_OFFSET))(nullptr);
		}

		::System::Int32 get_ascent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_ASCENT_OFFSET))(nullptr);
		}

		::System::Int32 get_fontSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_characterInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_CHARACTERINFO_OFFSET))(nullptr);
		}

		::System::Void set_characterInfo(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_CHARACTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_lineHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_LINEHEIGHT_OFFSET))(nullptr);
		}

		FontTextureRebuildCallback* get_textureRebuildCallback()
		{
			return (return (FontTextureRebuildCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GET_TEXTUREREBUILDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_textureRebuildCallback(FontTextureRebuildCallback* arg)
		{
			((::System::Void(*)(FontTextureRebuildCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_SET_TEXTUREREBUILDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Font* CreateDynamicFontFromOSFont(::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Font*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Font* CreateDynamicFontFromOSFont(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Font*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_CREATEDYNAMICFONTFROMOSFONT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeTextureRebuilt_Internal(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INVOKETEXTUREREBUILT_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetMaxVertsForString(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETMAXVERTSFORSTRING_OFFSET))(str, nullptr);
		}

		::UnityEngine::Font* GetDefault()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETDEFAULT_OFFSET))(nullptr);
		}

		::System::Boolean HasCharacter(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCharacter(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_HASCHARACTER_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOSInstalledFontNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETOSINSTALLEDFONTNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPathsToOSFonts()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETPATHSTOOSFONTS_OFFSET))(nullptr);
		}

		::System::Void Internal_CreateFont(::UnityEngine::Font* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEFONT_OFFSET))(arg, str, nullptr);
		}

		::System::Void Internal_CreateFontFromPath(::UnityEngine::Font* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEFONTFROMPATH_OFFSET))(arg, str, nullptr);
		}

		::System::Void Internal_CreateDynamicFont(::UnityEngine::Font* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_INTERNAL_CREATEDYNAMICFONT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetCharacterInfo(::System::Char arg, ::UnityEngine::CharacterInfo&* arg, ::System::Int32 arg, ::UnityEngine::FontStyle* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::UnityEngine::CharacterInfo&*, ::System::Int32, ::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetCharacterInfo(::System::Char arg, ::UnityEngine::CharacterInfo&* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::UnityEngine::CharacterInfo&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetCharacterInfo(::System::Char arg, ::UnityEngine::CharacterInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::UnityEngine::CharacterInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_GETCHARACTERINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RequestCharactersInTexture(::System::String* str, ::System::Int32 arg, ::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void RequestCharactersInTexture(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET))(str, arg, nullptr);
		}

		::System::Void RequestCharactersInTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FONT_REQUESTCHARACTERSINTEXTURE_OFFSET))(str, nullptr);
		}

	};
}

