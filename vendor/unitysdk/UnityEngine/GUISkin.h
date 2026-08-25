#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class GUISettings; }
namespace UnityEngine { class GUISkin; }

#define UNITYENGINE_GUISKIN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27EC10)
#define UNITYENGINE_GUISKIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA27ED00)
#define UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0xA27EDE0)
#define UNITYENGINE_GUISKIN_GET_FONT_OFFSET UNITYSDK_OFFSET(0xA27EE60)
#define UNITYENGINE_GUISKIN_SET_FONT_OFFSET UNITYSDK_OFFSET(0xA27EE70)
#define UNITYENGINE_GUISKIN_GET_BOX_OFFSET UNITYSDK_OFFSET(0xA27A4C0)
#define UNITYENGINE_GUISKIN_SET_BOX_OFFSET UNITYSDK_OFFSET(0xA27F010)
#define UNITYENGINE_GUISKIN_GET_LABEL_OFFSET UNITYSDK_OFFSET(0xA278AD0)
#define UNITYENGINE_GUISKIN_SET_LABEL_OFFSET UNITYSDK_OFFSET(0xA27F090)
#define UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0xA27F110)
#define UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET UNITYSDK_OFFSET(0xA27F120)
#define UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0xA27F1A0)
#define UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET UNITYSDK_OFFSET(0xA27F1B0)
#define UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA27AA10)
#define UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA27F230)
#define UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA27F2B0)
#define UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET UNITYSDK_OFFSET(0xA27F2C0)
#define UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET UNITYSDK_OFFSET(0xA27B730)
#define UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET UNITYSDK_OFFSET(0xA27F340)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0xA27F3C0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET UNITYSDK_OFFSET(0xA27F3D0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F450)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F460)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0xA27F4E0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0xA27F4F0)
#define UNITYENGINE_GUISKIN_GET_SLIDERMIXED_OFFSET UNITYSDK_OFFSET(0xA27F570)
#define UNITYENGINE_GUISKIN_SET_SLIDERMIXED_OFFSET UNITYSDK_OFFSET(0xA27F580)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0xA27F600)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET UNITYSDK_OFFSET(0xA27F610)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F690)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F6A0)
#define UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0xA27F720)
#define UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET UNITYSDK_OFFSET(0xA27F730)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA27F7B0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA27F7C0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F840)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0xA27F850)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0xA27F8D0)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET UNITYSDK_OFFSET(0xA27F8E0)
#define UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0xA27F960)
#define UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET UNITYSDK_OFFSET(0xA27F970)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA27F9F0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET UNITYSDK_OFFSET(0xA27FA00)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0xA27FA80)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET UNITYSDK_OFFSET(0xA27FA90)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0xA27FB10)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET UNITYSDK_OFFSET(0xA27FB20)
#define UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0xA27FBA0)
#define UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET UNITYSDK_OFFSET(0xA27FBB0)
#define UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA27FC30)
#define UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xA27FC40)
#define UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0xA27FCC0)
#define UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET UNITYSDK_OFFSET(0xA27FCD0)
#define UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0xA27FD50)
#define UNITYENGINE_GUISKIN_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA27FD60)
#define UNITYENGINE_GUISKIN_APPLY_OFFSET UNITYSDK_OFFSET(0xA27ED70)
#define UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET UNITYSDK_OFFSET(0xA27FFC0)
#define UNITYENGINE_GUISKIN_GETSTYLE_OFFSET UNITYSDK_OFFSET(0xA2822C0)
#define UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET UNITYSDK_OFFSET(0xA2826B0)
#define UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0xA278660)
#define UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA282730)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISkin_TypeDefinitionIndex = 36545;

	class GUISkin : public Il2CppObject
	{
	public:
		::UnityEngine::Font* m_Font; // 0x18
		::UnityEngine::GUIStyle* m_box; // 0x20
		::UnityEngine::GUIStyle* m_button; // 0x28
		::UnityEngine::GUIStyle* m_toggle; // 0x30
		::UnityEngine::GUIStyle* m_label; // 0x38
		::UnityEngine::GUIStyle* m_textField; // 0x40
		::UnityEngine::GUIStyle* m_textArea; // 0x48
		::UnityEngine::GUIStyle* m_window; // 0x50
		::UnityEngine::GUIStyle* m_horizontalSlider; // 0x58
		::UnityEngine::GUIStyle* m_horizontalSliderThumb; // 0x60
		::UnityEngine::GUIStyle* m_horizontalSliderThumbExtent; // 0x68
		::UnityEngine::GUIStyle* m_verticalSlider; // 0x70
		::UnityEngine::GUIStyle* m_verticalSliderThumb; // 0x78
		::UnityEngine::GUIStyle* m_verticalSliderThumbExtent; // 0x80
		::UnityEngine::GUIStyle* m_SliderMixed; // 0x88
		::UnityEngine::GUIStyle* m_horizontalScrollbar; // 0x90
		::UnityEngine::GUIStyle* m_horizontalScrollbarThumb; // 0x98
		::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton; // 0xA0
		::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton; // 0xA8
		::UnityEngine::GUIStyle* m_verticalScrollbar; // 0xB0
		::UnityEngine::GUIStyle* m_verticalScrollbarThumb; // 0xB8
		::UnityEngine::GUIStyle* m_verticalScrollbarUpButton; // 0xC0
		::UnityEngine::GUIStyle* m_verticalScrollbarDownButton; // 0xC8
		::UnityEngine::GUIStyle* m_ScrollView; // 0xD0
		::Il2CppArray<::System::Object*>* m_CustomStyles; // 0xD8
		::UnityEngine::GUISettings* m_Settings; // 0xE0
		::UnityEngine::GUIStyle* ms_Error; // 0x0
		Il2CppObject* m_Styles; // 0xE8
		SkinChangedDelegate* m_SkinChanged; // 0x8
		::UnityEngine::GUISkin* current; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void CleanupRoots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_CLEANUPROOTS_OFFSET))(nullptr);
		}

		::UnityEngine::Font* get_font()
		{
			return (return (::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_FONT_OFFSET))(nullptr);
		}

		::System::Void set_font(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_FONT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_box()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BOX_OFFSET))(nullptr);
		}

		::System::Void set_box(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BOX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_label()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_LABEL_OFFSET))(nullptr);
		}

		::System::Void set_label(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_LABEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_textField()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTFIELD_OFFSET))(nullptr);
		}

		::System::Void set_textField(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTFIELD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_textArea()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TEXTAREA_OFFSET))(nullptr);
		}

		::System::Void set_textArea(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TEXTAREA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_button()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void set_button(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_toggle()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_TOGGLE_OFFSET))(nullptr);
		}

		::System::Void set_toggle(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_TOGGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_window()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_WINDOW_OFFSET))(nullptr);
		}

		::System::Void set_window(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_WINDOW_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalSlider()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDER_OFFSET))(nullptr);
		}

		::System::Void set_horizontalSlider(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumb()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_horizontalSliderThumb(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalSliderThumbExtent()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(nullptr);
		}

		::System::Void set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSLIDERTHUMBEXTENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_sliderMixed()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SLIDERMIXED_OFFSET))(nullptr);
		}

		::System::Void set_sliderMixed(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_SLIDERMIXED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalSlider()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDER_OFFSET))(nullptr);
		}

		::System::Void set_verticalSlider(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDER_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumb()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_verticalSliderThumb(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalSliderThumbExtent()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(nullptr);
		}

		::System::Void set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSLIDERTHUMBEXTENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbar()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScrollbar(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarThumb()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARTHUMB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARLEFTBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_HORIZONTALSCROLLBARRIGHTBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbar()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBAR_OFFSET))(nullptr);
		}

		::System::Void set_verticalScrollbar(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBAR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarThumb()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARTHUMB_OFFSET))(nullptr);
		}

		::System::Void set_verticalScrollbarThumb(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARTHUMB_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarUpButton()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARUPBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_verticalScrollbarDownButton()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_VERTICALSCROLLBARDOWNBUTTON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUIStyle* get_scrollView()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_scrollView(::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_SCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_customStyles()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_CUSTOMSTYLES_OFFSET))(nullptr);
		}

		::System::Void set_customStyles(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_SET_CUSTOMSTYLES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUISettings* get_settings()
		{
			return (return (::UnityEngine::GUISettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_SETTINGS_OFFSET))(nullptr);
		}

		::UnityEngine::GUIStyle* get_error()
		{
			return (return (::UnityEngine::GUIStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Void Apply()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_APPLY_OFFSET))(nullptr);
		}

		::System::Void BuildStyleCache()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_BUILDSTYLECACHE_OFFSET))(nullptr);
		}

		::UnityEngine::GUIStyle* GetStyle(::System::String* str)
		{
			return (return (::UnityEngine::GUIStyle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETSTYLE_OFFSET))(str, nullptr);
		}

		::UnityEngine::GUIStyle* FindStyle(::System::String* str)
		{
			return (return (::UnityEngine::GUIStyle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_FINDSTYLE_OFFSET))(str, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISKIN_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

