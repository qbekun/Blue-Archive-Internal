#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class DrivenRectTransformTracker; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::UI { class CanvasUpdate; }

#define UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET UNITYSDK_OFFSET(0xA47EAF0)
#define UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0xA47EB10)
#define UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA47EC20)
#define UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA47F5E0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET UNITYSDK_OFFSET(0xA47F6D0)
#define UNITYENGINE_UI_SLIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA47F710)
#define UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0xA47F850)
#define UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA47F8E0)
#define UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0xA47F900)
#define UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA47F910)
#define UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA47F920)
#define UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0xA47FD00)
#define UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET UNITYSDK_OFFSET(0xA47FD10)
#define UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET UNITYSDK_OFFSET(0xA47FD70)
#define UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA47FF10)
#define UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA47FF30)
#define UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xA480300)
#define UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xA480310)
#define UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET UNITYSDK_OFFSET(0xA4803A0)
#define UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xA480420)
#define UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0xA480430)
#define UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA480450)
#define UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET UNITYSDK_OFFSET(0xA480A80)
#define UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET UNITYSDK_OFFSET(0xA47F700)
#define UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET UNITYSDK_OFFSET(0xA480AB0)
#define UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0xA480970)
#define UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0xA480B10)
#define UNITYENGINE_UI_SLIDER_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA480B20)
#define UNITYENGINE_UI_SLIDER_SET_OFFSET UNITYSDK_OFFSET(0xA480B30)
#define UNITYENGINE_UI_SLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA480CE0)
#define UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA480D30)
#define UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA480F10)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET UNITYSDK_OFFSET(0xA480F40)
#define UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET UNITYSDK_OFFSET(0xA47EC80)
#define UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0xA47FCA0)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET UNITYSDK_OFFSET(0xA480F60)
#define UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA480F80)
#define UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0xA480F90)
#define UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA480FA0)
#define UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET UNITYSDK_OFFSET(0xA47FF70)
#define UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET UNITYSDK_OFFSET(0xA4813C0)
#define UNITYENGINE_UI_SLIDER_REBUILD_OFFSET UNITYSDK_OFFSET(0xA4813F0)
#define UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xA481400)
#define UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET UNITYSDK_OFFSET(0xA481420)
#define UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA481430)
#define UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET UNITYSDK_OFFSET(0xA4814A0)
#define UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xA481500)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Slider_TypeDefinitionIndex = 34849;

	class Slider : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* m_FillRect; // 0xF8
		::UnityEngine::RectTransform* m_HandleRect; // 0x100
		Direction* m_Direction; // 0x108
		::System::Single m_MinValue; // 0x10C
		::System::Single m_MaxValue; // 0x110
		::System::Boolean m_WholeNumbers; // 0x114
		::System::Single m_Value; // 0x118
		SliderEvent* m_OnValueChanged; // 0x120
		::UnityEngine::UI::Image* m_FillImage; // 0x128
		::UnityEngine::Transform* m_FillTransform; // 0x130
		::UnityEngine::RectTransform* m_FillContainerRect; // 0x138
		::UnityEngine::Transform* m_HandleTransform; // 0x140
		::UnityEngine::RectTransform* m_HandleContainerRect; // 0x148
		::UnityEngine::Vector2* m_Offset; // 0x150
		::UnityEngine::DrivenRectTransformTracker* m_Tracker; // 0x158
		::System::Boolean m_DelayedUpdateVisuals; // 0x159

		::System::Boolean get_reverseValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_REVERSEVALUE_OFFSET))(nullptr);
		}

		::System::Single ClampValue(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_CLAMPVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_direction(Direction* arg)
		{
			((::System::Void(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Single get_value()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_VALUE_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnUp()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_minValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MINVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Single get_minValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MINVALUE_OFFSET))(nullptr);
		}

		SliderEvent* get_onValueChanged()
		{
			return (return (SliderEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_ONVALUECHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* arg, ::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEDRAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_wholeNumbers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_WHOLENUMBERS_OFFSET))(nullptr);
		}

		::System::Boolean MayDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_MAYDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void SetDirection(Direction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Direction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SETDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_value(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONENABLE_OFFSET))(nullptr);
		}

		Direction* get_direction()
		{
			return (return (Direction*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_maxValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_MAXVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_wholeNumbers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_WHOLENUMBERS_OFFSET))(arg, nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Single get_stepSize()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_STEPSIZE_OFFSET))(nullptr);
		}

		Axis* get_axis()
		{
			return (return (Axis*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_AXIS_OFFSET))(nullptr);
		}

		::System::Void set_fillRect(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_FILLRECT_OFFSET))(arg, nullptr);
		}

		::System::Single get_normalizedValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_NORMALIZEDVALUE_OFFSET))(nullptr);
		}

		::System::Single get_maxValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* UnityEngine.UI.ICanvasElement.get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Single arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDISABLE_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnRight()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONRIGHT_OFFSET))(nullptr);
		}

		::System::Void UpdateVisuals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATEVISUALS_OFFSET))(nullptr);
		}

		::System::Void set_normalizedValue(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_NORMALIZEDVALUE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnLeft()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONLEFT_OFFSET))(nullptr);
		}

		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::UnityEngine::RectTransform* get_handleRect()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_HANDLERECT_OFFSET))(nullptr);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::AxisEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCachedReferences()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_UPDATECACHEDREFERENCES_OFFSET))(nullptr);
		}

		::UnityEngine::UI::Selectable* FindSelectableOnDown()
		{
			return (return (::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_FINDSELECTABLEONDOWN_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void set_onValueChanged(SliderEvent* arg)
		{
			((::System::Void(*)(SliderEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_ONVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RectTransform* get_fillRect()
		{
			return (return (::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_GET_FILLRECT_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_handleRect(::UnityEngine::RectTransform* arg)
		{
			((::System::Void(*)(::UnityEngine::RectTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_SET_HANDLERECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_SLIDER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(nullptr);
		}

	};
}

