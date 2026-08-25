#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_GlyphAdjustmentRecord; }
namespace TMPro { class FontFeatureLookupFlags; }
namespace UnityEngine::TextCore::LowLevel { class GlyphPairAdjustmentRecord; }

#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA133C50)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA133C70)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA133C80)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA133CA0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0xA133CB0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET UNITYSDK_OFFSET(0xA133CC0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA130DD0)
#define TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1300A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_GlyphPairAdjustmentRecord_TypeDefinitionIndex = 33676;

	class TMP_GlyphPairAdjustmentRecord : public Il2CppObject
	{
	public:
		::TMPro::TMP_GlyphAdjustmentRecord* m_FirstAdjustmentRecord; // 0x10
		::TMPro::TMP_GlyphAdjustmentRecord* m_SecondAdjustmentRecord; // 0x24
		::TMPro::FontFeatureLookupFlags* m_FeatureLookupFlags; // 0x38

		::TMPro::TMP_GlyphAdjustmentRecord* get_firstAdjustmentRecord()
		{
			return (return (::TMPro::TMP_GlyphAdjustmentRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_firstAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord* arg)
		{
			((::System::Void(*)(::TMPro::TMP_GlyphAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FIRSTADJUSTMENTRECORD_OFFSET))(arg, nullptr);
		}

		::TMPro::TMP_GlyphAdjustmentRecord* get_secondAdjustmentRecord()
		{
			return (return (::TMPro::TMP_GlyphAdjustmentRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(nullptr);
		}

		::System::Void set_secondAdjustmentRecord(::TMPro::TMP_GlyphAdjustmentRecord* arg)
		{
			((::System::Void(*)(::TMPro::TMP_GlyphAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_SECONDADJUSTMENTRECORD_OFFSET))(arg, nullptr);
		}

		::TMPro::FontFeatureLookupFlags* get_featureLookupFlags()
		{
			return (return (::TMPro::FontFeatureLookupFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_GET_FEATURELOOKUPFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_featureLookupFlags(::TMPro::FontFeatureLookupFlags* arg)
		{
			((::System::Void(*)(::TMPro::FontFeatureLookupFlags*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_SET_FEATURELOOKUPFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::TMPro::TMP_GlyphAdjustmentRecord* arg, ::TMPro::TMP_GlyphAdjustmentRecord* arg)
		{
			((::System::Void(*)(::TMPro::TMP_GlyphAdjustmentRecord*, ::TMPro::TMP_GlyphAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_GLYPHPAIRADJUSTMENTRECORD_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

