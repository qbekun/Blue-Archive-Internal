#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class TextGenerator; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine::TextCore::Text { class FontStyles; }
namespace UnityEngine::TextCore::Text { class FontStyleStack; }
namespace UnityEngine::TextCore::Text { class TextFontWeight; }
namespace UnityEngine::TextCore::Text { class TextAlignment; }
namespace UnityEngine { class Color32; }
namespace UnityEngine::TextCore::Text { class TextColorGradient; }
namespace UnityEngine::TextCore::Text { class Extents; }
namespace UnityEngine::TextCore::Text { class WordWrapState; }
namespace UnityEngine::TextCore::Text { class TextElementType; }
namespace UnityEngine::TextCore::Text { class TextElement; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::TextCore::Text { class TextGenerationSettings; }
namespace UnityEngine::TextCore::Text { class TextInfo; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::TextCore::Text { class WordWrapState&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0xA2B82B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GENERATETEXT_OFFSET UNITYSDK_OFFSET(0xA2B8B10)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0xA2B8E60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPREFERREDVALUES_OFFSET UNITYSDK_OFFSET(0xA2B9020)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_PREPARE_OFFSET UNITYSDK_OFFSET(0xA2B8CF0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xA2AD790)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVEWORDWRAPPINGSTATE_OFFSET UNITYSDK_OFFSET(0xA2BA8C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_RESTOREWORDWRAPPINGSTATE_OFFSET UNITYSDK_OFFSET(0xA2BAD90)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_VALIDATEHTMLTAG_OFFSET UNITYSDK_OFFSET(0xA2BB240)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVEGLYPHVERTEXINFO_OFFSET UNITYSDK_OFFSET(0xA2C0740)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVESPRITEVERTEXINFO_OFFSET UNITYSDK_OFFSET(0xA2C33C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DRAWUNDERLINEMESH_OFFSET UNITYSDK_OFFSET(0xA2C5CE0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DRAWTEXTHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA2C7070)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_CLEARMESH_OFFSET UNITYSDK_OFFSET(0xA2C7730)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA2C7760)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0xA2C7770)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0xA2B94E0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0xA2C7780)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0xA2B9390)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETSPECIALCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA2B9360)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETELLIPSISSPECIALCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2C7B20)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETUNDERLINESPECIALCHARACTER_OFFSET UNITYSDK_OFFSET(0xA2C6F20)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPADDINGFORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2C7D20)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPREFERREDVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2B91C0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_CALCULATEPREFERREDVALUES_OFFSET UNITYSDK_OFFSET(0xA2C7E30)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2B8350)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextGenerator_TypeDefinitionIndex = 35593;

	class TextGenerator : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::TextGenerator* s_TextGenerator; // 0x0
		::Il2CppArray<::System::Object*>* m_RectTransformCorners; // 0x10
		::System::Single m_MarginWidth; // 0x18
		::System::Single m_MarginHeight; // 0x1C
		::Il2CppArray<::System::Object*>* m_CharBuffer; // 0x20
		::System::Single m_PreferredWidth; // 0x28
		::System::Single m_PreferredHeight; // 0x2C
		::UnityEngine::TextCore::Text::FontAsset* m_CurrentFontAsset; // 0x30
		::UnityEngine::Material* m_CurrentMaterial; // 0x38
		::System::Int32 m_CurrentMaterialIndex; // 0x40
		Il2CppObject* m_MaterialReferenceStack; // 0x48
		::System::Single m_Padding; // 0xA0
		::UnityEngine::TextCore::Text::SpriteAsset* m_CurrentSpriteAsset; // 0xA8
		::System::Int32 m_TotalCharacterCount; // 0xB0
		::System::Single m_FontScale; // 0xB4
		::System::Single m_FontSize; // 0xB8
		::System::Single m_FontScaleMultiplier; // 0xBC
		::System::Single m_CurrentFontSize; // 0xC0
		Il2CppObject* m_SizeStack; // 0xC8
		::UnityEngine::TextCore::Text::FontStyles* m_FontStyleInternal; // 0xE8
		::UnityEngine::TextCore::Text::FontStyleStack* m_FontStyleStack; // 0xEC
		::UnityEngine::TextCore::Text::TextFontWeight* m_FontWeightInternal; // 0xF8
		Il2CppObject* m_FontWeightStack; // 0x100
		::UnityEngine::TextCore::Text::TextAlignment* m_LineJustification; // 0x120
		Il2CppObject* m_LineJustificationStack; // 0x128
		::System::Single m_BaselineOffset; // 0x148
		Il2CppObject* m_BaselineOffsetStack; // 0x150
		::UnityEngine::Color32* m_FontColor32; // 0x170
		::UnityEngine::Color32* m_HtmlColor; // 0x174
		::UnityEngine::Color32* m_UnderlineColor; // 0x178
		::UnityEngine::Color32* m_StrikethroughColor; // 0x17C
		Il2CppObject* m_ColorStack; // 0x180
		Il2CppObject* m_UnderlineColorStack; // 0x1A0
		Il2CppObject* m_StrikethroughColorStack; // 0x1C0
		Il2CppObject* m_HighlightColorStack; // 0x1E0
		::UnityEngine::TextCore::Text::TextColorGradient* m_ColorGradientPreset; // 0x200
		Il2CppObject* m_ColorGradientStack; // 0x208
		Il2CppObject* m_ActionStack; // 0x230
		::System::Boolean m_IsFxMatrixSet; // 0x250
		::System::Single m_LineOffset; // 0x254
		::System::Single m_LineHeight; // 0x258
		::System::Single m_CSpacing; // 0x25C
		::System::Single m_MonoSpacing; // 0x260
		::System::Single m_XAdvance; // 0x264
		::System::Single m_TagLineIndent; // 0x268
		::System::Single m_TagIndent; // 0x26C
		Il2CppObject* m_IndentStack; // 0x270
		::System::Boolean m_TagNoParsing; // 0x290
		::System::Int32 m_CharacterCount; // 0x294
		::System::Int32 m_FirstCharacterOfLine; // 0x298
		::System::Int32 m_LastCharacterOfLine; // 0x29C
		::System::Int32 m_FirstVisibleCharacterOfLine; // 0x2A0
		::System::Int32 m_LastVisibleCharacterOfLine; // 0x2A4
		::System::Single m_MaxLineAscender; // 0x2A8
		::System::Single m_MaxLineDescender; // 0x2AC
		::System::Int32 m_LineNumber; // 0x2B0
		::System::Int32 m_LineVisibleCharacterCount; // 0x2B4
		::System::Int32 m_FirstOverflowCharacterIndex; // 0x2B8
		::System::Int32 m_PageNumber; // 0x2BC
		::System::Single m_MarginLeft; // 0x2C0
		::System::Single m_MarginRight; // 0x2C4
		::System::Single m_Width; // 0x2C8
		::UnityEngine::TextCore::Text::Extents* m_MeshExtents; // 0x2CC
		::System::Single m_MaxCapHeight; // 0x2DC
		::System::Single m_MaxAscender; // 0x2E0
		::System::Single m_MaxDescender; // 0x2E4
		::System::Boolean m_IsNewPage; // 0x2E8
		::System::Boolean m_IsNonBreakingSpace; // 0x2E9
		::UnityEngine::TextCore::Text::WordWrapState* m_SavedWordWrapState; // 0x2F0
		::UnityEngine::TextCore::Text::WordWrapState* m_SavedLineState; // 0x600
		::System::Int32 m_LoopCountA; // 0x910
		::UnityEngine::TextCore::Text::TextElementType* m_TextElementType; // 0x914
		::System::Boolean m_IsParsingText; // 0x915
		::System::Int32 m_SpriteIndex; // 0x918
		::UnityEngine::Color32* m_SpriteColor; // 0x91C
		::UnityEngine::TextCore::Text::TextElement* m_CachedTextElement; // 0x920
		::UnityEngine::Color32* m_HighlightColor; // 0x928
		::System::Single m_CharWidthAdjDelta; // 0x92C
		::UnityEngine::Matrix4x4* m_FxMatrix; // 0x930
		::System::Single m_MaxFontSize; // 0x970
		::System::Single m_MinFontSize; // 0x974
		::System::Boolean m_IsCharacterWrappingEnabled; // 0x978
		::System::Single m_StartOfLineAscender; // 0x97C
		::System::Single m_LineSpacingDelta; // 0x980
		::System::Boolean m_IsMaskingEnabled; // 0x984
		::Il2CppArray<::System::Object*>* m_MaterialReferences; // 0x988
		::System::Int32 m_SpriteCount; // 0x990
		Il2CppObject* m_StyleStack; // 0x998
		::System::Int32 m_SpriteAnimationId; // 0x9B8
		::Il2CppArray<::System::Object*>* m_InternalTextParsingBuffer; // 0x9C0
		::Il2CppArray<::System::Object*>* m_Attributes; // 0x9C8
		::Il2CppArray<::System::Object*>* m_XmlAttribute; // 0x9D0
		::Il2CppArray<::System::Object*>* m_RichTextTag; // 0x9D8
		Il2CppObject* m_MaterialReferenceIndexLookup; // 0x9E0
		::System::Boolean m_IsCalculatingPreferredValues; // 0x9E8
		::UnityEngine::TextCore::Text::SpriteAsset* m_DefaultSpriteAsset; // 0x9F0
		::System::Boolean m_TintSprite; // 0x9F8
		SpecialCharacter* m_Ellipsis; // 0xA00
		SpecialCharacter* m_Underline; // 0xA20
		::System::Boolean m_IsUsingBold; // 0xA40
		::System::Boolean m_IsSdfShader; // 0xA41
		::Il2CppArray<::System::Object*>* m_InternalTextElementInfo; // 0xA48
		::System::Int32 m_RecursiveCount; // 0xA50

		::UnityEngine::TextCore::Text::TextGenerator* GetTextGenerator()
		{
			return (return (::UnityEngine::TextCore::Text::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETTEXTGENERATOR_OFFSET))(nullptr);
		}

		::System::Void GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GENERATETEXT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetCursorPosition(::UnityEngine::TextCore::Text::TextInfo* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::TextCore::Text::TextInfo*, ::UnityEngine::Rect*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETCURSORPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPREFERREDVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_PREPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GENERATETEXTMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SaveWordWrappingState(::UnityEngine::TextCore::Text::WordWrapState&* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::WordWrapState&*, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVEWORDWRAPPINGSTATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 RestoreWordWrappingState(::UnityEngine::TextCore::Text::WordWrapState&* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::TextCore::Text::WordWrapState&*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_RESTOREWORDWRAPPINGSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ValidateHtmlTag(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, int32_t&* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, int32_t&*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_VALIDATEHTMLTAG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SaveGlyphVertexInfo(::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVEGLYPHVERTEXINFO_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SaveSpriteVertexInfo(::UnityEngine::Color32* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SAVESPRITEVERTEXINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawUnderlineMesh(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, int32_t&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, int32_t&*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DRAWUNDERLINEMESH_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTextHighlight(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, int32_t&* arg, ::UnityEngine::Color32* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, int32_t&*, ::UnityEngine::Color32*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DRAWTEXTHIGHLIGHT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ClearMesh(::System::Boolean arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_CLEARMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_ENABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void DisableMasking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_DISABLEMASKING_OFFSET))(nullptr);
		}

		::System::Void SetArraySizes(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_SETARRAYSIZES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::TextCore::Text::TextElement* GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::System::UInt32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::UnityEngine::TextCore::Text::FontStyles* arg, ::UnityEngine::TextCore::Text::TextFontWeight* arg, bool&* arg)
		{
			return (return (::UnityEngine::TextCore::Text::TextElement*(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::FontStyles*, ::UnityEngine::TextCore::Text::TextFontWeight*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETTEXTELEMENT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeMarginSize(::UnityEngine::Rect* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_COMPUTEMARGINSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETSPECIALCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETELLIPSISSPECIALCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETUNDERLINESPECIALCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Single GetPaddingForMaterial(::UnityEngine::Material* arg, ::System::Boolean arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Material*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPADDINGFORMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_GETPREFERREDVALUESINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalculatePreferredValues(::System::Single arg, ::UnityEngine::Vector2* arg, ::System::Boolean arg, ::UnityEngine::TextCore::Text::TextGenerationSettings* arg, ::UnityEngine::TextCore::Text::TextInfo* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, ::UnityEngine::Vector2*, ::System::Boolean, ::UnityEngine::TextCore::Text::TextGenerationSettings*, ::UnityEngine::TextCore::Text::TextInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_CALCULATEPREFERREDVALUES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTGENERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

