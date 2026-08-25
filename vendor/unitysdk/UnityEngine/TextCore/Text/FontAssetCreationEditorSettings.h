#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontAssetCreationEditorSettings_TypeDefinitionIndex = 35563;

	class FontAssetCreationEditorSettings : public Il2CppObject
	{
	public:
		::System::String* sourceFontFileGUID; // 0x10
		::System::Int32 faceIndex; // 0x18
		::System::Int32 pointSizeSamplingMode; // 0x1C
		::System::Int32 pointSize; // 0x20
		::System::Int32 padding; // 0x24
		::System::Int32 packingMode; // 0x28
		::System::Int32 atlasWidth; // 0x2C
		::System::Int32 atlasHeight; // 0x30
		::System::Int32 characterSetSelectionMode; // 0x34
		::System::String* characterSequence; // 0x38
		::System::String* referencedFontAssetGUID; // 0x40
		::System::String* referencedTextAssetGUID; // 0x48
		::System::Int32 fontStyle; // 0x50
		::System::Single fontStyleModifier; // 0x54
		::System::Int32 renderMode; // 0x58
		::System::Boolean includeFontFeatures; // 0x5C

	};
}

