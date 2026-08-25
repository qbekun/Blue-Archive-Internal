#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ColorPicker; }
namespace UnityEngine::UI { class Image; }
namespace RuntimeInspectorNamespace { class ColorWheelControl; }
namespace RuntimeInspectorNamespace { class ColorPickerAlphaSlider; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Color32; }

#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_START_OFFSET UNITYSDK_OFFSET(0x957D070)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_CANCEL_OFFSET UNITYSDK_OFFSET(0x957DC90)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x957E320)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x957E330)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x957E480)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_REFRESHSKIN_OFFSET UNITYSDK_OFFSET(0x957E640)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONSELECTEDCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0x957DA20)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_SHOW_OFFSET UNITYSDK_OFFSET(0x957E7C0)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_CLOSE_OFFSET UNITYSDK_OFFSET(0x957E2B0)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER__AWAKE_B__19_0_OFFSET UNITYSDK_OFFSET(0x957EB30)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONALPHACHANGED_OFFSET UNITYSDK_OFFSET(0x957F110)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONRGBACHANGED_OFFSET UNITYSDK_OFFSET(0x957F730)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x957FDF0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ColorPicker_TypeDefinitionIndex = 35683;

	class ColorPicker : public Il2CppObject
	{
	public:
		::RuntimeInspectorNamespace::ColorPicker* m_instance; // 0x0
		::UnityEngine::UI::Image* panel; // 0x28
		::RuntimeInspectorNamespace::ColorWheelControl* colorWheel; // 0x30
		::RuntimeInspectorNamespace::ColorPickerAlphaSlider* alphaSlider; // 0x38
		::UnityEngine::UI::Text* rgbaText; // 0x40
		::RuntimeInspectorNamespace::BoundInputField* rInput; // 0x48
		::RuntimeInspectorNamespace::BoundInputField* gInput; // 0x50
		::RuntimeInspectorNamespace::BoundInputField* bInput; // 0x58
		::RuntimeInspectorNamespace::BoundInputField* aInput; // 0x60
		::UnityEngine::UI::LayoutElement* rgbaLayoutElement; // 0x68
		::UnityEngine::UI::LayoutElement* buttonsLayoutElement; // 0x70
		::UnityEngine::UI::Button* cancelButton; // 0x78
		::UnityEngine::UI::Button* okButton; // 0x80
		::UnityEngine::Canvas* referenceCanvas; // 0x88
		::UnityEngine::Color* initialValue; // 0x90
		OnColorChangedDelegate* onColorChanged; // 0xA0
		OnColorChangedDelegate* onColorConfirmed; // 0xA8

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_START_OFFSET))(nullptr);
		}

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_CANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void DestroyInstance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_DESTROYINSTANCE_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::ColorPicker* get_Instance()
		{
			return (return (::RuntimeInspectorNamespace::ColorPicker*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void RefreshSkin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_REFRESHSKIN_OFFSET))(nullptr);
		}

		::System::Void OnSelectedColorChanged(::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONSELECTEDCOLORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Show(OnColorChangedDelegate* arg, OnColorChangedDelegate* arg, ::UnityEngine::Color* arg, ::UnityEngine::Canvas* arg)
		{
			((::System::Void(*)(OnColorChangedDelegate*, OnColorChangedDelegate*, ::UnityEngine::Color*, ::UnityEngine::Canvas*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_SHOW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_CLOSE_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__19_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER__AWAKE_B__19_0_OFFSET))(nullptr);
		}

		::System::Void OnAlphaChanged(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONALPHACHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnRGBAChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_ONRGBACHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKER_AWAKE_OFFSET))(nullptr);
		}

	};
}

