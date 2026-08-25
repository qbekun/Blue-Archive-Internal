#pragma once
#include "unitysdk.h"

class BMGlyph;

#define BMFONT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA45DD0)
#define BMFONT_GET_CHARSIZE_OFFSET UNITYSDK_OFFSET(0xA45E10)
#define BMFONT_SET_CHARSIZE_OFFSET UNITYSDK_OFFSET(0xA45E20)
#define BMFONT_GET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0xA45E30)
#define BMFONT_SET_BASEOFFSET_OFFSET UNITYSDK_OFFSET(0xA45E40)
#define BMFONT_GET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0xA45E50)
#define BMFONT_SET_TEXWIDTH_OFFSET UNITYSDK_OFFSET(0xA45E60)
#define BMFONT_GET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA45E70)
#define BMFONT_SET_TEXHEIGHT_OFFSET UNITYSDK_OFFSET(0xA45E80)
#define BMFONT_GET_GLYPHCOUNT_OFFSET UNITYSDK_OFFSET(0xA45E90)
#define BMFONT_GET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0xA45F10)
#define BMFONT_SET_SPRITENAME_OFFSET UNITYSDK_OFFSET(0xA45F20)
#define BMFONT_GET_GLYPHS_OFFSET UNITYSDK_OFFSET(0xA45F30)
#define BMFONT_GETGLYPH_OFFSET UNITYSDK_OFFSET(0xA45F40)
#define BMFONT_GETGLYPH_OFFSET UNITYSDK_OFFSET(0xA46150)
#define BMFONT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA46160)
#define BMFONT_TRIM_OFFSET UNITYSDK_OFFSET(0xA461E0)
#define BMFONT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA463F0)

	inline static constexpr unsigned int BMFont_TypeDefinitionIndex = 94;

	class BMFont : public Il2CppObject
	{
	public:
		::System::Int32 mSize; // 0x10
		::System::Int32 mBase; // 0x14
		::System::Int32 mWidth; // 0x18
		::System::Int32 mHeight; // 0x1C
		::System::String* mSpriteName; // 0x20
		Il2CppObject* mSaved; // 0x28
		Il2CppObject* mDict; // 0x30

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int32 get_charSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_CHARSIZE_OFFSET))(nullptr);
		}

		::System::Void set_charSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_SET_CHARSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_baseOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_BASEOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_baseOffset(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_SET_BASEOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_texWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_TEXWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_texWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_SET_TEXWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_texHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_TEXHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_texHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_SET_TEXHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_glyphCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_GLYPHCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_spriteName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_SPRITENAME_OFFSET))(nullptr);
		}

		::System::Void set_spriteName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_SET_SPRITENAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_glyphs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GET_GLYPHS_OFFSET))(nullptr);
		}

		BMGlyph* GetGlyph(::System::Int32 arg, ::System::Boolean arg2)
		{
			return ((BMGlyph*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GETGLYPH_OFFSET))(arg, arg2, nullptr);
		}

		BMGlyph* GetGlyph(::System::Int32 arg)
		{
			return ((BMGlyph*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_GETGLYPH_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Trim(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BMFONT_TRIM_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFONT_.CTOR_OFFSET))(nullptr);
		}

	};

