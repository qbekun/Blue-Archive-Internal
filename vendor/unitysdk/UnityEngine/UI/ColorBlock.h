#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine::UI { class ColorBlock; }

#define UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDA0)
#define UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDB0)
#define UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDC0)
#define UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDD0)
#define UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDE0)
#define UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECDF0)
#define UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECE00)
#define UNITYENGINE_UI_COLORBLOCK_SET_SELECTEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECE10)
#define UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECE20)
#define UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET UNITYSDK_OFFSET(0xA2ECE30)
#define UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA2ECE40)
#define UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xA2ECE50)
#define UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0xA2ECE60)
#define UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET UNITYSDK_OFFSET(0xA2ECE70)
#define UNITYENGINE_UI_COLORBLOCK_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2ECE80)
#define UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2ECEF0)
#define UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA2ECFB0)
#define UNITYENGINE_UI_COLORBLOCK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA2ED1F0)
#define UNITYENGINE_UI_COLORBLOCK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xA2ED280)
#define UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA2ED310)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ColorBlock_TypeDefinitionIndex = 34748;

	class ColorBlock : public Il2CppObject
	{
	public:
		::UnityEngine::Color* m_NormalColor; // 0x10
		::UnityEngine::Color* m_HighlightedColor; // 0x20
		::UnityEngine::Color* m_PressedColor; // 0x30
		::UnityEngine::Color* m_SelectedColor; // 0x40
		::UnityEngine::Color* m_DisabledColor; // 0x50
		::System::Single m_ColorMultiplier; // 0x60
		::System::Single m_FadeDuration; // 0x64
		::UnityEngine::UI::ColorBlock* defaultColorBlock; // 0x0

		::UnityEngine::Color* get_normalColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_NORMALCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_normalColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_NORMALCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_highlightedColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_HIGHLIGHTEDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_highlightedColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_HIGHLIGHTEDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_pressedColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_PRESSEDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_pressedColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_PRESSEDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_selectedColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_SELECTEDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_selectedColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_SELECTEDCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_disabledColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_DISABLEDCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_disabledColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_DISABLEDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_colorMultiplier()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_COLORMULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_colorMultiplier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_COLORMULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Single get_fadeDuration()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GET_FADEDURATION_OFFSET))(nullptr);
		}

		::System::Void set_fadeDuration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_SET_FADEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UI::ColorBlock* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ColorBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::UI::ColorBlock* arg, ::UnityEngine::UI::ColorBlock* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ColorBlock*, ::UnityEngine::UI::ColorBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::UI::ColorBlock* arg, ::UnityEngine::UI::ColorBlock* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UI::ColorBlock*, ::UnityEngine::UI::ColorBlock*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_COLORBLOCK_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

