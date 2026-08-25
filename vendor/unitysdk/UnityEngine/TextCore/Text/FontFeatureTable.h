#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2D3980)
#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D2F30)
#define UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2CD920)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int FontFeatureTable_TypeDefinitionIndex = 35569;

	class FontFeatureTable : public Il2CppObject
	{
	public:
		Il2CppObject* m_GlyphPairAdjustmentRecords; // 0x10
		Il2CppObject* m_GlyphPairAdjustmentRecordLookup; // 0x18

		Il2CppObject* get_glyphPairAdjustmentRecords()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_GET_GLYPHPAIRADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SortGlyphPairAdjustmentRecords()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_FONTFEATURETABLE_SORTGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(nullptr);
		}

	};
}

