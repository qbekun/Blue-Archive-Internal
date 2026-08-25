#pragma once
#include "../unitysdk.h"

#define TMPRO_FONTASSETCREATIONSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131830)

namespace TMPro
{
	inline static constexpr unsigned int FontAssetCreationSettings_TypeDefinitionIndex = 33661;

	class FontAssetCreationSettings : public Il2CppObject
	{
	public:
		::System::String* sourceFontFileName; // 0x10
		::System::String* sourceFontFileGUID; // 0x18
		::System::Int32 pointSizeSamplingMode; // 0x20
		::System::Int32 pointSize; // 0x24
		::System::Int32 padding; // 0x28
		::System::Int32 packingMode; // 0x2C
		::System::Int32 atlasWidth; // 0x30
		::System::Int32 atlasHeight; // 0x34
		::System::Int32 characterSetSelectionMode; // 0x38
		::System::String* characterSequence; // 0x40
		::System::String* referencedFontAssetGUID; // 0x48
		::System::String* referencedTextAssetGUID; // 0x50
		::System::Int32 fontStyle; // 0x58
		::System::Single fontStyleModifier; // 0x5C
		::System::Int32 renderMode; // 0x60
		::System::Boolean includeFontFeatures; // 0x64

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FONTASSETCREATIONSETTINGS_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, str, arg, nullptr);
		}

	};
}

