#pragma once
#include "unitysdk.h"

class UISpriteData;
namespace UnityEngine { class Rect; }
class INGUIAtlas;

#define BMSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA46740)
#define BMSYMBOL_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0xA46750)
#define BMSYMBOL_GET_ADVANCE_OFFSET UNITYSDK_OFFSET(0xA46760)
#define BMSYMBOL_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA46770)
#define BMSYMBOL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA46780)
#define BMSYMBOL_MARKASCHANGED_OFFSET UNITYSDK_OFFSET(0xA467B0)
#define BMSYMBOL_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0xA467C0)
#define BMSYMBOL_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0xA467D0)
#define BMSYMBOL_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA467E0)
#define BMSYMBOL_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA467F0)

	inline static constexpr unsigned int BMSymbol_TypeDefinitionIndex = 96;

	class BMSymbol : public Il2CppObject
	{
	public:
		::System::String* sequence; // 0x10
		::System::String* spriteName; // 0x18
		UISpriteData* mSprite; // 0x20
		::System::Boolean mIsValid; // 0x28
		::System::Int32 mLength; // 0x2C
		::System::Int32 mOffsetX; // 0x30
		::System::Int32 mOffsetY; // 0x34
		::System::Int32 mWidth; // 0x38
		::System::Int32 mHeight; // 0x3C
		::System::Int32 mAdvance; // 0x40
		::UnityEngine::Rect* mUV; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_offsetY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_OFFSETY_OFFSET))(nullptr);
		}

		::System::Int32 get_advance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_ADVANCE_OFFSET))(nullptr);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void MarkAsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_MARKASCHANGED_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_uvRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_UVRECT_OFFSET))(nullptr);
		}

		::System::Int32 get_offsetX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_OFFSETX_OFFSET))(nullptr);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Boolean Validate(INGUIAtlas* arg)
		{
			return ((::System::Boolean(*)(INGUIAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + BMSYMBOL_VALIDATE_OFFSET))(arg, nullptr);
		}

	};

