#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class WindowDragHandler; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ADD_ONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0x9555CC0)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x9555D60)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x9555F70)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x9555F80)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9556480)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATECOLOR_OFFSET UNITYSDK_OFFSET(0x9556490)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_SET_ALPHA_OFFSET UNITYSDK_OFFSET(0x9556820)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GETCURRENTBASECOLOR_OFFSET UNITYSDK_OFFSET(0x95566E0)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x9556830)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_PICKCOLOR_OFFSET UNITYSDK_OFFSET(0x95569C0)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GETSELECTEDCOLOR_OFFSET UNITYSDK_OFFSET(0x9556BF0)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9556D70)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATESELECTORS_OFFSET UNITYSDK_OFFSET(0x9556900)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9556E80)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9556F70)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9555EF0)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_REMOVE_ONCOLORCHANGED_OFFSET UNITYSDK_OFFSET(0x9557030)
#define RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x95570D0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ColorWheelControl_TypeDefinitionIndex = 35619;

	class ColorWheelControl : public Il2CppObject
	{
	public:
		::System::Single RGB_CONST; // 0x0
		::System::Single G_CONST; // 0x0
		::System::Single B_CONST; // 0x0
		::UnityEngine::Color* m_color; // 0x18
		::System::Single _Alpha_k__BackingField; // 0x28
		::UnityEngine::RectTransform* rectTransform; // 0x30
		::UnityEngine::RectTransform* SelectorOut; // 0x38
		::UnityEngine::RectTransform* SelectorIn; // 0x40
		::RuntimeInspectorNamespace::WindowDragHandler* colorPickerWindow; // 0x48
		::System::Single outer; // 0x50
		::UnityEngine::Vector2* inner; // 0x54
		::UnityEngine::Material* mat; // 0x60
		::System::Boolean draggingOuter; // 0x68
		::System::Boolean draggingInner; // 0x69
		::System::Single halfSize; // 0x6C
		::System::Single halfSizeSqr; // 0x70
		::System::Single outerCirclePaddingSqr; // 0x74
		::System::Single innerSquareHalfSize; // 0x78
		::System::Int32 pointerId; // 0x7C
		OnColorChangedDelegate* OnColorChanged; // 0x80

		::System::Void add_OnColorChanged(OnColorChangedDelegate* arg)
		{
			((::System::Void(*)(OnColorChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ADD_ONCOLORCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_AWAKE_OFFSET))(nullptr);
		}

		::System::Single get_Alpha()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GET_ALPHA_OFFSET))(nullptr);
		}

		::System::Void set_Color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATECOLOR_OFFSET))(nullptr);
		}

		::System::Void set_Alpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_SET_ALPHA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetCurrentBaseColor()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GETCURRENTBASECOLOR_OFFSET))(nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

		::System::Void PickColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_PICKCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void GetSelectedColor(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GETSELECTEDCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateSelectors()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATESELECTORS_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_UPDATEPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void remove_OnColorChanged(OnColorChangedDelegate* arg)
		{
			((::System::Void(*)(OnColorChangedDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_REMOVE_ONCOLORCHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_Color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_COLORWHEELCONTROL_GET_COLOR_OFFSET))(nullptr);
		}

	};
}

