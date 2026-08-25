#pragma once
#include "../unitysdk.h"

namespace TMPro { class GlyphValueRecord_Legacy; }

#define TMPRO_KERNINGTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1312A0)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0xA131BB0)
#define TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0xA131D60)
#define TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA131F20)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0xA132100)
#define TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET UNITYSDK_OFFSET(0xA132210)
#define TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET UNITYSDK_OFFSET(0xA132260)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable_TypeDefinitionIndex = 33670;

	class KerningTable : public Il2CppObject
	{
	public:
		Il2CppObject* kerningPairs; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddKerningPair()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET))(nullptr);
		}

		::System::Int32 AddKerningPair(::System::UInt32 arg, ::System::UInt32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDKERNINGPAIR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 AddGlyphPairAdjustmentRecord(::System::UInt32 arg, ::TMPro::GlyphValueRecord_Legacy* arg, ::System::UInt32 arg, ::TMPro::GlyphValueRecord_Legacy* arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::TMPro::GlyphValueRecord_Legacy*, ::System::UInt32, ::TMPro::GlyphValueRecord_Legacy*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_ADDGLYPHPAIRADJUSTMENTRECORD_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveKerningPair(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveKerningPair(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_REMOVEKERNINGPAIR_OFFSET))(arg, nullptr);
		}

		::System::Void SortKerningPairs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE_SORTKERNINGPAIRS_OFFSET))(nullptr);
		}

	};
}

