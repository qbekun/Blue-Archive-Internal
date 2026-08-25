#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::LowLevel { class FontEngineError; }
namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::LowLevel { class FontReference&; }
namespace UnityEngine::TextCore { class FaceInfo; }
namespace UnityEngine::TextCore { class FaceInfo&; }
namespace UnityEngine::TextCore::LowLevel { class GlyphLoadFlags; }
namespace UnityEngine::TextCore { class Glyph&; }
namespace UnityEngine::TextCore::LowLevel { class GlyphMarshallingStruct&; }
namespace UnityEngine::TextCore::LowLevel { class GlyphPackingMode; }
namespace UnityEngine::TextCore::LowLevel { class GlyphRenderMode; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_OFFSET UNITYSDK_OFFSET(0xA2AB0C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB140)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0xA2AB180)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_AND_FACEINDEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB210)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0xA2AB260)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB2F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0xA2AB330)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_AND_FACEINDEX_FROMFONT_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB3C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET UNITYSDK_OFFSET(0xA2AB410)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_BY_FAMILYNAME_AND_STYLENAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB4B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETSYSTEMFONTREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2AB500)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETSYSTEMFONTREFERENCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB5A0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET UNITYSDK_OFFSET(0xA2AB5F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB6D0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET UNITYSDK_OFFSET(0xA2AB710)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET UNITYSDK_OFFSET(0xA2AB750)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AB8C0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xA2AB910)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2ABA80)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETTEXTUREUPLOADMODE_OFFSET UNITYSDK_OFFSET(0xA2ABAD0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2ABB10)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2AC1B0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2AC200)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2ACCF0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET UNITYSDK_OFFSET(0xA2ACD40)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET UNITYSDK_OFFSET(0xA2ACF60)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_KERNTABLE_OFFSET UNITYSDK_OFFSET(0xA2ACEE0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET UNITYSDK_OFFSET(0xA2ACF20)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GENERICLISTTOMARSHALLINGARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETMARSHALLINGARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2AD0F0)
#define UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2AD130)

namespace UnityEngine::TextCore::LowLevel
{
	inline static constexpr unsigned int FontEngine_TypeDefinitionIndex = 37522;

	class FontEngine : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_Glyphs; // 0x0
		::Il2CppArray<::System::Object*>* s_GlyphIndexes_MarshallingArray_A; // 0x8
		::Il2CppArray<::System::Object*>* s_GlyphMarshallingStruct_IN; // 0x10
		::Il2CppArray<::System::Object*>* s_GlyphMarshallingStruct_OUT; // 0x18
		::Il2CppArray<::System::Object*>* s_FreeGlyphRects; // 0x20
		::Il2CppArray<::System::Object*>* s_UsedGlyphRects; // 0x28
		::Il2CppArray<::System::Object*>* s_PairAdjustmentRecords_MarshallingArray; // 0x30
		Il2CppObject* s_GlyphLookupDictionary; // 0x38

		::UnityEngine::TextCore::LowLevel::FontEngineError* InitializeFontEngine()
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeFontEngine_Internal()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_INITIALIZEFONTENGINE_INTERNAL_OFFSET))(nullptr);
		}

		::UnityEngine::TextCore::LowLevel::FontEngineError* LoadFontFace(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 LoadFontFace_With_Size_And_FaceIndex_Internal(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_AND_FACEINDEX_INTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::FontEngineError* LoadFontFace(::UnityEngine::Font* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::UnityEngine::Font*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LoadFontFace_With_Size_FromFont_Internal(::UnityEngine::Font* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Font*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_FROMFONT_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::FontEngineError* LoadFontFace(::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(::UnityEngine::Font* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Font*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_AND_FACEINDEX_FROMFONT_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::LowLevel::FontEngineError* LoadFontFace(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::LowLevel::FontEngineError*(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_LOADFONTFACE_WITH_SIZE_BY_FAMILYNAME_AND_STYLENAME_INTERNAL_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean TryGetSystemFontReference(::System::String* str, ::System::String* str, ::UnityEngine::TextCore::LowLevel::FontReference&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::UnityEngine::TextCore::LowLevel::FontReference&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETSYSTEMFONTREFERENCE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean TryGetSystemFontReference_Internal(::System::String* str, ::System::String* str, ::UnityEngine::TextCore::LowLevel::FontReference&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::UnityEngine::TextCore::LowLevel::FontReference&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETSYSTEMFONTREFERENCE_INTERNAL_OFFSET))(str, str, arg, nullptr);
		}

		::UnityEngine::TextCore::FaceInfo* GetFaceInfo()
		{
			return (return (::UnityEngine::TextCore::FaceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_OFFSET))(nullptr);
		}

		::System::Int32 GetFaceInfo_Internal(::UnityEngine::TextCore::FaceInfo&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::TextCore::FaceInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETFACEINFO_INTERNAL_OFFSET))(arg, nullptr);
		}

		::System::UInt32 GetGlyphIndex(::System::UInt32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetGlyphWithUnicodeValue(::System::UInt32 arg, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* arg, ::UnityEngine::TextCore::Glyph&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags*, ::UnityEngine::TextCore::Glyph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGlyphWithUnicodeValue_Internal(::System::UInt32 arg, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* arg, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags*, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHUNICODEVALUE_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGlyphWithIndexValue(::System::UInt32 arg, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* arg, ::UnityEngine::TextCore::Glyph&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags*, ::UnityEngine::TextCore::Glyph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetGlyphWithIndexValue_Internal(::System::UInt32 arg, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags* arg, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags*, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYGETGLYPHWITHINDEXVALUE_INTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetTextureUploadMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETTEXTUREUPLOADMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAddGlyphToTexture(::System::UInt32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::TextCore::Glyph&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode*, Il2CppObject*, Il2CppObject*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::Glyph&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddGlyphToTexture_Internal(::System::UInt32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::UnityEngine::Texture2D* arg, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::UnityEngine::Texture2D*, ::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHTOTEXTURE_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddGlyphsToTexture(Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::UnityEngine::Texture2D* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode*, Il2CppObject*, Il2CppObject*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::UnityEngine::Texture2D*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryAddGlyphsToTexture_Internal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode* arg, ::UnityEngine::Texture2D* arg, ::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode*, ::UnityEngine::Texture2D*, ::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_TRYADDGLYPHSTOTEXTURE_INTERNAL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlyphPairAdjustmentTable(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTTABLE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGlyphPairAdjustmentRecords(Il2CppObject* arg, int32_t&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETGLYPHPAIRADJUSTMENTRECORDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::Il2CppArray<::System::Object*>* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_POPULATEPAIRADJUSTMENTRECORDMARSHALLINGARRAY_FROM_KERNTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPairAdjustmentRecordsFromMarshallingArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GETPAIRADJUSTMENTRECORDSFROMMARSHALLINGARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void GenericListToMarshallingArray(Il2CppObject&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_GENERICLISTTOMARSHALLINGARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMarshallingArraySize(::System::Object[]&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_SETMARSHALLINGARRAYSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResetAtlasTexture(::UnityEngine::Texture2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture2D*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_RESETATLASTEXTURE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_LOWLEVEL_FONTENGINE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

