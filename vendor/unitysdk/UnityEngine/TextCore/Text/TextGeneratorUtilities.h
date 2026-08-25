#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::TextCore::Text { class TextGenerationSettings; }
namespace UnityEngine::TextCore::Text { class TextGenerationSettings&; }
namespace UnityEngine::TextCore::Text { class TextStyle; }
namespace UnityEngine::TextCore::Text { class TextInfo; }
namespace UnityEngine::TextCore::Text { class FontStyles; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine::TextCore::Text { class TextAlignment; }
namespace UnityEngine { class TextAnchor; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0xA2DC740)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXCHARSTOCOLOR_OFFSET UNITYSDK_OFFSET(0xA2DC770)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXCHARSTOCOLOR_OFFSET UNITYSDK_OFFSET(0xA2DDA30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXTOINT_OFFSET UNITYSDK_OFFSET(0xA2DDA00)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0xA2DDED0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0xA2DDF30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_PACKUV_OFFSET UNITYSDK_OFFSET(0xA2DE0A0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_STRINGTOCHARARRAY_OFFSET UNITYSDK_OFFSET(0xA2DE0F0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_RESIZEINTERNALARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ISTAGNAME_OFFSET UNITYSDK_OFFSET(0xA2DED30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ISTAGNAME_OFFSET UNITYSDK_OFFSET(0xA2DF450)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACEOPENINGSTYLETAG_OFFSET UNITYSDK_OFFSET(0xA2DF510)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACEOPENINGSTYLETAG_OFFSET UNITYSDK_OFFSET(0xA2DEDD0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACECLOSINGSTYLETAG_OFFSET UNITYSDK_OFFSET(0xA2DF120)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA2DF960)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETUTF32_OFFSET UNITYSDK_OFFSET(0xA2DE9B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETUTF16_OFFSET UNITYSDK_OFFSET(0xA2DEBE0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETTAGHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2DF8D0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETTAGHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2DFA40)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_FILLCHARACTERVERTEXBUFFERS_OFFSET UNITYSDK_OFFSET(0xA2DFAF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_FILLSPRITEVERTEXBUFFERS_OFFSET UNITYSDK_OFFSET(0xA2E0310)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ADJUSTLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xA2E0A60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_RESIZELINEEXTENTS_OFFSET UNITYSDK_OFFSET(0xA2E0CB0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_LEGACYSTYLETONEWSTYLE_OFFSET UNITYSDK_OFFSET(0xA2E0E70)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_LEGACYALIGNMENTTONEWALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA2E0E80)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E0EA0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextGeneratorUtilities_TypeDefinitionIndex = 35599;

	class TextGeneratorUtilities : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* largePositiveVector2; // 0x0
		::UnityEngine::Vector2* largeNegativeVector2; // 0x8

		::System::Boolean Approximately(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_APPROXIMATELY_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* HexCharsToColor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color32*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXCHARSTOCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Color32* HexCharsToColor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Color32*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXCHARSTOCOLOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 HexToInt(::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_HEXTOINT_OFFSET))(arg, nullptr);
		}

		::System::Single ConvertToFloat(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_CONVERTTOFLOAT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single ConvertToFloat(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_CONVERTTOFLOAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* PackUV(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_PACKUV_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StringToCharArray(::System::String* str, ::System::Object[]&* arg, Il2CppObject&* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object[]&*, Il2CppObject&*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_STRINGTOCHARARRAY_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void ResizeInternalArray(::System::Object[]&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_RESIZEINTERNALARRAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsTagName(::System::String&* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ISTAGNAME_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean IsTagName(::System::Object[]&* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ISTAGNAME_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean ReplaceOpeningStyleTag(::System::Object[]&* arg, ::System::Int32 arg, int32_t&* arg, ::System::Object[]&* arg, int32_t&* arg, Il2CppObject&* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object[]&*, ::System::Int32, int32_t&*, ::System::Object[]&*, int32_t&*, Il2CppObject&*, ::UnityEngine::TextCore::Text::TextGenerationSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACEOPENINGSTYLETAG_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ReplaceOpeningStyleTag(::System::String&* arg, ::System::Int32 arg, int32_t&* arg, ::System::Object[]&* arg, int32_t&* arg, Il2CppObject&* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::System::Int32, int32_t&*, ::System::Object[]&*, int32_t&*, Il2CppObject&*, ::UnityEngine::TextCore::Text::TextGenerationSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACEOPENINGSTYLETAG_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ReplaceClosingStyleTag(::System::Object[]&* arg, int32_t&* arg, Il2CppObject&* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings&* arg)
		{
			((::System::Void(*)(::System::Object[]&*, int32_t&*, Il2CppObject&*, ::UnityEngine::TextCore::Text::TextGenerationSettings&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_REPLACECLOSINGSTYLETAG_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextStyle* GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextStyle*(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETSTYLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetUtf32(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETUTF32_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetUtf16(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETUTF16_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetTagHashCode(::System::Object[]&* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Object[]&*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETTAGHASHCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetTagHashCode(::System::String&* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String&*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_GETTAGHASHCODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FillCharacterVertexBuffers(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_FILLCHARACTERVERTEXBUFFERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FillSpriteVertexBuffers(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_FILLSPRITEVERTEXBUFFERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AdjustLineOffset(::System::Int32 arg, ::System::Int32 arg, ::System::Single arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_ADJUSTLINEOFFSET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ResizeLineExtents(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_RESIZELINEEXTENTS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::FontStyles* LegacyStyleToNewStyle(::UnityEngine::FontStyle* arg)
		{
			return (return (::UnityEngine::TextCore::Text::FontStyles*(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_LEGACYSTYLETONEWSTYLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextAlignment* LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor* arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextAlignment*(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_LEGACYALIGNMENTTONEWALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATORUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

