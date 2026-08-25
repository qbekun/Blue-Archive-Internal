#pragma once
#include "../unitysdk.h"

namespace TMPro { class GlyphValueRecord_Legacy; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0xA1319E0)
#define TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET UNITYSDK_OFFSET(0xA1319F0)
#define TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0xA131A00)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0xA131A10)
#define TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET UNITYSDK_OFFSET(0xA131A20)
#define TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0xA131A30)
#define TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET UNITYSDK_OFFSET(0xA131A40)
#define TMPRO_KERNINGPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131A50)
#define TMPRO_KERNINGPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131A80)
#define TMPRO_KERNINGPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA131AC0)
#define TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET UNITYSDK_OFFSET(0xA131B10)
#define TMPRO_KERNINGPAIR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA131B20)

namespace TMPro
{
	inline static constexpr unsigned int KerningPair_TypeDefinitionIndex = 33665;

	class KerningPair : public Il2CppObject
	{
	public:
		::System::UInt32 m_FirstGlyph; // 0x10
		::TMPro::GlyphValueRecord_Legacy* m_FirstGlyphAdjustments; // 0x14
		::System::UInt32 m_SecondGlyph; // 0x24
		::TMPro::GlyphValueRecord_Legacy* m_SecondGlyphAdjustments; // 0x28
		::System::Single xOffset; // 0x38
		::TMPro::KerningPair* empty; // 0x0
		::System::Boolean m_IgnoreSpacingAdjustments; // 0x3C

		::System::UInt32 get_firstGlyph()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPH_OFFSET))(nullptr);
		}

		::System::Void set_firstGlyph(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_FIRSTGLYPH_OFFSET))(arg, nullptr);
		}

		::TMPro::GlyphValueRecord_Legacy* get_firstGlyphAdjustments()
		{
			return (return (::TMPro::GlyphValueRecord_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_FIRSTGLYPHADJUSTMENTS_OFFSET))(nullptr);
		}

		::System::UInt32 get_secondGlyph()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPH_OFFSET))(nullptr);
		}

		::System::Void set_secondGlyph(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_SET_SECONDGLYPH_OFFSET))(arg, nullptr);
		}

		::TMPro::GlyphValueRecord_Legacy* get_secondGlyphAdjustments()
		{
			return (return (::TMPro::GlyphValueRecord_Legacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_SECONDGLYPHADJUSTMENTS_OFFSET))(nullptr);
		}

		::System::Boolean get_ignoreSpacingAdjustments()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_GET_IGNORESPACINGADJUSTMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::TMPro::GlyphValueRecord_Legacy* arg, ::System::UInt32 arg, ::TMPro::GlyphValueRecord_Legacy* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::GlyphValueRecord_Legacy*, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ConvertLegacyKerningData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_CONVERTLEGACYKERNINGDATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGPAIR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

