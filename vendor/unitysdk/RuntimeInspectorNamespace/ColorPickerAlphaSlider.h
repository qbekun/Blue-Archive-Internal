#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Color; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x957FF30)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x957FF40)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x957FF50)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x957FF80)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x957EAD0)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x95800E0)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x957E770)
#define RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x957FF90)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ColorPickerAlphaSlider_TypeDefinitionIndex = 35685;

	class ColorPickerAlphaSlider : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* rectTransform; // 0x18
		::UnityEngine::UI::Image* alphaImage; // 0x20
		::UnityEngine::RectTransform* selector; // 0x28
		::System::Single m_value; // 0x30
		OnValueChangedDelegate* OnValueChanged; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_Value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Color* get_Color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void set_Value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_Color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORPICKERALPHASLIDER_ONDRAG_OFFSET))(arg, nullptr);
		}

	};
}

