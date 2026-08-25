#pragma once
#include "../unitysdk.h"

namespace TMPro { class GlyphValueRecord_Legacy; }
namespace UnityEngine::TextCore::LowLevel { class GlyphValueRecord; }

#define TMPRO_GLYPHVALUERECORD_LEGACY_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xA131970)
#define TMPRO_GLYPHVALUERECORD_LEGACY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131990)

namespace TMPro
{
	inline static constexpr unsigned int GlyphValueRecord_Legacy_TypeDefinitionIndex = 33664;

	class GlyphValueRecord_Legacy : public Il2CppObject
	{
	public:
		::System::Single xPlacement; // 0x10
		::System::Single yPlacement; // 0x14
		::System::Single xAdvance; // 0x18
		::System::Single yAdvance; // 0x1C

		::TMPro::GlyphValueRecord_Legacy* op_Addition(::TMPro::GlyphValueRecord_Legacy* arg, ::TMPro::GlyphValueRecord_Legacy* arg)
		{
			return (return (::TMPro::GlyphValueRecord_Legacy*(*)(::TMPro::GlyphValueRecord_Legacy*, ::TMPro::GlyphValueRecord_Legacy*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_GLYPHVALUERECORD_LEGACY_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_GLYPHVALUERECORD_LEGACY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

