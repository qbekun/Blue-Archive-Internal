#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphAdjustmentRecord; }
namespace UnityEngine::TextCore::LowLevel { class FontFeatureLookupFlags; }
namespace UnityEngine::TextCore::LowLevel { class GlyphPairAdjustmentRecord; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA2AD5F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET UNITYSDK_OFFSET(0xA2AD600)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AD620)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD680)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD6F0)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphPairAdjustmentRecord_TypeDefinitionIndex = 37528;

	class GlyphPairAdjustmentRecord : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* m_FirstAdjustmentRecord; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* m_SecondAdjustmentRecord; // 0x24
		::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags* m_FeatureLookupFlags; // 0x38

		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* get_firstAdjustmentRecord()
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_FIRSTADJUSTMENTRECORD_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* get_secondAdjustmentRecord()
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GET_SECONDADJUSTMENTRECORD_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHPAIRADJUSTMENTRECORD_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

