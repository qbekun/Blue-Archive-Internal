#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_GlyphValueRecord; }
namespace UnityEngine::TextCore::LowLevel { class GlyphAdjustmentRecord; }

#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA133B60)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA133B70)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0xA133B80)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0xA133B90)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA130DC0)
#define TMPRO_TMP_GLYPHADJUSTMENTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA133BA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphAdjustmentRecord_TypeDefinitionIndex = 33675;

	class TMP_GlyphAdjustmentRecord : public Il2CppObject
	{
	public:
		::System::UInt32 m_GlyphIndex; // 0x10
		::TMPro::TMP_GlyphValueRecord* m_GlyphValueRecord; // 0x14

		::System::UInt32 get_glyphIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(nullptr);
		}

		::System::Void set_glyphIndex(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHINDEX_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_GlyphValueRecord* get_glyphValueRecord()
		{
			return (return (::TMPro::TMP_GlyphValueRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(nullptr);
		}

		::System::Void set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord* arg)
		{
			((::System::Void(*)(::TMPro::TMP_GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_SET_GLYPHVALUERECORD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::TMPro::TMP_GlyphValueRecord* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::TMP_GlyphValueRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHADJUSTMENTRECORD_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

