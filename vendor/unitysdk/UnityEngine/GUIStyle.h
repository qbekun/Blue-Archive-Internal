#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUIStyleState; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class TextAnchor; }
namespace UnityEngine { class TextClipping; }
namespace UnityEngine { class FontStyle; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Vector2&; }

#define UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET UNITYSDK_OFFSET(0xA282B90)
#define UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET UNITYSDK_OFFSET(0xA282BD0)
#define UNITYENGINE_GUISTYLE_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA282C10)
#define UNITYENGINE_GUISTYLE_SET_FONT_OFFSET UNITYSDK_OFFSET(0xA282C50)
#define UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0xA282C90)
#define UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET UNITYSDK_OFFSET(0xA282CD0)
#define UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET UNITYSDK_OFFSET(0xA282D10)
#define UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET UNITYSDK_OFFSET(0xA282D50)
#define UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA282D90)
#define UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET UNITYSDK_OFFSET(0xA282DD0)
#define UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0xA282E10)
#define UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET UNITYSDK_OFFSET(0xA282180)
#define UNITYENGINE_GUISTYLE_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xA282E50)
#define UNITYENGINE_GUISTYLE_SET_FONTSTYLE_OFFSET UNITYSDK_OFFSET(0xA282E90)
#define UNITYENGINE_GUISTYLE_SET_RICHTEXT_OFFSET UNITYSDK_OFFSET(0xA282ED0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA282F10)
#define UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET UNITYSDK_OFFSET(0xA282F50)
#define UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0xA282F90)
#define UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET UNITYSDK_OFFSET(0xA282FD0)
#define UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET UNITYSDK_OFFSET(0xA283010)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA283050)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0xA283090)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET UNITYSDK_OFFSET(0xA283130)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0xA2831D0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0xA283290)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET UNITYSDK_OFFSET(0xA283330)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET UNITYSDK_OFFSET(0xA2833D0)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0xA283470)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET UNITYSDK_OFFSET(0xA27B490)
#define UNITYENGINE_GUISTYLE_ISTOOLTIPACTIVE_OFFSET UNITYSDK_OFFSET(0xA27B450)
#define UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET UNITYSDK_OFFSET(0xA27EFD0)
#define UNITYENGINE_GUISTYLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27FEF0)
#define UNITYENGINE_GUISTYLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA283500)
#define UNITYENGINE_GUISTYLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA2835E0)
#define UNITYENGINE_GUISTYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA282120)
#define UNITYENGINE_GUISTYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA27FF70)
#define UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA2821C0)
#define UNITYENGINE_GUISTYLE_GET_BORDER_OFFSET UNITYSDK_OFFSET(0xA283740)
#define UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET UNITYSDK_OFFSET(0xA2837F0)
#define UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET UNITYSDK_OFFSET(0xA2838A0)
#define UNITYENGINE_GUISTYLE_GET_LINEHEIGHT_OFFSET UNITYSDK_OFFSET(0xA283950)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0xA27B360)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0xA27A770)
#define UNITYENGINE_GUISTYLE_DRAW_OFFSET UNITYSDK_OFFSET(0xA283AD0)
#define UNITYENGINE_GUISTYLE_GET_NONE_OFFSET UNITYSDK_OFFSET(0xA27C430)
#define UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET UNITYSDK_OFFSET(0xA283C80)
#define UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0xA283CF0)
#define UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET UNITYSDK_OFFSET(0xA283D50)
#define UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0xA283DA0)
#define UNITYENGINE_GUISTYLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA283DF0)
#define UNITYENGINE_GUISTYLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA283EF0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2830E0)
#define UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET UNITYSDK_OFFSET(0xA283180)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA283240)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2832E0)
#define UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA283380)
#define UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA283420)
#define UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2834C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStyle_TypeDefinitionIndex = 36547;

	class GUIStyle : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10
		::UnityEngine::GUIStyleState* m_Normal; // 0x18
		::UnityEngine::GUIStyleState* m_Hover; // 0x20
		::UnityEngine::GUIStyleState* m_Active; // 0x28
		::UnityEngine::GUIStyleState* m_Focused; // 0x30
		::UnityEngine::GUIStyleState* m_OnNormal; // 0x38
		::UnityEngine::GUIStyleState* m_OnHover; // 0x40
		::UnityEngine::GUIStyleState* m_OnActive; // 0x48
		::UnityEngine::GUIStyleState* m_OnFocused; // 0x50
		::UnityEngine::RectOffset* m_Border; // 0x58
		::UnityEngine::RectOffset* m_Padding; // 0x60
		::UnityEngine::RectOffset* m_Margin; // 0x68
		::UnityEngine::RectOffset* m_Overflow; // 0x70
		::System::String* m_Name; // 0x78
		::System::Boolean showKeyboardFocus; // 0x0
		::UnityEngine::GUIStyle* s_None; // 0x8

		::System::String* get_rawName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_RAWNAME_OFFSET))(nullptr);
		}

		::System::Void set_rawName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RAWNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::Font* get_font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FONT_OFFSET))(nullptr);
		}

		::System::Void set_font(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONT_OFFSET))(arg, nullptr);
		}

		::System::Void set_alignment(::UnityEngine::TextAnchor* arg)
		{
			((::System::Void(*)(::UnityEngine::TextAnchor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_ALIGNMENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_wordWrap(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_WORDWRAP_OFFSET))(arg, nullptr);
		}

		::System::Void set_clipping(::UnityEngine::TextClipping* arg)
		{
			((::System::Void(*)(::UnityEngine::TextClipping*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_CLIPPING_OFFSET))(arg, nullptr);
		}

		::System::Single get_fixedWidth()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDWIDTH_OFFSET))(nullptr);
		}

		::System::Single get_fixedHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_FIXEDHEIGHT_OFFSET))(nullptr);
		}

		::System::Boolean get_stretchWidth()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHWIDTH_OFFSET))(nullptr);
		}

		::System::Boolean get_stretchHeight()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_STRETCHHEIGHT_OFFSET))(nullptr);
		}

		::System::Void set_stretchHeight(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_STRETCHHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void set_fontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_fontStyle(::UnityEngine::FontStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::FontStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_FONTSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_richText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_RICHTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_Create(::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Internal_Copy(::UnityEngine::GUIStyle* arg, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_COPY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_Destroy(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DESTROY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStyleStatePtr(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETSTYLESTATEPTR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRectOffsetPtr(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETRECTOFFSETPTR_OFFSET))(arg, nullptr);
		}

		::System::Single Internal_GetLineHeight(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETLINEHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_Draw(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Draw2(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Internal_GetCursorPixelPosition(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_GetCursorStringIndex(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Internal_GetSelectedRenderedText(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Internal_CalcSize(::UnityEngine::GUIContent* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::GUIContent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single Internal_CalcHeight(::UnityEngine::GUIContent* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::GUIContent*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMouseTooltip(::System::String* str, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsTooltipActive(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_ISTOOLTIPACTIVE_OFFSET))(str, nullptr);
		}

		::System::Void SetDefaultFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETDEFAULTFONT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SET_NAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::GUIStyleState* get_normal()
		{
			return (return (::UnityEngine::GUIStyleState*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NORMAL_OFFSET))(nullptr);
		}

		::UnityEngine::RectOffset* get_border()
		{
			return (return (::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_BORDER_OFFSET))(nullptr);
		}

		::UnityEngine::RectOffset* get_margin()
		{
			return (return (::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_MARGIN_OFFSET))(nullptr);
		}

		::UnityEngine::RectOffset* get_padding()
		{
			return (return (::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_PADDING_OFFSET))(nullptr);
		}

		::System::Single get_lineHeight()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_LINEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Draw(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Draw(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Draw(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_DRAW_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_none()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GET_NONE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* GetCursorPixelPosition(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORPIXELPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCursorStringIndex(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_GETCURSORSTRINGINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* CalcSize(::UnityEngine::GUIContent* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::GUIContent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCSIZE_OFFSET))(arg, nullptr);
		}

		::System::Single CalcHeight(::UnityEngine::GUIContent* arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::UnityEngine::GUIContent*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_CALCHEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Draw_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::GUIContent* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::UnityEngine::GUIContent*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_Draw2_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_DRAW2_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_GetCursorPixelPosition_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect&*, ::UnityEngine::GUIContent*, ::System::Int32, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORPIXELPOSITION_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Internal_GetCursorStringIndex_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::Vector2&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rect&*, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETCURSORSTRINGINDEX_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Internal_GetSelectedRenderedText_Injected(::UnityEngine::Rect&* arg, ::UnityEngine::GUIContent* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Rect&*, ::UnityEngine::GUIContent*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_GETSELECTEDRENDEREDTEXT_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_CalcSize_Injected(::UnityEngine::GUIContent* arg, ::UnityEngine::Vector2&* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIContent*, ::UnityEngine::Vector2&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_INTERNAL_CALCSIZE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetMouseTooltip_Injected(::System::String* str, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTYLE_SETMOUSETOOLTIP_INJECTED_OFFSET))(str, arg, nullptr);
		}

	};
}

