#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class FontEngineError; }

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngineError_TypeDefinitionIndex = 37518;

	class FontEngineError : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TextCore::LowLevel::FontEngineError* Success; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_File_Path; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_File_Format; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_File_Structure; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_File; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Table; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Glyph_Index; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Character_Code; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Pixel_Size; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Library; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Face; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_Library_or_Face; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Atlas_Generation_Cancelled; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* Invalid_SharedTextureData; // 0x0
		::UnityEngine::TextCore::LowLevel::FontEngineError* OpenTypeLayoutLookup_Mismatch; // 0x0

	};
}

