#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::TextCore { class GlyphMetrics; }
namespace UnityEngine::TextCore { class GlyphRect; }
namespace UnityEngine::TextCore { class GlyphClassDefinitionType; }
namespace UnityEngine::TextCore::LowLevel { class GlyphMarshallingStruct; }

#define UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA2AAF20)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA2AAF30)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET UNITYSDK_OFFSET(0xA2AAF40)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET UNITYSDK_OFFSET(0xA2AAF60)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0xA2AAF70)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET UNITYSDK_OFFSET(0xA2AAF80)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2AAF90)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA2AAFA0)
#define UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0xA2AAFB0)
#define UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET UNITYSDK_OFFSET(0xA2AAFC0)
#define UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2AAFD0)
#define UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2AB000)
#define UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2AB050)

namespace UnityEngine::TextCore
{
	inline static constexpr unsigned int Glyph_TypeDefinitionIndex = 37516;

	class Glyph : public Il2CppObject
	{
	public:
		::System::UInt32 m_Index; // 0x10
		::UnityEngine::TextCore::GlyphMetrics* m_Metrics; // 0x14
		::UnityEngine::TextCore::GlyphRect* m_GlyphRect; // 0x28
		::System::Single m_Scale; // 0x38
		::System::Int32 m_AtlasIndex; // 0x3C
		::UnityEngine::TextCore::GlyphClassDefinitionType* m_ClassDefinitionType; // 0x40

		::System::UInt32 get_index()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_index(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::GlyphMetrics* get_metrics()
		{
			return (return (::UnityEngine::TextCore::GlyphMetrics*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_METRICS_OFFSET))(nullptr);
		}

		::System::Void set_metrics(::UnityEngine::TextCore::GlyphMetrics* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::GlyphMetrics*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_METRICS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::GlyphRect* get_glyphRect()
		{
			return (return (::UnityEngine::TextCore::GlyphRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_GLYPHRECT_OFFSET))(nullptr);
		}

		::System::Void set_glyphRect(::UnityEngine::TextCore::GlyphRect* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::GlyphRect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_GLYPHRECT_OFFSET))(arg, nullptr);
		}

		::System::Single get_scale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_SCALE_OFFSET))(nullptr);
		}

		::System::Void set_scale(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_SCALE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_atlasIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_GET_ATLASINDEX_OFFSET))(nullptr);
		}

		::System::Void set_atlasIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_SET_ATLASINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::UnityEngine::TextCore::GlyphMetrics* arg, ::UnityEngine::TextCore::GlyphRect* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::GlyphMetrics*, ::UnityEngine::TextCore::GlyphRect*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_GLYPH_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

