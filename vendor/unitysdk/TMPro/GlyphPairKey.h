#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_GlyphPairAdjustmentRecord; }

#define TMPRO_GLYPHPAIRKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA133CD0)
#define TMPRO_GLYPHPAIRKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA129F80)

namespace TMPro
{
	inline static constexpr unsigned int GlyphPairKey_TypeDefinitionIndex = 33677;

	class GlyphPairKey : public Il2CppObject
	{
	public:
		::System::UInt32 firstGlyphIndex; // 0x10
		::System::UInt32 secondGlyphIndex; // 0x14
		::System::UInt32 key; // 0x18

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* arg)
		{
			((::System::Void(*)(::TMPro::TMP_GlyphPairAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_GLYPHPAIRKEY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

