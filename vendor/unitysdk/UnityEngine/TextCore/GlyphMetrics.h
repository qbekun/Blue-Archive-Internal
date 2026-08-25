#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::TextCore { class GlyphMetrics; }

#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA2AAD50)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xA2AAD60)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET UNITYSDK_OFFSET(0xA2AAD70)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET UNITYSDK_OFFSET(0xA2AAD80)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET UNITYSDK_OFFSET(0xA2AAD90)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2AADA0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2AADD0)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AAE30)
#define UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2AAE90)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int GlyphMetrics_TypeDefinitionIndex = 37515;

	class GlyphMetrics : public Il2CppObject
	{
	public:
		::System::Single m_Width; // 0x10
		::System::Single m_Height; // 0x14
		::System::Single m_HorizontalBearingX; // 0x18
		::System::Single m_HorizontalBearingY; // 0x1C
		::System::Single m_HorizontalAdvance; // 0x20

		::System::Single get_width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Single get_height()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Single get_horizontalBearingX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGX_OFFSET))(nullptr);
		}

		::System::Single get_horizontalBearingY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALBEARINGY_OFFSET))(nullptr);
		}

		::System::Single get_horizontalAdvance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GET_HORIZONTALADVANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::TextCore::GlyphMetrics* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::TextCore::GlyphMetrics*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPHMETRICS_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

