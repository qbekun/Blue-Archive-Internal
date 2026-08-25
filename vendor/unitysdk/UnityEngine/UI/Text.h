#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class FontData; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class TextGenerationSettings; }
namespace UnityEngine { class VerticalWrapMode; }
namespace UnityEngine { class HorizontalWrapMode; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine { class FontStyle; }

#define UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA482510)
#define UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET UNITYSDK_OFFSET(0xA482570)
#define UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0xA4825E0)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0xA482770)
#define UNITYENGINE_UI_TEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4827D0)
#define UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET UNITYSDK_OFFSET(0xA482900)
#define UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA482920)
#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONTIFNECESSARY_OFFSET UNITYSDK_OFFSET(0xA482B60)
#define UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA482D30)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET UNITYSDK_OFFSET(0xA482E00)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA482E80)
#define UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA483080)
#define UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0xA4830A0)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xA4831C0)
#define UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA4831D0)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0xA4831F0)
#define UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xA483250)
#define UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA483260)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0xA483280)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET UNITYSDK_OFFSET(0xA4832A0)
#define UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA4832C0)
#define UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xA4832D0)
#define UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET UNITYSDK_OFFSET(0xA4834C0)
#define UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA4834E0)
#define UNITYENGINE_UI_TEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA483540)
#define UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET UNITYSDK_OFFSET(0xA4835F0)
#define UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET UNITYSDK_OFFSET(0xA483650)
#define UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA4836B0)
#define UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0xA483700)
#define UNITYENGINE_UI_TEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA482750)
#define UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA483930)
#define UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA483950)
#define UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xA483960)
#define UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0xA483970)
#define UNITYENGINE_UI_TEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0xA482C10)
#define UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xA4839D0)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0xA484670)
#define UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA484680)
#define UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xA4846E0)
#define UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET UNITYSDK_OFFSET(0xA4846F0)
#define UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET UNITYSDK_OFFSET(0xA482840)
#define UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0xA484710)
#define UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA484770)
#define UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET UNITYSDK_OFFSET(0xA4847D0)
#define UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA484830)
#define UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA484840)
#define UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0xA484860)
#define UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA4848C0)
#define UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0xA484940)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Text_TypeDefinitionIndex = 34853;

	class Text : public Il2CppObject
	{
	public:
		::UnityEngine::UI::FontData* m_FontData; // 0xD8
		::System::String* m_Text; // 0xE0
		::UnityEngine::TextGenerator* m_TextCache; // 0xE8
		::UnityEngine::TextGenerator* m_TextCacheForLayout; // 0xF0
		::UnityEngine::Material* s_DefaultText; // 0x0
		::System::Boolean m_DisableFontTextureRebuiltCallback; // 0xF8
		::Il2CppArray<::System::Object*>* m_TempVerts; // 0x100

		::System::Void set_alignment(::UnityEngine::TextAnchor* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetTextAnchorPivot(::UnityEngine::TextAnchor* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETTEXTANCHORPIVOT_OFFSET))(arg, nullptr);
		}

		::System::Single get_pixelsPerUnit()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PIXELSPERUNIT_OFFSET))(nullptr);
		}

		::System::Void set_resizeTextForBestFit(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTFORBESTFIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single get_lineSpacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LINESPACING_OFFSET))(nullptr);
		}

		::UnityEngine::TextGenerationSettings* GetGenerationSettings(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::TextGenerationSettings*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GETGENERATIONSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void AssignDefaultFontIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONTIFNECESSARY_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout()
		{
			return (return (::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATORFORLAYOUT_OFFSET))(nullptr);
		}

		::System::Single get_preferredHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_alignByGeometry()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNBYGEOMETRY_OFFSET))(nullptr);
		}

		::System::Void FontTextureChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_FONTTEXTURECHANGED_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(nullptr);
		}

		::UnityEngine::VerticalWrapMode* get_verticalOverflow()
		{
			return (return (::UnityEngine::VerticalWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_VERTICALOVERFLOW_OFFSET))(nullptr);
		}

		::System::Void set_resizeTextMinSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMINSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_minHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINHEIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::HorizontalWrapMode* get_horizontalOverflow()
		{
			return (return (::UnityEngine::HorizontalWrapMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_HORIZONTALOVERFLOW_OFFSET))(nullptr);
		}

		::System::Int32 get_resizeTextMaxSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMAXSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_resizeTextForBestFit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTFORBESTFIT_OFFSET))(nullptr);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return (return (::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MAINTEXTURE_OFFSET))(nullptr);
		}

		::System::Int32 get_resizeTextMinSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_RESIZETEXTMINSIZE_OFFSET))(nullptr);
		}

		::System::Void set_verticalOverflow(::UnityEngine::VerticalWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::VerticalWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_VERTICALOVERFLOW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode* arg)
		{
			((::System::Void(*)(::UnityEngine::HorizontalWrapMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_HORIZONTALOVERFLOW_OFFSET))(arg, nullptr);
		}

		::System::Void set_lineSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_LINESPACING_OFFSET))(arg, nullptr);
		}

		::System::Void set_alignByGeometry(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_ALIGNBYGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Single get_preferredWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_PREFERREDWIDTH_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONT_OFFSET))(nullptr);
		}

		::UnityEngine::TextAnchor* get_alignment()
		{
			return (return (::UnityEngine::TextAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_ALIGNMENT_OFFSET))(nullptr);
		}

		::System::Int32 get_layoutPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_LAYOUTPRIORITY_OFFSET))(nullptr);
		}

		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_supportRichText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_SUPPORTRICHTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void set_font(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONPOPULATEMESH_OFFSET))(arg, nullptr);
		}

		::System::Single get_flexibleWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_fontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_minWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_MINWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_supportRichText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_SUPPORTRICHTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::TextGenerator* get_cachedTextGenerator()
		{
			return (return (::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_CACHEDTEXTGENERATOR_OFFSET))(nullptr);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_FONTSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_resizeTextMaxSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_SET_RESIZETEXTMAXSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single get_flexibleHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FLEXIBLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_fontSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::System::Void AssignDefaultFont()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_ASSIGNDEFAULTFONT_OFFSET))(nullptr);
		}

		::System::Void UpdateGeometry()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_UPDATEGEOMETRY_OFFSET))(nullptr);
		}

		::UnityEngine::FontStyle* get_fontStyle()
		{
			return (return (::UnityEngine::FontStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXT_GET_FONTSTYLE_OFFSET))(nullptr);
		}

	};
}

