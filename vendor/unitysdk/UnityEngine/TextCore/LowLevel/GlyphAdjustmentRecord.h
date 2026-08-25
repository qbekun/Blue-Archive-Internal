#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class GlyphValueRecord; }
namespace UnityEngine::TextCore::LowLevel { class GlyphAdjustmentRecord; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA2AD480)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET UNITYSDK_OFFSET(0xA2AD490)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AD4A0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD500)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AD560)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int GlyphAdjustmentRecord_TypeDefinitionIndex = 37527;

	class GlyphAdjustmentRecord : public Il2CppObject
	{
	public:
		::System::UInt32 m_GlyphIndex; // 0x10
		::UnityEngine::TextCore::LowLevel::GlyphValueRecord* m_GlyphValueRecord; // 0x14

		::System::UInt32 get_glyphIndex()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHINDEX_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::LowLevel::GlyphValueRecord* get_glyphValueRecord()
		{
			return (return (::UnityEngine::TextCore::LowLevel::GlyphValueRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GET_GLYPHVALUERECORD_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_GLYPHADJUSTMENTRECORD_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

