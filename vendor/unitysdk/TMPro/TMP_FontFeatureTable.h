#pragma once
#include "../unitysdk.h"

#define TMPRO_TMP_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA12A690)
#define TMPRO_TMP_FONTFEATURETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA12FFD0)
#define TMPRO_TMP_FONTFEATURETABLE_SET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA133CF0)
#define TMPRO_TMP_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA133D00)

namespace TMPro
{
	inline static constexpr unsigned int TMP_FontFeatureTable_TypeDefinitionIndex = 33679;

	class TMP_FontFeatureTable : public Il2CppObject
	{
	public:
		Il2CppObject* m_GlyphPairAdjustmentRecords; // 0x10
		Il2CppObject* m_GlyphPairAdjustmentRecordLookupDictionary; // 0x18

		::System::Void SortGlyphPairAdjustmentRecords()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_glyphPairAdjustmentRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_SET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_glyphPairAdjustmentRecords()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

	};
}

