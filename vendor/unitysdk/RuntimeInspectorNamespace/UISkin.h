#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class Color; }

#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SELECTEDITEMTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F240)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x958F250)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SELECTEDITEMBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F280)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x958F290)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F2A0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_LABELWIDTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x958F300)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F320)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F380)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BUTTONTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F3E0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDINVALIDBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F440)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDINVALIDBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F4A0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SLIDERBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F4B0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SCROLLBARCOLOR_OFFSET UNITYSDK_OFFSET(0x958F4C0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SLIDERTHUMBCOLOR_OFFSET UNITYSDK_OFFSET(0x958F520)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SELECTEDITEMBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F530)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SCROLLBARCOLOR_OFFSET UNITYSDK_OFFSET(0x958F590)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F5A0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SLIDERBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F5B0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_EXPANDARROWSPACING_OFFSET UNITYSDK_OFFSET(0x958F610)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDNORMALBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F630)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BUTTONBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F640)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_FONT_OFFSET UNITYSDK_OFFSET(0x958F650)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F660)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x958F670)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_TOGGLECHECKMARKCOLOR_OFFSET UNITYSDK_OFFSET(0x958F680)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BUTTONBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F6E0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_WINDOWCOLOR_OFFSET UNITYSDK_OFFSET(0x958F740)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SELECTEDITEMTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F7A0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x958F800)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_EXPANDARROWCOLOR_OFFSET UNITYSDK_OFFSET(0x958F810)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_EXPANDARROWCOLOR_OFFSET UNITYSDK_OFFSET(0x958F870)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDNORMALBACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F880)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x958F8E0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BUTTONTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x958F8F0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INDENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x958F900)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_LABELWIDTHPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x958F910)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INDENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x958F920)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_WINDOWCOLOR_OFFSET UNITYSDK_OFFSET(0x958F930)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_FONT_OFFSET UNITYSDK_OFFSET(0x958F940)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_TOGGLECHECKMARKCOLOR_OFFSET UNITYSDK_OFFSET(0x958F9B0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x958F9C0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x958F9D0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SLIDERTHUMBCOLOR_OFFSET UNITYSDK_OFFSET(0x958F9E0)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_EXPANDARROWSPACING_OFFSET UNITYSDK_OFFSET(0x958FA40)
#define RUNTIMEINSPECTORNAMESPACE_UISKIN_.CTOR_OFFSET UNITYSDK_OFFSET(0x958FA50)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int UISkin_TypeDefinitionIndex = 35732;

	class UISkin : public Il2CppObject
	{
	public:
		::System::Int32 m_version; // 0x18
		::UnityEngine::Font* m_font; // 0x20
		::System::Int32 m_fontSize; // 0x28
		::System::Int32 m_lineHeight; // 0x2C
		::System::Int32 m_indentAmount; // 0x30
		::System::Single m_labelWidthPercentage; // 0x34
		::System::Single m_expandArrowSpacing; // 0x38
		::UnityEngine::Color* m_windowColor; // 0x3C
		::UnityEngine::Color* m_backgroundColor; // 0x4C
		::UnityEngine::Color* m_textColor; // 0x5C
		::UnityEngine::Color* m_scrollbarColor; // 0x6C
		::UnityEngine::Color* m_expandArrowColor; // 0x7C
		::UnityEngine::Color* m_inputFieldNormalBackgroundColor; // 0x8C
		::UnityEngine::Color* m_inputFieldInvalidBackgroundColor; // 0x9C
		::UnityEngine::Color* m_inputFieldTextColor; // 0xAC
		::UnityEngine::Color* m_toggleCheckmarkColor; // 0xBC
		::UnityEngine::Color* m_sliderBackgroundColor; // 0xCC
		::UnityEngine::Color* m_sliderThumbColor; // 0xDC
		::UnityEngine::Color* m_buttonBackgroundColor; // 0xEC
		::UnityEngine::Color* m_buttonTextColor; // 0xFC
		::UnityEngine::Color* m_selectedItemBackgroundColor; // 0x10C
		::UnityEngine::Color* m_selectedItemTextColor; // 0x11C

		::UnityEngine::Color* get_SelectedItemTextColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SELECTEDITEMTEXTCOLOR_OFFSET))(nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_INVALIDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_SelectedItemBackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SELECTEDITEMBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Int32 get_LineHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_LINEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_InputFieldTextColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDTEXTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LabelWidthPercentage(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_LABELWIDTHPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_TextColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_TEXTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ButtonTextColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BUTTONTEXTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputFieldInvalidBackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDINVALIDBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_InputFieldInvalidBackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDINVALIDBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_SliderBackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SLIDERBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_ScrollbarColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SCROLLBARCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_SliderThumbColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SLIDERTHUMBCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_SelectedItemBackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SELECTEDITEMBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ScrollbarColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_SCROLLBARCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_TextColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_TEXTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_SliderBackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SLIDERBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExpandArrowSpacing(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_EXPANDARROWSPACING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_InputFieldNormalBackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDNORMALBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_ButtonBackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BUTTONBACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_Font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_FONT_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_InputFieldTextColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INPUTFIELDTEXTCOLOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_ToggleCheckmarkColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_TOGGLECHECKMARKCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ButtonBackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_BUTTONBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_WindowColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_WINDOWCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedItemTextColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SELECTEDITEMTEXTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_FontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ExpandArrowColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_EXPANDARROWCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ExpandArrowColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_EXPANDARROWCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_InputFieldNormalBackgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INPUTFIELDNORMALBACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_LineHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_LINEHEIGHT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ButtonTextColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BUTTONTEXTCOLOR_OFFSET))(nullptr);
		}

		::System::Int32 get_IndentAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_INDENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Single get_LabelWidthPercentage()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_LABELWIDTHPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Void set_IndentAmount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_INDENTAMOUNT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_WindowColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_WINDOWCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_Font(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_FONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_ToggleCheckmarkColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_TOGGLECHECKMARKCOLOR_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_BackgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_BACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Int32 get_FontSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_FONTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_SliderThumbColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_SET_SLIDERTHUMBCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_ExpandArrowSpacing()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_GET_EXPANDARROWSPACING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_UISKIN_.CTOR_OFFSET))(nullptr);
		}

	};
}

