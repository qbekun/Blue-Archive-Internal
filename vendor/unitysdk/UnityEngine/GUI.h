#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GUISkin; }
namespace UnityEngine { class Rect; }
namespace UnityEngineInternal { class GenericStack; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class ScaleMode; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Rect&; }
namespace UnityEngine { class Color&; }

#define UNITYENGINE_GUI_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA277730)
#define UNITYENGINE_GUI_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA277800)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2778D0)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2779A0)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0xA277A70)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET UNITYSDK_OFFSET(0xA277B40)
#define UNITYENGINE_GUI_GET_CHANGED_OFFSET UNITYSDK_OFFSET(0xA277C10)
#define UNITYENGINE_GUI_SET_CHANGED_OFFSET UNITYSDK_OFFSET(0xA277C50)
#define UNITYENGINE_GUI_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA277C90)
#define UNITYENGINE_GUI_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA277CD0)
#define UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET UNITYSDK_OFFSET(0xA277D10)
#define UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET UNITYSDK_OFFSET(0xA277D50)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA277D90)
#define UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET UNITYSDK_OFFSET(0xA277DD0)
#define UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0xA277E10)
#define UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0xA277E50)
#define UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET UNITYSDK_OFFSET(0xA277E90)
#define UNITYENGINE_GUI_INTERNAL_DOMODALWINDOW_OFFSET UNITYSDK_OFFSET(0xA277ED0)
#define UNITYENGINE_GUI_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA278000)
#define UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET UNITYSDK_OFFSET(0xA2782F0)
#define UNITYENGINE_GUI_SET_SKIN_OFFSET UNITYSDK_OFFSET(0xA278350)
#define UNITYENGINE_GUI_GET_SKIN_OFFSET UNITYSDK_OFFSET(0xA278570)
#define UNITYENGINE_GUI_DOSETSKIN_OFFSET UNITYSDK_OFFSET(0xA278430)
#define UNITYENGINE_GUI_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0xA278740)
#define UNITYENGINE_GUI_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0xA278860)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0xA278900)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0xA278B60)
#define UNITYENGINE_GUI_LABEL_OFFSET UNITYSDK_OFFSET(0xA278AE0)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279070)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279180)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279240)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA2792C0)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279410)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279540)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279680)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279810)
#define UNITYENGINE_GUI_DRAWTEXTURE_OFFSET UNITYSDK_OFFSET(0xA279970)
#define UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET UNITYSDK_OFFSET(0xA27A0B0)
#define UNITYENGINE_GUI_BOX_OFFSET UNITYSDK_OFFSET(0xA27A400)
#define UNITYENGINE_GUI_BOX_OFFSET UNITYSDK_OFFSET(0xA27A4D0)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0xA27A950)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0xA27AA20)
#define UNITYENGINE_GUI_BUTTON_OFFSET UNITYSDK_OFFSET(0xA27ABD0)
#define UNITYENGINE_GUI_DOCONTROL_OFFSET UNITYSDK_OFFSET(0xA27AD60)
#define UNITYENGINE_GUI_DOLABEL_OFFSET UNITYSDK_OFFSET(0xA278C50)
#define UNITYENGINE_GUI_DOBUTTON_OFFSET UNITYSDK_OFFSET(0xA27AC50)
#define UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET UNITYSDK_OFFSET(0xA27B520)
#define UNITYENGINE_GUI_MODALWINDOW_OFFSET UNITYSDK_OFFSET(0xA27B570)
#define UNITYENGINE_GUI_DOMODALWINDOW_OFFSET UNITYSDK_OFFSET(0xA27B740)
#define UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET UNITYSDK_OFFSET(0xA27B8A0)
#define UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2777C0)
#define UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277890)
#define UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277960)
#define UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277A30)
#define UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277B00)
#define UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277BD0)
#define UNITYENGINE_GUI_INTERNAL_DOMODALWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0xA277FB0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUI_TypeDefinitionIndex = 36532;

	class GUI : public Il2CppObject
	{
	public:
		::System::Int32 s_HotTextField; // 0x0
		::System::Int32 s_BoxHash; // 0x4
		::System::Int32 s_ButonHash; // 0x8
		::System::Int32 s_RepeatButtonHash; // 0xC
		::System::Int32 s_ToggleHash; // 0x10
		::System::Int32 s_ButtonGridHash; // 0x14
		::System::Int32 s_SliderHash; // 0x18
		::System::Int32 s_BeginGroupHash; // 0x1C
		::System::Int32 s_ScrollviewHash; // 0x20
		::System::DateTime* _nextScrollStepTime_k__BackingField; // 0x28
		::UnityEngine::GUISkin* s_Skin; // 0x30
		::UnityEngine::Rect* s_ToolTipRect; // 0x38
		::UnityEngineInternal::GenericStack* _scrollViewStates_k__BackingField; // 0x48

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_backgroundColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_backgroundColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_contentColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_contentColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_changed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CHANGED_OFFSET))(nullptr);
		}

		::System::Void set_changed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::Void set_enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* get_blendMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BLENDMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_blitMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BLITMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_roundedRectMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ROUNDEDRECTMATERIAL_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_roundedRectWithColorPerBorderMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_ROUNDEDRECTWITHCOLORPERBORDERMATERIAL_OFFSET))(nullptr);
		}

		::System::Void GrabMouseControl(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GRABMOUSECONTROL_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasMouseControl(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_HASMOUSECONTROL_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseMouseControl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_RELEASEMOUSECONTROL_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* Internal_DoModalWindow(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rect* arg, WindowFunction* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg, ::System::Object* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rect*, WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNAL_DOMODALWINDOW_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void set_nextScrollStepTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_NEXTSCROLLSTEPTIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_skin(::UnityEngine::GUISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::GUISkin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GUISkin* get_skin()
		{
			return (return (::UnityEngine::GUISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void DoSetSkin(::UnityEngine::GUISkin* arg)
		{
			((::System::Void(*)(::UnityEngine::GUISkin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOSETSKIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_matrix()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_MATRIX_OFFSET))(nullptr);
		}

		::System::Void set_matrix(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_MATRIX_OFFSET))(arg, nullptr);
		}

		::System::Void Label(::UnityEngine::Rect* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_OFFSET))(arg, str, nullptr);
		}

		::System::Void Label(::UnityEngine::Rect* arg, ::System::String* str, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::String*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Label(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_LABEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg, ::UnityEngine::Color* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::UnityEngine::Color*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg, ::UnityEngine::Color* arg, ::UnityEngine::Vector4* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::UnityEngine::Color*, ::UnityEngine::Vector4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg, ::UnityEngine::Color* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::UnityEngine::Color*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg, ::UnityEngine::Color* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::UnityEngine::Color*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawTexture(::UnityEngine::Rect* arg, ::UnityEngine::Texture* arg, ::UnityEngine::ScaleMode* arg, ::System::Boolean arg, ::System::Single arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode*, ::System::Boolean, ::System::Single, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DRAWTEXTURE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CalculateScaledTextureRects(::UnityEngine::Rect* arg, ::UnityEngine::ScaleMode* arg, ::System::Single arg, ::UnityEngine::Rect&* arg, ::UnityEngine::Rect&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::ScaleMode*, ::System::Single, ::UnityEngine::Rect&*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALCULATESCALEDTEXTURERECTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Box(::UnityEngine::Rect* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_OFFSET))(arg, str, nullptr);
		}

		::System::Void Box(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BOX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Button(::UnityEngine::Rect* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean Button(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Button(::UnityEngine::Rect* arg, ::System::Int32 arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_BUTTON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean DoControl(::UnityEngine::Rect* arg, ::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOCONTROL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DoLabel(::UnityEngine::Rect* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOLABEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean DoButton(::UnityEngine::Rect* arg, ::System::Int32 arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rect*, ::System::Int32, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOBUTTON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngineInternal::GenericStack* get_scrollViewStates()
		{
			return (return (::UnityEngineInternal::GenericStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_SCROLLVIEWSTATES_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* ModalWindow(::System::Int32 arg, ::UnityEngine::Rect* arg, WindowFunction* arg, ::System::String* str)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::UnityEngine::Rect*, WindowFunction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_MODALWINDOW_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::UnityEngine::Rect* DoModalWindow(::System::Int32 arg, ::UnityEngine::Rect* arg, WindowFunction* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg, ::UnityEngine::GUISkin* arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::UnityEngine::Rect*, WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUISkin*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_DOMODALWINDOW_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CallWindowDelegate(WindowFunction* arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::GUISkin* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::GUIStyle* arg)
		{
			((::System::Void(*)(WindowFunction*, ::System::Int32, ::System::Int32, ::UnityEngine::GUISkin*, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::GUIStyle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_CALLWINDOWDELEGATE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void get_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_color_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_COLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_backgroundColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_BACKGROUNDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_backgroundColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_BACKGROUNDCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_contentColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_GET_CONTENTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_contentColor_Injected(::UnityEngine::Color&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_SET_CONTENTCOLOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_DoModalWindow_Injected(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::Rect&* arg, WindowFunction* arg, ::UnityEngine::GUIContent* arg, ::UnityEngine::GUIStyle* arg, ::System::Object* arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rect&*, WindowFunction*, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::System::Object*, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUI_INTERNAL_DOMODALWINDOW_INJECTED_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

